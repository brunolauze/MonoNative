#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_WindowsRuntimeMarshal.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_EventRegistrationToken.h>



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

					//Public Methods
					void WindowsRuntimeMarshal::FreeHString(mscorlib::System::IntPtr ptr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ptr).name());
							__parameters__[0] = ptr;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "FreeHString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Runtime::InteropServices::WindowsRuntime::IActivationFactory WindowsRuntimeMarshal::GetActivationFactory(mscorlib::System::Type type)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(type).name());
							__parameters__[0] = (MonoObject*)type;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "GetActivationFactory", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::InteropServices::WindowsRuntime::IActivationFactory(__result__);
					}

					mscorlib::System::String WindowsRuntimeMarshal::PtrToStringHString(mscorlib::System::IntPtr ptr)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ptr).name());
							__parameters__[0] = ptr;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "PtrToStringHString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					void WindowsRuntimeMarshal::RemoveAllEventHandlers(mscorlib::Callback<void  (mscorlib::System::Runtime::InteropServices::WindowsRuntime::EventRegistrationToken )> removeMethod)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(removeMethod).name());
							__parameters__[0] = &removeMethod;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "RemoveAllEventHandlers", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::IntPtr WindowsRuntimeMarshal::StringToHString(mscorlib::System::String s)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(s).name());
							__parameters__[0] = (MonoObject*)s;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "StringToHString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mono_object_unbox (__result__);
					}

					mscorlib::System::IntPtr WindowsRuntimeMarshal::StringToHString(const char *s)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), s);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "WindowsRuntimeMarshal", 0, NULL, "StringToHString", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mono_object_unbox (__result__);
					}


				}
			}
		}
	}
}
