#include <mscorlib/System/Threading/mscorlib_System_Threading_EventWaitHandle.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeWaitHandle.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Security::AccessControl::EventWaitHandleSecurity EventWaitHandle::GetAccessControl()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "GetAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::EventWaitHandleSecurity(__result__);
			}

			mscorlib::System::Threading::EventWaitHandle EventWaitHandle::OpenExisting(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "OpenExisting", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::EventWaitHandle(__result__);
			}

			mscorlib::System::Threading::EventWaitHandle EventWaitHandle::OpenExisting(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "OpenExisting", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::EventWaitHandle(__result__);
			}

			mscorlib::System::Threading::EventWaitHandle EventWaitHandle::OpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(rights).name());
					__parameters__[0] = (MonoObject*)name;
					mscorlib::System::Int32 __param_rights__ = rights;
					__parameters__[1] = &__param_rights__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "OpenExisting", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::EventWaitHandle(__result__);
			}

			mscorlib::System::Threading::EventWaitHandle EventWaitHandle::OpenExisting(const char *name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(rights).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					mscorlib::System::Int32 __param_rights__ = rights;
					__parameters__[1] = &__param_rights__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "OpenExisting", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Threading::EventWaitHandle(__result__);
			}

			mscorlib::System::Boolean EventWaitHandle::TryOpenExisting(mscorlib::System::String name, mscorlib::System::Threading::EventWaitHandle result)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(result).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)result;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "TryOpenExisting", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EventWaitHandle::TryOpenExisting(const char *name, mscorlib::System::Threading::EventWaitHandle result)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(result).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = (MonoObject*)result;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "TryOpenExisting", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EventWaitHandle::TryOpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights, mscorlib::System::Threading::EventWaitHandle result)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(rights).name());
					__parameter_types__[2] = Global::GetType(typeid(result).name());
					__parameters__[0] = (MonoObject*)name;
					mscorlib::System::Int32 __param_rights__ = rights;
					__parameters__[1] = &__param_rights__;
					__parameters__[2] = (MonoObject*)result;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "TryOpenExisting", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EventWaitHandle::TryOpenExisting(const char *name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights, mscorlib::System::Threading::EventWaitHandle result)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(rights).name());
					__parameter_types__[2] = Global::GetType(typeid(result).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					mscorlib::System::Int32 __param_rights__ = rights;
					__parameters__[1] = &__param_rights__;
					__parameters__[2] = (MonoObject*)result;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "TryOpenExisting", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EventWaitHandle::Reset()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean EventWaitHandle::Set()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "Set", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void EventWaitHandle::SetAccessControl(mscorlib::System::Security::AccessControl::EventWaitHandleSecurity eventSecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(eventSecurity).name());
					__parameters__[0] = (MonoObject*)eventSecurity;
					Global::InvokeMethod("mscorlib", "System.Threading", "EventWaitHandle", 0, NULL, "SetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get/Set:Handle
			mscorlib::System::IntPtr  EventWaitHandle::get_Handle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
				return mono_object_unbox (__result__);
			}

			void EventWaitHandle::set_Handle(mscorlib::System::IntPtr  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_Handle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:SafeWaitHandle
			mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  EventWaitHandle::get_SafeWaitHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "get_SafeWaitHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle(__result__);
			}

			void EventWaitHandle::set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "WaitHandle", 0, NULL, "set_SafeWaitHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
