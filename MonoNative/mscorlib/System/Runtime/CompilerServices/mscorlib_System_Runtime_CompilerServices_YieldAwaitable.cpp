#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_YieldAwaitable.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				mscorlib::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter YieldAwaitable::GetAwaiter()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "YieldAwaitable", 0, NULL, "GetAwaiter", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter(__result__);
				}

				//YieldAwaiter Nested Type Implementation
				//Public Methods
				void YieldAwaitable::YieldAwaiter::OnCompleted(mscorlib::Callback<void  ()> continuation)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "YieldAwaitable+YieldAwaiter", 0, NULL, "OnCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void YieldAwaitable::YieldAwaiter::UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "YieldAwaitable+YieldAwaiter", 0, NULL, "UnsafeOnCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void YieldAwaitable::YieldAwaiter::GetResult()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "YieldAwaitable+YieldAwaiter", 0, NULL, "GetResult", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:IsCompleted
				mscorlib::System::Boolean  YieldAwaitable::YieldAwaiter::get_IsCompleted()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "YieldAwaitable+YieldAwaiter", 0, NULL, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
