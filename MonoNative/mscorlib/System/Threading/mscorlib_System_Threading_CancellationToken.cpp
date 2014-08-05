#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationToken.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CancellationTokenRegistration.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			Property<mscorlib::System::Threading::CancellationToken , mscorlib::System::Threading::CancellationToken> mscorlib::System::Threading::CancellationToken::None(&mscorlib::System::Threading::CancellationToken::get_None, &mscorlib::System::Threading::CancellationToken::set_None);
			//Public Methods
			mscorlib::System::Threading::CancellationTokenRegistration CancellationToken::Register(mscorlib::Callback<void  ()> callback)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(callback).name());
					__parameters__[0] = &callback;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "Register", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::CancellationTokenRegistration(__result__);
			}

			mscorlib::System::Threading::CancellationTokenRegistration CancellationToken::Register(mscorlib::Callback<void  ()> callback, mscorlib::System::Boolean useSynchronizationContext)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(callback).name());
					__parameter_types__[1] = Global::GetType(typeid(useSynchronizationContext).name());
					__parameters__[0] = &callback;
					__parameters__[1] = reinterpret_cast<void*>(useSynchronizationContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "Register", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::CancellationTokenRegistration(__result__);
			}

			mscorlib::System::Threading::CancellationTokenRegistration CancellationToken::Register(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(callback).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameters__[0] = &callback;
					__parameters__[1] = (MonoObject*)state;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "Register", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::CancellationTokenRegistration(__result__);
			}

			mscorlib::System::Threading::CancellationTokenRegistration CancellationToken::Register(mscorlib::Callback<void  (mscorlib::System::Object )> callback, mscorlib::System::Object state, mscorlib::System::Boolean useSynchronizationContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(callback).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameter_types__[2] = Global::GetType(typeid(useSynchronizationContext).name());
					__parameters__[0] = &callback;
					__parameters__[1] = (MonoObject*)state;
					__parameters__[2] = reinterpret_cast<void*>(useSynchronizationContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "Register", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::CancellationTokenRegistration(__result__);
			}

			void CancellationToken::ThrowIfCancellationRequested()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "ThrowIfCancellationRequested", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean CancellationToken::Equals(mscorlib::System::Threading::CancellationToken other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean CancellationToken::Equals(mscorlib::System::Object other)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(other).name());
					__parameters__[0] = (MonoObject*)other;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 CancellationToken::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:CanBeCanceled
			mscorlib::System::Boolean  CancellationToken::get_CanBeCanceled() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "get_CanBeCanceled", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsCancellationRequested
			mscorlib::System::Boolean  CancellationToken::get_IsCancellationRequested() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "get_IsCancellationRequested", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WaitHandle
			mscorlib::System::Threading::WaitHandle  CancellationToken::get_WaitHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "get_WaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::WaitHandle(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:None
			mscorlib::System::Threading::CancellationToken  CancellationToken::get_None()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "CancellationToken", 0, NULL, "get_None", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::CancellationToken(__result__);
			}

			void CancellationToken::set_None(mscorlib::System::Threading::CancellationToken  value)
			{
				throw;
			}




		}
	}
}
