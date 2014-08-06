#include <mscorlib/System/Threading/mscorlib_System_Threading_SynchronizationContext.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			Property<mscorlib::System::Threading::SynchronizationContext , mscorlib::System::Threading::SynchronizationContext> mscorlib::System::Threading::SynchronizationContext::Current(&mscorlib::System::Threading::SynchronizationContext::get_Current, &mscorlib::System::Threading::SynchronizationContext::set_Current);
			//Public Methods
			mscorlib::System::Threading::SynchronizationContext SynchronizationContext::CreateCopy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "CreateCopy", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::SynchronizationContext(__result__);
			}

			mscorlib::System::Boolean SynchronizationContext::IsWaitNotificationRequired()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "IsWaitNotificationRequired", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SynchronizationContext::OperationCompleted()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "OperationCompleted", __native_object__, 0, NULL, NULL, NULL);
			}

			void SynchronizationContext::OperationStarted()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "OperationStarted", __native_object__, 0, NULL, NULL, NULL);
			}

			void SynchronizationContext::Post(mscorlib::Callback<void  (mscorlib::System::Object )> d, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(d).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameters__[0] = &d;
					__parameters__[1] = (MonoObject*)state;
					Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "Post", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SynchronizationContext::Send(mscorlib::Callback<void  (mscorlib::System::Object )> d, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(d).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameters__[0] = &d;
					__parameters__[1] = (MonoObject*)state;
					Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "Send", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void SynchronizationContext::SetSynchronizationContext(mscorlib::System::Threading::SynchronizationContext syncContext)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(syncContext).name());
					__parameters__[0] = (MonoObject*)syncContext;
					Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "SetSynchronizationContext", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Int32 SynchronizationContext::Wait(std::vector<mscorlib::System::IntPtr*> waitHandles, mscorlib::System::Boolean waitAll, mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "IntPtr")), 1));
					__parameter_types__[1] = Global::GetType(typeid(waitAll).name());
					__parameter_types__[2] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::IntPtr*>(waitHandles, typeid(mscorlib::System::IntPtr).name());
					__parameters__[1] = reinterpret_cast<void*>(waitAll);
					__parameters__[2] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "Wait", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Static Properties Methods
			//	Get:Current
			mscorlib::System::Threading::SynchronizationContext  SynchronizationContext::get_Current()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "SynchronizationContext", 0, NULL, "get_Current", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::SynchronizationContext(__result__);
			}

			void SynchronizationContext::set_Current(mscorlib::System::Threading::SynchronizationContext  value)
			{
				throw;
			}




		}
	}
}
