#include "Global.h"
#include <cxxabi.h>

MonoDomain* Global::__domain__ = NULL;

Global::__assemblymap__ Global::assemblymap = Global::__assemblymap__();
Global::__imagemap__ Global::imagemap = Global::__imagemap__();

void Global::Initialize()
{
	__domain__ = mono_jit_init_version("libmonocpp", "v4.0.30319");

	mono_config_parse(NULL);
}

MonoDomain* Global::GetDomain()
{
	return __domain__;
}

MonoAssembly* Global::GetAssembly(const char* assemblyName)
{
	MonoAssembly* assembly = NULL;

	bool bFound = false;
	__assemblymap__::iterator p;
	for (p = assemblymap.begin(); p != assemblymap.end(); ++p)
	{
		std::string strKey;
		strKey = p->first;
		if (strcmp(strKey.c_str(), assemblyName) == 0)
		{
			assembly = p->second;
			bFound = true;
		}
	}
	if (!bFound)
	{
		assembly = mono_domain_assembly_open(__domain__, assemblyName);
		assemblymap.insert(__assemblypair__(assemblyName, assembly));
	}
	return assembly;
}

MonoImage* Global::GetImage(const char* assemblyName)
{
	MonoAssembly* assembly = GetAssembly(assemblyName);
	if (assembly == NULL) return NULL;
	MonoImage* image = NULL;
	bool bFound = false;
	__imagemap__::iterator p;
	for (p = imagemap.begin(); p != imagemap.end(); ++p)
	{
		std::string strKey;
		strKey = p->first;
		if (strcmp(strKey.c_str(), assemblyName) == 0)
		{
			image = p->second;
			bFound = true;
		}
	}
	if (!bFound)
	{
		image = mono_assembly_get_image(assembly);
		imagemap.insert(__imagepair__(assemblyName, image));
	}
	return image;
}

MonoObject* Global::New(const char* assemblyName, const char* nameSpace, const char* typeName)
{
	MonoImage* image = GetImage(assemblyName);
	MonoClass* kclass = mono_class_from_name(image, nameSpace, typeName);
	MonoObject* obj = mono_object_new(__domain__, kclass);
	mono_runtime_object_init(obj);
	return obj;
}

MonoObject* Global::New(const char* assemblyName, const char* nameSpace, const char* typeName, int pcount, MonoType **parameterTypes, void **parameters)
{
	MonoImage* image = GetImage(assemblyName);
	MonoClass* kclass = mono_class_from_name(image, nameSpace, typeName);
	MonoObject* obj = mono_object_new(__domain__, kclass);

	if (parameters == NULL)
		mono_runtime_object_init(obj);
	else
	{
		//Find Constructor from Methods
		void* objptr = mono_object_unbox(obj);
		MonoMethod* ctor = NULL;
		MonoMethod* m = NULL;
		gpointer iter;
		gpointer sigiter = NULL;
		iter = NULL;
		while ((m = mono_class_get_methods(kclass, &iter))) {
			if (strcmp(mono_method_get_name(m), ".ctor") == 0) {
				MonoMethodSignature * sig = mono_method_signature(m);
				bool found = true;
				MonoType **pp = parameterTypes;
				MonoType* p;
				while ((p = mono_signature_get_params(sig, &sigiter)))
				{
					if (pp != NULL)
					{
						if (strcmp(mono_type_get_name(p), mono_type_get_name(*pp)) != 0)
						{
							found = false;
							break;
						}
						pp++;
					}
					if (!found) break;
				}
				if (found)
				{
					ctor = m;
					break;
				}
			}
		}
		if (ctor == NULL)
		{
			mono_runtime_object_init(obj);
		}
		else 
		{
			mono_runtime_invoke(ctor, objptr, parameters, NULL);
		}
	}
	return obj;
}

