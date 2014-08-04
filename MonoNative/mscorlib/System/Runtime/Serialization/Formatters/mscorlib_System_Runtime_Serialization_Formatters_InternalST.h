#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_INTERNALST_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_INTERNALST_H

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

			class Assembly;
			class FieldInfo;
			

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
				namespace Formatters
				{

					class InternalST
						: public mscorlib::System::Object
					{
					public:
						InternalST(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						InternalST(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~InternalST()
						{
						};
					

						InternalST & operator=(InternalST &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static void  InfoSoap(std::vector<mscorlib::System::Object*> messages);
						static mscorlib::System::Reflection::Assembly  LoadAssemblyFromString(mscorlib::System::String assemblyString);
						static void  SerializationSetValue(mscorlib::System::Reflection::FieldInfo fi, mscorlib::System::Object target, mscorlib::System::Object value);
						static void  Soap(std::vector<mscorlib::System::Object*> messages);
						static void  SoapAssert(mscorlib::System::Boolean condition, mscorlib::System::String message);
						static mscorlib::System::Boolean  SoapCheckEnabled();
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
