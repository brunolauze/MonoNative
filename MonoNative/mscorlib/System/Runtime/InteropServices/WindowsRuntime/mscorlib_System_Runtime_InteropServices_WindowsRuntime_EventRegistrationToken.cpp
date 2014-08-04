#include <mscorlib/System/Runtime/InteropServices/WindowsRuntime/mscorlib_System_Runtime_InteropServices_WindowsRuntime_EventRegistrationToken.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
					mscorlib::System::Boolean EventRegistrationToken::Equals(mscorlib::System::Object obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 EventRegistrationToken::GetHashCode()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.WindowsRuntime", "EventRegistrationToken", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