MonoObject* Global::New(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, int pcount, MonoType **parameterTypes, void **parameters)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return NULL;
	mono_runtime_class_init(mono_class_vtable(__domain__, kclass));
	MonoObject *obj = mono_object_new(__domain__, kclass);
	if (obj == NULL) return NULL;
	if (parameters == NULL)
	{
		mono_runtime_object_init(obj);
	}
	else
	{
		//Find Constructor from Methods
		MonoMethod* ctor = NULL;
		MonoMethod* m = NULL;
		gpointer iter;
		gpointer sigiter = NULL;
		iter = NULL;
		void* objptr = mono_object_unbox(obj);
		bool found = false;
		while ((m = mono_class_get_methods(kclass, &iter))) {
			if (strcmp(mono_method_get_name(m), ".ctor") == 0) {
				MonoMethodSignature * signature = mono_method_signature(m);
				if (mono_signature_get_param_count(signature) == pcount)
				{
					if (pcount == 0)
					{
						found = true;
						ctor = m;
						break;
					}
					MonoType **pp = parameterTypes;
					MonoType* p;
					while ((p = mono_signature_get_params(signature, &sigiter)))
					{
						if (pp != NULL)
						{
							if (!mono_metadata_type_equal(p, *pp))
							{
								found = false;
								break;
							}
							pp++;
						}
						if (!found) break;
					}
					found = false;
				}
				if (found)
				{
					ctor = m;
					break;
				}
			}
		}
		if (ctor == NULL)
			mono_runtime_object_init(obj);
		else
		{
			mono_runtime_invoke(ctor, objptr, parameters, NULL);
		}
	}
	return obj;
}

MonoClass* Global::GetClass(const char* assemblyName, const char* nameSpace, const char* typeName)
{
	return GetClass(assemblyName, nameSpace, typeName, 0, NULL);
}

MonoClass* Global::GetClass(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes)
{
	MonoImage *image = GetImage(assemblyName);
	MonoClass *kclass = mono_class_from_name(image, nameSpace, typeName);
	if (genericTypes != NULL && genericTypeCount > 0)
	{
		MonoType  *kclass_type = mono_class_get_type(kclass);
		MonoObject* kclass_obj = (MonoObject*)mono_type_get_object(Global::GetDomain(), kclass_type);
		MonoClass *class_type_sys = Global::GetClass("mscorlib", "System", "Type", 0, NULL);
		MonoMethod *genmethod = mono_class_get_method_from_name(class_type_sys, "MakeGenericType", 1);
		mono_thread_attach(Global::GetDomain());
		void *parameters[1];
		MonoArray *types = mono_array_new(Global::GetDomain(), class_type_sys, genericTypeCount);
		parameters[0] = types;
		for(int i = 0; i < genericTypeCount; i++)
		{
			MonoType *gtype = genericTypes[i];
			MonoObject *gtype_obj = (MonoObject*)mono_type_get_object(Global::GetDomain(), gtype);
			mono_array_set((MonoArray*)parameters[0], MonoObject*, i, gtype_obj);
		}
		MonoReflectionType *genericType = (MonoReflectionType*)mono_runtime_invoke(genmethod, kclass_obj, parameters, NULL);
		if (genericType == NULL) std::cout << "MakeGenericType returned null." << std::endl;
		MonoType *typeGenericType = mono_reflection_type_get_type(genericType);
		kclass = mono_class_from_mono_type(typeGenericType);
		mono_class_init(kclass);
		/*
		std::cout << mono_class_get_name(kclass) << std::endl;
		if (kclass == NULL) std::cout << "mono_object_get_class returned null." << std::endl;
		else std::cout << "mono_type_get_class returned something!!." << std::endl;
		*/
	}
	return kclass;
}

MonoMethod* Global::GetMethod(MonoObject *obj, const char* name, int pcount, MonoType **parameters)
{
	return GetMethod(mono_object_get_class(obj), name, pcount, parameters);
}

