#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_HANDLEREF_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>

namespace mscorlib
{
	namespace System
	{

		class String;
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

				class HandleRef
					: public mscorlib::System::ValueType
				{
				public:
					HandleRef(mscorlib::System::Object wrapper, mscorlib::System::IntPtr handle)
					: mscorlib::System::ValueType(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.HandleRef"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Object");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameters__[0] = (MonoObject*)wrapper;
						__parameters__[1] = (MonoObject*)handle;
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "HandleRef", 2, __parameter_types__, __parameters__);
					};
				
					HandleRef(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					HandleRef(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~HandleRef()
					{
					};
				

					HandleRef & operator=(HandleRef &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::IntPtr  ToIntPtr(mscorlib::System::Runtime::InteropServices::HandleRef value);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Handle)) mscorlib::System::IntPtr  Handle;
					__declspec(property(get=get_Wrapper)) mscorlib::System::Object  Wrapper;

					//Get Set Properties Methods
					//	Get:Handle
					mscorlib::System::IntPtr  get_Handle();

					//	Get:Wrapper
					mscorlib::System::Object  get_Wrapper();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
