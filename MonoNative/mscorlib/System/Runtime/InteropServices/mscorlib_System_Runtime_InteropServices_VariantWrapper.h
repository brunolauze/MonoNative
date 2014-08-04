#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_VARIANTWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_VARIANTWRAPPER_H

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
		namespace Runtime
		{
			namespace InteropServices
			{

				class VariantWrapper
					: public mscorlib::System::Object
				{
				public:
					VariantWrapper(mscorlib::System::Object obj)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.VariantWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)obj;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "VariantWrapper", 1, __parameter_types__, __parameters__);
					};
				
					VariantWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					VariantWrapper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~VariantWrapper()
					{
					};
				

					VariantWrapper & operator=(VariantWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_WrappedObject)) mscorlib::System::Object  WrappedObject;

					//Get Set Properties Methods
					//	Get:WrappedObject
					mscorlib::System::Object  get_WrappedObject();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
