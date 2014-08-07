#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_INTROSPECTIONEXTENSIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_INTROSPECTIONEXTENSIONS_H

#include <mscorlib/System/mscorlib_System_Object.h>

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

			class TypeInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class IntrospectionExtensions
				: public mscorlib::System::Object
			{
			public:
				IntrospectionExtensions(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				IntrospectionExtensions(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~IntrospectionExtensions()
				{
				};
			

				IntrospectionExtensions & operator=(IntrospectionExtensions &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(IntrospectionExtensions &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Reflection::TypeInfo  GetTypeInfo(mscorlib::System::Type type);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
