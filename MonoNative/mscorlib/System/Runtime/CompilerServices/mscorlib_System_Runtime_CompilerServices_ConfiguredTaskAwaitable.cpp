#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ConfiguredTaskAwaitable.h>
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
				mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitableBase::ConfiguredTaskAwaiter ConfiguredTaskAwaitableBase::GetAwaiter()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable", 0, NULL, "GetAwaiter", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::CompilerServices::ConfiguredTaskAwaitableBase::ConfiguredTaskAwaiter(__result__);
				}

				//ConfiguredTaskAwaiter Nested Type Implementation
				//Public Methods
				void ConfiguredTaskAwaitableBase::ConfiguredTaskAwaiter::GetResult()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable+ConfiguredTaskAwaiter", 0, NULL, "GetResult", __native_object__, 0, NULL, NULL, NULL);
				}

				void ConfiguredTaskAwaitableBase::ConfiguredTaskAwaiter::OnCompleted(mscorlib::Callback<void  ()> continuation)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable+ConfiguredTaskAwaiter", 0, NULL, "OnCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ConfiguredTaskAwaitableBase::ConfiguredTaskAwaiter::UnsafeOnCompleted(mscorlib::Callback<void  ()> continuation)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(continuation).name());
						__parameters__[0] = &continuation;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable+ConfiguredTaskAwaiter", 0, NULL, "UnsafeOnCompleted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:IsCompleted
				mscorlib::System::Boolean  ConfiguredTaskAwaitableBase::ConfiguredTaskAwaiter::get_IsCompleted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable+ConfiguredTaskAwaiter", 0, NULL, "get_IsCompleted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
