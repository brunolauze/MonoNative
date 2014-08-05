#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_EVENTWAITHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_EVENTWAITHANDLE_H

#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_EventResetMode.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleSecurity.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleRights.h>

namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		class TimeSpan;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				class SafeWaitHandle;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class EventWaitHandle
				: public mscorlib::System::Threading::WaitHandle
				, public virtual mscorlib::System::IDisposable
			{
			public:
				EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.EventWaitHandle"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "EventResetMode");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					int __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					__native_object__ = Global::New("mscorlib", "System.Threading", "EventWaitHandle", 2, __parameter_types__, __parameters__);
				};
			
				EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode, mscorlib::System::String name)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.EventWaitHandle"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "EventResetMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					int __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					__parameters__[2] = (MonoObject*)name;
					__native_object__ = Global::New("mscorlib", "System.Threading", "EventWaitHandle", 3, __parameter_types__, __parameters__);
				};
			
				EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode, mscorlib::System::String name, mscorlib::System::Boolean createdNew)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.EventWaitHandle"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "EventResetMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean&");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					int __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					__parameters__[2] = (MonoObject*)name;
					__parameters__[3] = &createdNew;
					__native_object__ = Global::New("mscorlib", "System.Threading", "EventWaitHandle", 4, __parameter_types__, __parameters__);
				};
			
				EventWaitHandle(mscorlib::System::Boolean initialState, mscorlib::System::Threading::EventResetMode::__ENUM__ mode, mscorlib::System::String name, mscorlib::System::Boolean createdNew, mscorlib::System::Security::AccessControl::EventWaitHandleSecurity eventSecurity)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.EventWaitHandle"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System.Threading", "EventResetMode");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean&");
					__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "EventWaitHandleSecurity");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					int __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					__parameters__[2] = (MonoObject*)name;
					__parameters__[3] = &createdNew;
					__parameters__[4] = (MonoObject*)eventSecurity;
					__native_object__ = Global::New("mscorlib", "System.Threading", "EventWaitHandle", 5, __parameter_types__, __parameters__);
				};
			
				EventWaitHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Threading::WaitHandle(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				EventWaitHandle(MonoObject *nativeObject)
				: mscorlib::System::Threading::WaitHandle(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~EventWaitHandle()
				{
				};
			

				EventWaitHandle & operator=(EventWaitHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Security::AccessControl::EventWaitHandleSecurity  GetAccessControl();
				static mscorlib::System::Threading::EventWaitHandle  OpenExisting(mscorlib::System::String name);
				static mscorlib::System::Threading::EventWaitHandle  OpenExisting(const char *name);
				static mscorlib::System::Threading::EventWaitHandle  OpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights);
				static mscorlib::System::Threading::EventWaitHandle  OpenExisting(const char *name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights);
				static mscorlib::System::Boolean  TryOpenExisting(mscorlib::System::String name, mscorlib::System::Threading::EventWaitHandle result);
				static mscorlib::System::Boolean  TryOpenExisting(const char *name, mscorlib::System::Threading::EventWaitHandle result);
				static mscorlib::System::Boolean  TryOpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights, mscorlib::System::Threading::EventWaitHandle result);
				static mscorlib::System::Boolean  TryOpenExisting(const char *name, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ rights, mscorlib::System::Threading::EventWaitHandle result);
				mscorlib::System::Boolean  Reset();
				mscorlib::System::Boolean  Set();
				void  SetAccessControl(mscorlib::System::Security::AccessControl::EventWaitHandleSecurity eventSecurity);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Handle, put=set_Handle)) mscorlib::System::IntPtr  Handle;
				__declspec(property(get=get_SafeWaitHandle, put=set_SafeWaitHandle)) mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  SafeWaitHandle;

				//Get Set Properties Methods
				//	Get/Set:Handle
				mscorlib::System::IntPtr  get_Handle() const;
				void set_Handle(mscorlib::System::IntPtr  value);

				//	Get/Set:SafeWaitHandle
				mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  get_SafeWaitHandle() const;
				void set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
