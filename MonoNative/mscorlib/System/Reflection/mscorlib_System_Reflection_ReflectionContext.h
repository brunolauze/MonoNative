#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_REFLECTIONCONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_REFLECTIONCONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class TypeInfo;
			class Assembly;
			

		}
	}
}
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

			class ReflectionContext
				: public mscorlib::System::Object
			{
			public:
				ReflectionContext(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				ReflectionContext(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~ReflectionContext()
				{
				};
			

				ReflectionContext & operator=(ReflectionContext &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Reflection::TypeInfo  GetTypeForObject(mscorlib::System::Object value);
				virtual mscorlib::System::Reflection::Assembly  MapAssembly(mscorlib::System::Reflection::Assembly assembly);
				virtual mscorlib::System::Reflection::TypeInfo  MapType(mscorlib::System::Reflection::TypeInfo type);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
