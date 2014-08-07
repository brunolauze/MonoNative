#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_DISPATCHWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_DISPATCHWRAPPER_H

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

				class DispatchWrapper
					: public mscorlib::System::Object
				{
				public:
					DispatchWrapper(mscorlib::System::Object obj)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.DispatchWrapper"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameters__[0] = (MonoObject*)obj;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "DispatchWrapper", 1, __parameter_types__, __parameters__);
					};
				
					DispatchWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					DispatchWrapper(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~DispatchWrapper()
					{
					};
				

					DispatchWrapper & operator=(DispatchWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(DispatchWrapper &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_WrappedObject)) mscorlib::System::Object  WrappedObject;

					//Get Set Properties Methods
					//	Get:WrappedObject
					mscorlib::System::Object  get_WrappedObject() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
