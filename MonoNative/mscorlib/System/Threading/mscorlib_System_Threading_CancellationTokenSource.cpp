#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationTokenSource.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void CancellationTokenSource::Cancel()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "Cancel", __native_object__, 0, NULL, NULL, NULL);
			}

			void CancellationTokenSource::Cancel(mscorlib::System::Boolean throwOnFirstException)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(throwOnFirstException).name());
					__parameters__[0] = reinterpret_cast<void*>(throwOnFirstException);
					Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "Cancel", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void CancellationTokenSource::CancelAfter(mscorlib::System::TimeSpan delay)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(delay).name());
					__parameters__[0] = (MonoObject*)delay;
					Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "CancelAfter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void CancellationTokenSource::CancelAfter(mscorlib::System::Int32 millisecondsDelay)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsDelay).name());
					__parameters__[0] = &millisecondsDelay;
					Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "CancelAfter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::CancellationTokenSource CancellationTokenSource::CreateLinkedTokenSource(mscorlib::System::Threading::CancellationToken token1, mscorlib::System::Threading::CancellationToken token2)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(token1).name());
					__parameter_types__[1] = Global::GetType(typeid(token2).name());
					__parameters__[0] = (MonoObject*)token1;
					__parameters__[1] = (MonoObject*)token2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "CreateLinkedTokenSource", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::CancellationTokenSource(__result__);
			}

			mscorlib::System::Threading::CancellationTokenSource CancellationTokenSource::CreateLinkedTokenSource(std::vector<mscorlib::System::Threading::CancellationToken*> tokens)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(tokens).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::CancellationToken*>(tokens, typeid(mscorlib::System::Threading::CancellationToken).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "CreateLinkedTokenSource", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::CancellationTokenSource(__result__);
			}

			void CancellationTokenSource::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Token
			mscorlib::System::Threading::CancellationToken  CancellationTokenSource::get_Token() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "get_Token", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::CancellationToken(__result__);
			}


			//	Get:IsCancellationRequested
			mscorlib::System::Boolean  CancellationTokenSource::get_IsCancellationRequested() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationTokenSource", 0, NULL, "get_IsCancellationRequested", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}



		}
	}
}