MonoMethod*	Global::GetMethod(MonoClass *kclass, const char* name, int pcount, MonoType **parameters)
{
	void* iter = NULL;
	MonoMethod* method;
	MonoMethod* mm;
	MonoMethod* m;
	method = NULL;
	mm = NULL;
	m = NULL;

	//std::cout << "CLASS NAME: " << mono_type_get_name(mono_class_get_type(kclass)) << " METHOD:" << name << std::endl;

	while ((mm = mono_class_get_methods(kclass, &iter)))
	{
		m = mono_get_inflated_method(mm);
		const char* type_name = mono_method_get_name(m);
		if (strcmp(type_name, name) == 0)
		{
			MonoMethodSignature* signature = mono_method_signature(m);
			if (mono_signature_get_param_count(signature) == pcount)
			{
				if (pcount == 0)
				{
					method = m;
					break;
				}
				void* sigiter = NULL;
				int i = 0;
				bool fail = false;
				MonoType* p = NULL;
				while ((p = mono_signature_get_params(signature, &sigiter)))
				{
					if (parameters != NULL)
					{
						if (!mono_metadata_type_equal(p, parameters[i]))
						{
							fail = true;
							break;
						}
					}
					i++;
				}
				if (!fail)
				{
					method = m;
					break;
				}
			}
		}
	}
	return method;
}

MonoObject* Global::InvokeMethod(MonoClass *kclass, const char *name, MonoObject *thisArg, int pcount, MonoType **parameterTypes, void **parameters, MonoObject **exc)
{
	MonoMethod *method = NULL;
	if (thisArg == NULL) method = GetMethod(kclass, name, pcount, parameterTypes);
	else {
		method = GetMethod(thisArg, name, pcount, parameterTypes);
	}
	return InvokeMethod(method, thisArg, parameters, exc);
}

MonoObject* Global::InvokeMethod(MonoMethod *method, MonoObject *thisArg, void **parameters, MonoObject **exc)
{
	return mono_runtime_invoke(method, thisArg, parameters, exc);
}

MonoObject* Global::InvokeMethod(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name, MonoObject *thisArg, int pcount, MonoType **parameterTypes, void **parameters, MonoObject **exc)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	//else kclass = mono_object_get_class(thisArg);
	return InvokeMethod(kclass, name, thisArg, pcount, parameterTypes, parameters, exc);
}

MonoType* Global::GetType(const char *mangledName)
{
	int status = 0;
	std::string demangledName = abi::__cxa_demangle(mangledName, 0, 0, &status);
	int assemblyIndex = demangledName.find("::");
	std::string assemblyName = demangledName.substr(0, assemblyIndex);
	std::string fullName = demangledName.substr(assemblyIndex + 2);
	int index = fullName.find_last_of("::");
	if (index == -1) return NULL;
	std::string nameSpace = fullName.substr(0, index - 1);
	ReplaceString(nameSpace, "::", ".");
	std::string className = fullName.substr(index + 1);
	/*
	std::cout << "ASSEMBLY: " << assemblyName << std::endl;
	std::cout << "NS: " << nameSpace << std::endl;
	std::cout << "CLASSNAME: " << className << std::endl;
	*/
	return GetType(assemblyName.c_str(), nameSpace.c_str(), className.c_str());
}

MonoType* Global::GetType(const char *assemblyName, const char *nameSpace, const char *typeName)
{
	MonoClass  *kclass = GetClass(assemblyName, nameSpace, typeName, 0, NULL);
	if (kclass == NULL) return NULL;
	return mono_class_get_type(kclass);
}

