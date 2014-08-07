#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_WINDOWSRUNTIMEMARSHAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_WINDOWSRUNTIMEMARSHAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory.h>

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
				namespace WindowsRuntime
				{

					class EventRegistrationToken;
					

				}
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
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					class WindowsRuntimeMarshal
						: public mscorlib::System::Object
					{
					public:
						WindowsRuntimeMarshal(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						WindowsRuntimeMarshal(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~WindowsRuntimeMarshal()
						{
						};
					

						WindowsRuntimeMarshal & operator=(WindowsRuntimeMarshal &value) { __native_object__ = value.GetNativeObject(); return value; };
						bool operator==(WindowsRuntimeMarshal &value) { return mscorlib::System::Object::Equals(value); };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						template<typename T>
						static void  AddEventHandler(mscorlib::Callback<mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken  (T )> addMethod, mscorlib::Callback<void  (mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken )> removeMethod, T handler)
						{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(addMethod).name());
							__parameter_types__[1] = Global::GetType(typeid(removeMethod).name());
							__parameter_types__[2] = Global::GetType(typeid(handler).name());
							__parameters__[0] = &addMethod;
							__parameters__[1] = &removeMethod;
							__parameters__[2] = (MonoObject*)handler;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "AddEventHandler", NullMonoObject, 1, __generic_types__, 3, __parameter_types__, __parameters__, NULL);
						};
						
						static void  FreeHString(mscorlib::System::IntPtr ptr);
						static mscorlib::System::Runtime::InteropServices::WindowsRuntime::IActivationFactory  GetActivationFactory(mscorlib::System::Type type);
						static mscorlib::System::String  PtrToStringHString(mscorlib::System::IntPtr ptr);
						static void  RemoveAllEventHandlers(mscorlib::Callback<void  (mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken )> removeMethod);
						template<typename T>
						static void  RemoveEventHandler(mscorlib::Callback<void  (mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken )> removeMethod, T handler)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(removeMethod).name());
							__parameter_types__[1] = Global::GetType(typeid(handler).name());
							__parameters__[0] = &removeMethod;
							__parameters__[1] = (MonoObject*)handler;
							MonoType *__generic_types__[1];
							__generic_types__[0] = Global::GetType(typeid(T).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "RemoveEventHandler", NullMonoObject, 1, __generic_types__, 2, __parameter_types__, __parameters__, NULL);
						};
						
						static mscorlib::System::IntPtr  StringToHString(mscorlib::System::String s);
						static mscorlib::System::IntPtr  StringToHString(const char *s);
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
