#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_EXTENSIBLECLASSFACTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_EXTENSIBLECLASSFACTORY_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class IntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class ExtensibleClassFactory
					: public mscorlib::System::Object
				{
				public:
					ExtensibleClassFactory(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ExtensibleClassFactory(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ExtensibleClassFactory()
					{
					};
				

					ExtensibleClassFactory & operator=(ExtensibleClassFactory &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static void  RegisterObjectCreationCallback(mscorlib::Callback<mscorlib::System::IntPtr  (mscorlib::System::IntPtr )> callback);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
