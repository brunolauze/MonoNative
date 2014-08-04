
#include "GlobalFixture.h"
#include <Global.h>
#include <iostream>

void GlobalFixture::Run()
{
	MonoImage* image = Global::GetImage("mscorlib");
	if (image == NULL)
	{
		Fail("mscorlib is missing");
		return;
	}
	/*
	MonoAssembly *helperAssembly = mono_domain_assembly_open(Global::GetDomain(), "/usr/home/bruno/Projects/MonoNative/MonoNativeHelper/bin/Debug/MonoNativeHelper.dll");
	MonoImage* helperImage = Global::GetImage("MonoNativeHelper");
	if (helperImage == NULL)
	{
		Fail("Helper is missing");
		return;
	}
	*/



	GetAssembly();
	GetImage();
	GetType();
	NewSimpleObject();
	GetGenericClass();
	GetGenericClass2();
	CreateGenericType();
	GetStaticField();
	GetStaticInt32Field();
	GetNestedTypes();
}	

void GlobalFixture::GetAssembly()
{
	MonoAssembly* assembly = Global::GetAssembly("mscorlib");
	if (assembly == NULL)
		Fail("Assembly mscorlib cannot be retreived.");
}

void GlobalFixture::GetImage()
{
	MonoImage* image = Global::GetImage("mscorlib");
	if (image == NULL)
		Fail("Assembly Image mscorlib cannot be retreived.");
}

namespace mscorlib { namespace System { namespace Reflection { class PropertyInfo { }; class NonExistantClass {}; } } }

void GlobalFixture::GetType()
{
	MonoType* type = Global::GetType(typeid(mscorlib::System::Reflection::PropertyInfo).name());
	if (type == NULL)
		Fail("Type System.Reflection.PropertyInfo cannot be demangled to mangled type.");
	type = Global::GetType(typeid(mscorlib::System::Reflection::NonExistantClass).name());
	if (type != NULL)
		Fail("Type System.Reflection.NonExistantInfo should not exists.");
}

void GlobalFixture::NewSimpleObject()
{
	MonoObject *obj = Global::New("mscorlib", "System", "Object");
	if (obj == NULL)
		Fail("Cannot create object System.Object.");
}




void GlobalFixture::GetGenericClass()
{

	MonoType *string_type = Global::GetType("mscorlib", "System", "String");
	MonoObject *r_string_type = (MonoObject*)mono_type_get_object(Global::GetDomain(), string_type);
	MonoObject* list_type = Global::GetTypeObject("System.Collections.Generic.List`1");
	MonoClass *class_type_sys = Global::GetClass("mscorlib", "System", "Type", 0, NULL);
	//if (list_type == NULL) Fail("Cannot create generic");
	MonoClass *class_type = Global::GetClass("mscorlib", "System", "Type", 0, NULL);

	MonoMethod *genmethod = mono_class_get_method_from_name(class_type_sys, "MakeGenericType", 1);
	void *parameters[1];

	MonoArray* types = mono_array_new(Global::GetDomain(), class_type_sys, 1);
	parameters[0] = types;
	mono_array_set((MonoArray*)parameters[0], MonoObject*, 0, r_string_type);

	mono_thread_attach(Global::GetDomain());

	MonoObject* n_list_type = mono_runtime_invoke(genmethod, list_type, parameters, NULL);



	//MonoObject* n_list_type = mono_runtime_invoke(testmethod, NULL, parameters, NULL);

	if (n_list_type == NULL) Fail("Failed List<string>");


	/*
	MonoType *string_type = Global::GetType("mscorlib", "System", "String");
	MonoObject *r_string_type = (MonoObject*)mono_type_get_object(Global::GetDomain(), string_type);
	MonoClass *class_type = Global::GetClass("mscorlib", "System", "Type", 0, NULL);
	MonoMethod *genmethod = mono_class_get_method_from_name(class_type, "MakeGenericType", 1);
	MonoType *list_type = Global::GetType("mscorlib", "System.Colletions.Generic", "List`1");
	MonoObject *r_list_type = (MonoObject*)mono_type_get_object(Global::GetDomain(), list_type);


	if (genmethod == NULL) Fail("MakeGenericType is null");
	if (r_list_type == NULL) Fail("Null object");
	void *parameters[1];

	MonoArray* types = mono_array_new(Global::GetDomain(), class_type, 1);
	parameters[0] = &types;
	mono_array_set((MonoArray*)parameters[0], MonoObject*, 0, r_string_type);

	MonoObject* n_list_type = mono_runtime_invoke(genmethod, r_list_type, parameters, NULL);
	*/


}

