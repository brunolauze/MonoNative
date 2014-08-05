#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Boolean WaitHandle::WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAll", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[2] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = &millisecondsTimeout;
					__parameters__[2] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAll", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameter_types__[2] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = (MonoObject*)timeout;
					__parameters__[2] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAll", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 WaitHandle::WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAny", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 WaitHandle::WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[2] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = &millisecondsTimeout;
					__parameters__[2] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAny", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 WaitHandle::WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAny", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 WaitHandle::WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAny", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 WaitHandle::WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameter_types__[2] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = (MonoObject*)timeout;
					__parameters__[2] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAny", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void WaitHandle::Close()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void WaitHandle::Dispose()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean WaitHandle::SignalAndWait(mscorlib::System::Threading::WaitHandle toSignal, mscorlib::System::Threading::WaitHandle toWaitOn)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(toSignal).name());
					__parameter_types__[1] = Global::GetType(typeid(toWaitOn).name());
					__parameters__[0] = (MonoObject*)toSignal;
					__parameters__[1] = (MonoObject*)toWaitOn;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "SignalAndWait", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::SignalAndWait(mscorlib::System::Threading::WaitHandle toSignal, mscorlib::System::Threading::WaitHandle toWaitOn, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(toSignal).name());
					__parameter_types__[1] = Global::GetType(typeid(toWaitOn).name());
					__parameter_types__[2] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[3] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = (MonoObject*)toSignal;
					__parameters__[1] = (MonoObject*)toWaitOn;
					__parameters__[2] = &millisecondsTimeout;
					__parameters__[3] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "SignalAndWait", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::SignalAndWait(mscorlib::System::Threading::WaitHandle toSignal, mscorlib::System::Threading::WaitHandle toWaitOn, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(toSignal).name());
					__parameter_types__[1] = Global::GetType(typeid(toWaitOn).name());
					__parameter_types__[2] = Global::GetType(typeid(timeout).name());
					__parameter_types__[3] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = (MonoObject*)toSignal;
					__parameters__[1] = (MonoObject*)toWaitOn;
					__parameters__[2] = (MonoObject*)timeout;
					__parameters__[3] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "SignalAndWait", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitOne()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitOne", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitOne(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameter_types__[1] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = &millisecondsTimeout;
					__parameters__[1] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitOne", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitOne(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitOne", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitOne(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitOne", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitOne(mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameter_types__[1] = Global::GetType(typeid(exitContext).name());
					__parameters__[0] = (MonoObject*)timeout;
					__parameters__[1] = reinterpret_cast<void*>(exitContext);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitOne", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean WaitHandle::WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(waitHandles).name()))->eklass);
					__parameter_types__[1] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = Global::FromArray<mscorlib::System::Threading::WaitHandle*>(waitHandles, typeid(mscorlib::System::Threading::WaitHandle).name());
					__parameters__[1] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitAll", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:Handle
			mscorlib::System::IntPtr  WaitHandle::get_Handle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IntPtr(__result__);
			}

			void WaitHandle::set_Handle(mscorlib::System::IntPtr  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_Handle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:SafeWaitHandle
			mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  WaitHandle::get_SafeWaitHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_SafeWaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle(__result__);
			}

			void WaitHandle::set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_SafeWaitHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


				//	Get/Set:WaitTimeout
			mscorlib::System::Int32 WaitHandle::get_WaitTimeout()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "WaitTimeout");
			}

			void WaitHandle::set_WaitTimeout(mscorlib::System::Int32  value)
			{
			}


		}
	}
}
