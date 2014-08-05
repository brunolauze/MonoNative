#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_BSTRWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_BSTRWRAPPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		

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

				class BStrWrapper
					: public mscorlib::System::Object
				{
				public:
					BStrWrapper(mscorlib::System::String value)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.BStrWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)value;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "BStrWrapper", 1, __parameter_types__, __parameters__);
					};
				
					BStrWrapper(mscorlib::System::Object value)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.BStrWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)value;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "BStrWrapper", 1, __parameter_types__, __parameters__);
					};
				
					BStrWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					BStrWrapper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~BStrWrapper()
					{
					};
				

					BStrWrapper & operator=(BStrWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_WrappedObject)) mscorlib::System::String  WrappedObject;

					//Get Set Properties Methods
					//	Get:WrappedObject
					mscorlib::System::String  get_WrappedObject() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
