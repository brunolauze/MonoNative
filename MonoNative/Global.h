#ifndef __MONONATIVE_GLOBAL_H
#define __MONONATIVE_GLOBAL_H
#include <unistd.h>
extern "C" {
	#include <glib.h>
	#include <mono/jit/jit.h>
	#include <mono/metadata/object.h>
	#include <mono/metadata/reflection.h>
	#include <mono/metadata/assembly.h>
	#include <mono/metadata/threads.h>
	#include <mono/metadata/mono-config.h>
}
#include <string>
#include <map>
#include <vector>

#if DEBUG
#include <iostream>
#endif

#include <Callbacks.h>

#define var auto

namespace mscorlib
{
	namespace System
	{
		typedef bool Boolean;
		typedef mono_unichar2 Char;
		typedef short Int16;
		typedef float Single;
		typedef int Int32;
		typedef long Int64;
		typedef unsigned char UInt16;
		typedef unsigned int UInt32;
		typedef unsigned long UInt64;
		typedef float Float;
		typedef double Double;
	}
}

static const char* EmptyChars = NULL;
static MonoObject* NullMonoObject = NULL;

class Global
{
public:
	typedef std::map<std::string, MonoAssembly*> __assemblymap__;
	typedef std::map<std::string, MonoImage*> __imagemap__;
	typedef std::pair<std::string, MonoAssembly*> __assemblypair__;
	typedef std::pair<std::string, MonoImage*> __imagepair__;
	static void Initialize();
	static MonoObject* New(const char* assemblyName, const char* nameSpace, const char* typeName);
	static MonoObject* New(const char* assemblyName, const char* nameSpace, const char* typeName, int pcount, MonoType **parameterTypes, void **parameters);
	static MonoObject* New(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, int pcount, MonoType **parameterTypes, void **parameters);
	static MonoAssembly* GetAssembly(const char *name);
	static MonoDomain* GetDomain();
	static MonoImage* GetImage(const char *name);
	static MonoClass* GetClass(const char* assemblyName, const char* nameSpace, const char* typeName);
	static MonoClass* GetClass(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes);
	static MonoMethod* GetMethod(MonoObject *obj, const char* name, int pcount, MonoType **parameters);
	static MonoMethod* GetMethod(MonoClass *kclass, const char* name, int pcount, MonoType **parameters);
	static MonoObject* InvokeMethod(MonoClass *kclass, const char* name, MonoObject *thisArg, int pcount, MonoType **parameterTypes, void **parameters, MonoObject **exc);
	static MonoObject* InvokeMethod(MonoMethod *method, MonoObject *thisArgs, void **parameters, MonoObject **exc);
	static MonoObject* InvokeMethod(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char* name, MonoObject *thisArg, int pcount, MonoType **parameterTypes, void **parameters, MonoObject **exc);
	static MonoObject* GetTypeObject(const char *typeName);
	static mscorlib::System::Boolean GetFieldBooleanValue(MonoObject *obj, const char *name);
	static mscorlib::System::Boolean GetFieldBooleanValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::Int16 GetFieldInt16Value(MonoObject *obj, const char *name);
	static mscorlib::System::Int16 GetFieldInt16Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::Int32 GetFieldInt32Value(MonoObject *obj, const char *name);
	static mscorlib::System::Int32 GetFieldInt32Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::Int64 GetFieldInt64Value(MonoObject *obj, const char *name);
	static mscorlib::System::Int64 GetFieldInt64Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);

	static mscorlib::System::UInt16 GetFieldUInt16Value(MonoObject *obj, const char *name);
	static mscorlib::System::UInt16 GetFieldUInt16Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::UInt32 GetFieldUInt32Value(MonoObject *obj, const char *name);
	static mscorlib::System::UInt32 GetFieldUInt32Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::UInt64 GetFieldUInt64Value(MonoObject *obj, const char *name);
	static mscorlib::System::UInt64 GetFieldUInt64Value(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::Double GetFieldDoubleValue(MonoObject *obj, const char *name);
	static mscorlib::System::Double GetFieldDoubleValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static mscorlib::System::Char GetFieldCharValue(MonoObject *obj, const char *name);
	static mscorlib::System::Char GetFieldCharValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static MonoString* GetFieldStringValue(MonoObject *obj, const char *name);
	static MonoString* GetFieldStringValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static MonoObject* GetFieldValue(MonoObject *obj, const char *name);
	static MonoObject* GetFieldValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name);
	static void SetFieldValue(MonoObject *obj, const char *name, MonoObject *value);
	static void SetFieldValue(MonoObject *obj, const char *name, void *value);
	static void SetFieldValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name, MonoObject *value);
	static void SetFieldValue(const char* assemblyName, const char* nameSpace, const char* typeName, int genericTypeCount, MonoType **genericTypes, const char *name, void *value);
	static MonoType* GetType(const char *mangledName);
	static MonoType* GetType(const char *assemblyName, const char *nameSpace, const char *typeName);
	static MonoType* GetType(const char *assemblyName, const char *nameSpace, const char *typeName, int genericCount, MonoType **genericTypes);
	template<typename T>
	static MonoObject* FromArray(std::vector<T> items, const char *mangledName)
	{
		MonoArray *array_items = mono_array_new(__domain__, mono_type_get_class(GetType(mangledName)), items.size());
		int i = 0;
		for(typename std::vector<T>::iterator it = items.begin(); it != items.end(); ++it) {
			mono_array_set(array_items, MonoObject*, i++, (MonoObject*)(*it));
		}
		return (MonoObject*)array_items;
	};

	template<typename T>
	static MonoObject* FromArray(std::vector<T> items, const char *assemblyName, const char *nameSpace, const char *typeName)
	{
		MonoArray *array_items = mono_array_new(__domain__, GetClass(assemblyName, nameSpace, typeName), items.size());
		int i = 0;
		for(typename std::vector<T>::iterator it = items.begin(); it != items.end(); ++it) {
			mono_array_set(array_items, MonoObject*, i++, (MonoObject*)(*it));
		}
		return (MonoObject*)array_items;
	};

