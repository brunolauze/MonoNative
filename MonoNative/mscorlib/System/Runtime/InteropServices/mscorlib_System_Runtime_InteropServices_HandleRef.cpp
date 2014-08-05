#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_HandleRef.h>
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

				//Public Methods
				mscorlib::System::IntPtr HandleRef::ToIntPtr(mscorlib::System::Runtime::InteropServices::HandleRef value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "HandleRef", 0, NULL, "ToIntPtr", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::IntPtr(__result__);
				}

				//Get Set Properties Methods
				//	Get:Handle
				mscorlib::System::IntPtr  HandleRef::get_Handle() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "HandleRef", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IntPtr(__result__);
				}


				//	Get:Wrapper
				mscorlib::System::Object  HandleRef::get_Wrapper() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "HandleRef", 0, NULL, "get_Wrapper", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