void GlobalFixture::GetGenericClass2()
{
	MonoType *generic_types[1];
	MonoType *string_type = Global::GetType("mscorlib", "System", "String");
	generic_types[0] = string_type;
	MonoClass *list_class = Global::GetClass("mscorlib", "System.Collections.Generic", "List`1", 1, generic_types);
	if (list_class == NULL) Fail("Cannot create List<String> class.");
	MonoObject* obj = mono_object_new(Global::GetDomain(), list_class);
	if (obj == NULL) Fail("Cannot create List<String> Object.");
	mono_runtime_object_init(obj);

	MonoMethod *addMethod = mono_class_get_method_from_name(list_class, "Add", 1);
	void *parameters[1];
	parameters[0] = mono_string_new(Global::GetDomain(), "TEST");
	mono_runtime_invoke(addMethod, obj, parameters, NULL);

	/*
	MonoMethod* m = NULL;
	gpointer iter;
	gpointer sigiter = NULL;
	iter = NULL;
	bool found = false;
	while ((m = mono_class_get_methods(list_class, &iter))) {
		std::cout << "Method: " << mono_method_get_name(m) << std::endl;
		if (strcmp(mono_method_get_name(m), ".ctor") == 0) {
			std::cout << "Constructor: " << mono_method_get_name(m) << std::endl;
			MonoMethodSignature * signature = mono_method_signature(m);
			std::cout << "Constructor Params Count: " << mono_signature_get_param_count(signature) << std::endl;
			if (mono_signature_get_param_count(signature) == 0)
			{
				
			}

		}
	}
	*/
}

void GlobalFixture::CreateGenericType()
{

	MonoType *generic_types[1];
	MonoType *string_type = Global::GetType("mscorlib", "System", "String");
	generic_types[0] = string_type;
	MonoObject *obj = Global::New("mscorlib", "System.Collections.Generic", "List`1", 1, generic_types, 0, NULL, NULL);
	if (obj == NULL) Fail("Cannot create List<String> Object.");

	MonoMethod *get_Count = Global::GetMethod(obj, "get_Count", 0, NULL);
	if (get_Count == NULL) Fail("Cannot retreive Count Property Get Method.");
	MonoObject *countObj = Global::InvokeMethod(get_Count, obj, NULL, NULL);
	int countValue = *(int*)mono_object_unbox(countObj);
	std::cout << "Count: " << countValue << std::endl;


	MonoMethod *addMethod = Global::GetMethod(obj, "Add", 1, generic_types);
	if (addMethod == NULL) Fail("Canont retreive Add method.");
	void *addParameters[1];
	addParameters[0] = mono_string_new(Global::GetDomain(), "TEST");
	Global::InvokeMethod(addMethod, obj, addParameters, NULL);

	countObj = Global::InvokeMethod(get_Count, obj, NULL, NULL);
	countValue = *(int*)mono_object_unbox(countObj);
	std::cout << "New Count: " << countValue << std::endl;


}

void GlobalFixture::GetStaticField()
{
	MonoObject *field = Global::GetFieldValue("mscorlib", "System", "Guid", 0, NULL, "Empty");
	MonoString *str = mono_object_to_string(field, NULL);
	const char *result = mono_string_to_utf8(str);
	std::cout << result << std::endl;
}

void GlobalFixture::GetStaticInt32Field()
{
	int result = Global::GetFieldInt32Value("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "OFFSET_UNKNOWN");
	std::cout << result << std::endl;
}


void GlobalFixture::GetNestedTypes()
{
	MonoObject* list_type = Global::GetTypeObject("System.Collections.Generic.List`1+Enumerator[[System.Type]]");
	if (list_type == NULL) Fail("Cannot get type object for nested type System.Collections.Generic.List`1+Enumerator[[System.Type]]");
	Output("Got Type System.List<Type>.Enumerator");
	MonoString *str = mono_object_to_string(list_type, NULL);
	const char *result = mono_string_to_utf8(str);
	std::cout << result << std::endl;
}