private:
	static MonoDomain* __domain__;
	static __assemblymap__ assemblymap;
	static __imagemap__ imagemap;
	static bool ReplaceString(std::string& str, const std::string& from, const std::string& to);
	static bool ReplaceSingleString(std::string& str, const std::string& from, const std::string& to);
	
};


template<typename _Prop_t,
         class _ObjClass_t>
class Property
{
    typedef _Prop_t (*_pmGet_t)();
    typedef void (*_pmSet_t)(_Prop_t);
   
    _pmGet_t     m_pmGet;
    _pmSet_t     m_pmSet;

public:
    Property(_pmGet_t pmGet, _pmSet_t pmSet)
    :  m_pmGet(pmGet), m_pmSet(pmSet)
    {}
    operator _Prop_t() { return (m_pmGet)(); }
    void operator =(_Prop_t value) { (m_pmSet)(value); }
};

namespace mscorlib
{
	class NativeTypeInfo
	{
	public:
		__declspec(property(get=get_AssemblyName, put = set_AssemblyName)) const char *AssemblyName;
		__declspec(property(get=get_TypeName, put=set_TypeName)) const char *TypeName;

		static NativeTypeInfo* GetTypeInfo(const char* assemblyName, const char* typeName)
		{
			return new NativeTypeInfo(assemblyName, typeName);
		};

	protected:
		NativeTypeInfo(const char* assemblyName, const char* typeName) {
			_assemblyName = assemblyName; _typeName = typeName;
		};
	private:
		//	Get/Set:AssemblyName
		const char*  get_AssemblyName() { return _assemblyName; };
		void set_AssemblyName(const char*  value) { _assemblyName = value; };
		//	Get/Set:TypeName
		const char* get_TypeName() { return _typeName; };
		void set_TypeName(const char* value) {_typeName = value; };

		const char* _assemblyName;
		const char* _typeName;
	};
}


#endif