mscorlib::System::Boolean Global::GetFieldBooleanValue(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return false;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return false;
	mscorlib::System::Boolean value = false;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::Boolean Global::GetFieldBooleanValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return false;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return false;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return false;
	mscorlib::System::Boolean value = false;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::Int16 Global::GetFieldInt16Value(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Int16 value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::Int16 Global::GetFieldInt16Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Int16 value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::Int32 Global::GetFieldInt32Value(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Int32 value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::Int32 Global::GetFieldInt32Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Int32 value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::Int64 Global::GetFieldInt64Value(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Int64 value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::Int64 Global::GetFieldInt64Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Int64 value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::UInt16 Global::GetFieldUInt16Value(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::UInt16 value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::UInt16 Global::GetFieldUInt16Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::UInt16 value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::UInt32 Global::GetFieldUInt32Value(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::UInt32 value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::UInt32 Global::GetFieldUInt32Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::UInt32 value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::UInt64 Global::GetFieldUInt64Value(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::UInt64 value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::UInt64 Global::GetFieldUInt64Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::UInt64 value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::Double Global::GetFieldDoubleValue(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Double value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::Double Global::GetFieldDoubleValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Double value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

mscorlib::System::Char Global::GetFieldCharValue(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Char value = 0;
	mono_field_get_value(obj, field, &value);
	return value;
}

mscorlib::System::Char Global::GetFieldCharValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return 0;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return 0;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return 0;
	mscorlib::System::Char value = 0;
	mono_field_static_get_value(vtable, field, &value);
	return value;
}

MonoString* Global::GetFieldStringValue(MonoObject *obj, const char *name)
{
	MonoObject *value = GetFieldValue(obj, name);
	return mono_object_to_string(value, NULL);
}

MonoString* Global::GetFieldStringValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoObject *value = GetFieldValue(assemblyName,  nameSpace, typeName, genericTypeCount, genericTypes, name);
	return mono_object_to_string(value, NULL);
}

MonoObject* Global::GetFieldValue(MonoObject *obj, const char *name)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return NULL;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return NULL;
	MonoObject *value = NULL;
	mono_field_get_value(obj, field, &value);
	return value;
}

MonoObject* Global::GetFieldValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return NULL;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return NULL;
	MonoObject *value = NULL;
	value = mono_field_get_value_object(__domain__, field, NULL);
	if (value == NULL) return NULL;
	return value;
}

void Global::SetFieldValue(MonoObject *obj, const char *name, MonoObject *value)
{
	void *val = mono_object_unbox(value);
	SetFieldValue(obj, name, val);
}

void Global::SetFieldValue(MonoObject *obj, const char *name, void *value)
{
	MonoClass *kclass = mono_object_get_class(obj);
	if (kclass == NULL) return;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return;
	mono_field_set_value(obj, field, value);
}

void Global::SetFieldValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name, MonoObject *value)
{
	void *val = mono_object_unbox(value);
	SetFieldValue(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes, name, val);
}

void Global::SetFieldValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name, void *value)
{
	MonoClass *kclass = GetClass(assemblyName, nameSpace, typeName, genericTypeCount, genericTypes);
	if (kclass == NULL) return;
	MonoVTable *vtable = mono_class_vtable(__domain__, kclass);
	if (vtable == NULL) return;
	MonoClassField *field = mono_class_get_field_from_name(kclass, name);
	if (field == NULL) return;
	mono_field_static_set_value(vtable, field, value);
}

MonoObject* Global::GetTypeObject(const char *typeName)
{
	MonoString *type = mono_string_new(Global::GetDomain(), typeName);
	void* iter = NULL;
	MonoMethod *m;
	MonoClass *kclass = Global::GetClass("mscorlib", "System", "Type", 0, NULL);
	MonoMethod* getTypeMethod = mono_class_get_method_from_name(kclass, "GetType", 1);
	if (getTypeMethod != NULL)
	{
		void *parameters[1];
		parameters[0] = type;
		MonoObject* obj = mono_runtime_invoke(getTypeMethod, NULL, parameters, NULL);
		return obj;
	}
	return NULL;
}

bool Global::ReplaceString(std::string& str, const std::string& from, const std::string& to) {
	while ((ReplaceSingleString(str, from, to))) {}
	return true;
}

bool Global::ReplaceSingleString(std::string& str, const std::string& from, const std::string& to) {
	size_t start_pos = str.find(from);
	if (start_pos == std::string::npos)
		return false;
	str.replace(start_pos, from.length(), to);
	return true;
}