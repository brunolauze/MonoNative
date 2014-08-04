#include <mscorlib/System/Threading/mscorlib_System_Threading_ReaderWriterLock.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_LockCookie.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void ReaderWriterLock::AcquireReaderLock(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "AcquireReaderLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ReaderWriterLock::AcquireReaderLock(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "AcquireReaderLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ReaderWriterLock::AcquireWriterLock(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "AcquireWriterLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void ReaderWriterLock::AcquireWriterLock(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "AcquireWriterLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean ReaderWriterLock::AnyWritersSince(mscorlib::System::Int32 seqNum)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(seqNum).name());
					__parameters__[0] = &seqNum;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "AnyWritersSince", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ReaderWriterLock::DowngradeFromWriterLock(mscorlib::System::Threading::LockCookie lockCookie)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(lockCookie).name());
					__parameters__[0] = (MonoObject*)lockCookie;
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "DowngradeFromWriterLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::LockCookie ReaderWriterLock::ReleaseLock()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "ReleaseLock", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::LockCookie(__result__);
			}

			void ReaderWriterLock::ReleaseReaderLock()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "ReleaseReaderLock", __native_object__, 0, NULL, NULL, NULL);
			}

			void ReaderWriterLock::ReleaseWriterLock()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "ReleaseWriterLock", __native_object__, 0, NULL, NULL, NULL);
			}

			void ReaderWriterLock::RestoreLock(mscorlib::System::Threading::LockCookie lockCookie)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(lockCookie).name());
					__parameters__[0] = (MonoObject*)lockCookie;
					Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "RestoreLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::LockCookie ReaderWriterLock::UpgradeToWriterLock(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "UpgradeToWriterLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::LockCookie(__result__);
			}

			mscorlib::System::Threading::LockCookie ReaderWriterLock::UpgradeToWriterLock(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "UpgradeToWriterLock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::LockCookie(__result__);
			}

			//Get Set Properties Methods
			//	Get:IsReaderLockHeld
			mscorlib::System::Boolean  ReaderWriterLock::get_IsReaderLockHeld()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "get_IsReaderLockHeld", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsWriterLockHeld
			mscorlib::System::Boolean  ReaderWriterLock::get_IsWriterLockHeld()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "get_IsWriterLockHeld", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:WriterSeqNum
			mscorlib::System::Int32  ReaderWriterLock::get_WriterSeqNum()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "ReaderWriterLock", 0, NULL, "get_WriterSeqNum", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
