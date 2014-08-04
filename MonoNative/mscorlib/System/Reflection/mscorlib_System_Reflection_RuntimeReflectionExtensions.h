#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Delegate;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			class EventInfo;
			class FieldInfo;
			class InterfaceMapping;
			class TypeInfo;
			class PropertyInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class RuntimeReflectionExtensions
				: public mscorlib::System::Object
			{
			public:
				RuntimeReflectionExtensions(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				RuntimeReflectionExtensions(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~RuntimeReflectionExtensions()
				{
				};
			

				RuntimeReflectionExtensions & operator=(RuntimeReflectionExtensions &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Reflection::MethodInfo  GetMethodInfo(mscorlib::System::Delegate del);
				static mscorlib::System::Reflection::MethodInfo  GetRuntimeBaseDefinition(mscorlib::System::Reflection::MethodInfo method);
				static mscorlib::System::Reflection::EventInfo  GetRuntimeEvent(mscorlib::System::Type type, mscorlib::System::String name);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::EventInfo>  GetRuntimeEvents(mscorlib::System::Type type);
				static mscorlib::System::Reflection::FieldInfo  GetRuntimeField(mscorlib::System::Type type, mscorlib::System::String name);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::FieldInfo>  GetRuntimeFields(mscorlib::System::Type type);
				static mscorlib::System::Reflection::InterfaceMapping  GetRuntimeInterfaceMap(mscorlib::System::Reflection::TypeInfo typeInfo, mscorlib::System::Type interfaceType);
				static mscorlib::System::Reflection::MethodInfo  GetRuntimeMethod(mscorlib::System::Type type, mscorlib::System::String name, std::vector<mscorlib::System::Type*> parameters);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::MethodInfo>  GetRuntimeMethods(mscorlib::System::Type type);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::PropertyInfo>  GetRuntimeProperties(mscorlib::System::Type type);
				static mscorlib::System::Reflection::PropertyInfo  GetRuntimeProperty(mscorlib::System::Type type, mscorlib::System::String name);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
