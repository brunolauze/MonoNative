#include <mscorlib/System/Threading/mscorlib_System_Threading_Overlapped.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_NativeOverlapped.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			void Overlapped::Free(mscorlib::System::Threading::NativeOverlapped* nativeOverlappedPtr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nativeOverlappedPtr).name());
					__parameters__[0] = nativeOverlappedPtr->GetNativeObject();
					Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "Free", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::Overlapped Overlapped::Unpack(mscorlib::System::Threading::NativeOverlapped* nativeOverlappedPtr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(nativeOverlappedPtr).name());
					__parameters__[0] = nativeOverlappedPtr->GetNativeObject();
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "Unpack", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::Overlapped(__result__);
			}

			mscorlib::System::Threading::NativeOverlapped* Overlapped::Pack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(iocb).name());
					__parameters__[0] = &iocb;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "Pack", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return new mscorlib::System::Threading::NativeOverlapped(__result__);
			}

			mscorlib::System::Threading::NativeOverlapped* Overlapped::Pack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb, mscorlib::System::Object userData)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(iocb).name());
					__parameter_types__[1] = Global::GetType(typeid(userData).name());
					__parameters__[0] = &iocb;
					__parameters__[1] = (MonoObject*)userData;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "Pack", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return new mscorlib::System::Threading::NativeOverlapped(__result__);
			}

			mscorlib::System::Threading::NativeOverlapped* Overlapped::UnsafePack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(iocb).name());
					__parameters__[0] = &iocb;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "UnsafePack", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return new mscorlib::System::Threading::NativeOverlapped(__result__);
			}

			mscorlib::System::Threading::NativeOverlapped* Overlapped::UnsafePack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb, mscorlib::System::Object userData)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(iocb).name());
					__parameter_types__[1] = Global::GetType(typeid(userData).name());
					__parameters__[0] = &iocb;
					__parameters__[1] = (MonoObject*)userData;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "UnsafePack", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return new mscorlib::System::Threading::NativeOverlapped(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:AsyncResult
			mscorlib::System::IAsyncResult  Overlapped::get_AsyncResult()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "get_AsyncResult", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IAsyncResult(__result__);
			}

			void Overlapped::set_AsyncResult(mscorlib::System::IAsyncResult  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "set_AsyncResult", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:EventHandle
			mscorlib::System::Int32  Overlapped::get_EventHandle()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "get_EventHandle", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Overlapped::set_EventHandle(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "set_EventHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:EventHandleIntPtr
			mscorlib::System::IntPtr  Overlapped::get_EventHandleIntPtr()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "get_EventHandleIntPtr", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IntPtr(__result__);
			}

			void Overlapped::set_EventHandleIntPtr(mscorlib::System::IntPtr  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "set_EventHandleIntPtr", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:OffsetHigh
			mscorlib::System::Int32  Overlapped::get_OffsetHigh()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "get_OffsetHigh", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Overlapped::set_OffsetHigh(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "set_OffsetHigh", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:OffsetLow
			mscorlib::System::Int32  Overlapped::get_OffsetLow()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "get_OffsetLow", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Overlapped::set_OffsetLow(mscorlib::System::Int32  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = &value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Overlapped", 0, NULL, "set_OffsetLow", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
