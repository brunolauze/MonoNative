#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_TypeFilterLevel.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializationSurrogate.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MemberInfo;
			class Assembly;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class FormatterServices
					: public mscorlib::System::Object
				{
				public:
					FormatterServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					FormatterServices(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~FormatterServices()
					{
					};
				

					FormatterServices & operator=(FormatterServices &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static std::vector<mscorlib::System::Object*>  GetObjectData(mscorlib::System::Object obj, std::vector<mscorlib::System::Reflection::MemberInfo*> members);
					static std::vector<mscorlib::System::Reflection::MemberInfo*>  GetSerializableMembers(mscorlib::System::Type type);
					static std::vector<mscorlib::System::Reflection::MemberInfo*>  GetSerializableMembers(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context);
					static mscorlib::System::Type  GetTypeFromAssembly(mscorlib::System::Reflection::Assembly assem, mscorlib::System::String name);
					static mscorlib::System::Type  GetTypeFromAssembly(mscorlib::System::Reflection::Assembly assem, const char *name);
					static mscorlib::System::Object  GetUninitializedObject(mscorlib::System::Type type);
					static mscorlib::System::Object  PopulateObjectMembers(mscorlib::System::Object obj, std::vector<mscorlib::System::Reflection::MemberInfo*> members, std::vector<mscorlib::System::Object*> data);
					static void  CheckTypeSecurity(mscorlib::System::Type t, mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__ securityLevel);
					static mscorlib::System::Object  GetSafeUninitializedObject(mscorlib::System::Type type);
					static mscorlib::System::Runtime::Serialization::ISerializationSurrogate  GetSurrogateForCyclicalReference(mscorlib::System::Runtime::Serialization::ISerializationSurrogate innerSurrogate);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
