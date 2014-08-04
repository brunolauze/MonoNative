#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_MUTEX_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_MUTEX_H

#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_MutexSecurity.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_MutexRights.h>

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

			class Mutex
				: public mscorlib::System::Threading::WaitHandle
				, public virtual mscorlib::System::IDisposable
			{
			public:
				Mutex()
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Mutex"))
				, mscorlib::System::IDisposable(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "Mutex");
				};
			
				Mutex(mscorlib::System::Boolean initiallyOwned)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Mutex"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(initiallyOwned);
					__native_object__ = Global::New("mscorlib", "System.Threading", "Mutex", 1, __parameter_types__, __parameters__);
				};
			
				Mutex(mscorlib::System::Boolean initiallyOwned, mscorlib::System::String name)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Mutex"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = reinterpret_cast<void*>(initiallyOwned);
					__parameters__[1] = (MonoObject*)name;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Mutex", 2, __parameter_types__, __parameters__);
				};
			
				Mutex(mscorlib::System::Boolean initiallyOwned, mscorlib::System::String name, mscorlib::System::Boolean createdNew)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Mutex"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean&");
					__parameters__[0] = reinterpret_cast<void*>(initiallyOwned);
					__parameters__[1] = (MonoObject*)name;
					__parameters__[2] = &createdNew;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Mutex", 3, __parameter_types__, __parameters__);
				};
			
				Mutex(mscorlib::System::Boolean initiallyOwned, mscorlib::System::String name, mscorlib::System::Boolean createdNew, mscorlib::System::Security::AccessControl::MutexSecurity mutexSecurity)
				: mscorlib::System::Threading::WaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Mutex"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean&");
					__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "MutexSecurity");
					__parameters__[0] = reinterpret_cast<void*>(initiallyOwned);
					__parameters__[1] = (MonoObject*)name;
					__parameters__[2] = &createdNew;
					__parameters__[3] = (MonoObject*)mutexSecurity;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Mutex", 4, __parameter_types__, __parameters__);
				};
			
				Mutex(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Threading::WaitHandle(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				Mutex(MonoObject *nativeObject)
				: mscorlib::System::Threading::WaitHandle(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~Mutex()
				{
				};
			

				Mutex & operator=(Mutex &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				mscorlib::System::Security::AccessControl::MutexSecurity  GetAccessControl();
				static mscorlib::System::Threading::Mutex  OpenExisting(mscorlib::System::String name);
				static mscorlib::System::Threading::Mutex  OpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::MutexRights::__ENUM__ rights);
				static mscorlib::System::Boolean  TryOpenExisting(mscorlib::System::String name, mscorlib::System::Threading::Mutex result);
				static mscorlib::System::Boolean  TryOpenExisting(mscorlib::System::String name, mscorlib::System::Security::AccessControl::MutexRights::__ENUM__ rights, mscorlib::System::Threading::Mutex result);
				void  ReleaseMutex();
				void  SetAccessControl(mscorlib::System::Security::AccessControl::MutexSecurity mutexSecurity);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Handle, put=set_Handle)) mscorlib::System::IntPtr  Handle;
				__declspec(property(get=get_SafeWaitHandle, put=set_SafeWaitHandle)) mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  SafeWaitHandle;

				//Get Set Properties Methods
				//	Get/Set:Handle
				mscorlib::System::IntPtr  get_Handle();
				void set_Handle(mscorlib::System::IntPtr  value);

				//	Get/Set:SafeWaitHandle
				mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  get_SafeWaitHandle();
				void set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
