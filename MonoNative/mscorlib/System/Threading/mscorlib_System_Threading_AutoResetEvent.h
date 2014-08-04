#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_AUTORESETEVENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_AUTORESETEVENT_H

#include <mscorlib/System/Threading/mscorlib_System_Threading_EventWaitHandle.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class EventWaitHandleSecurity;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class IntPtr;
		class TimeSpan;
		class Type;
		class String;
		

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

			class AutoResetEvent
				: public mscorlib::System::Threading::EventWaitHandle
				, public virtual mscorlib::System::IDisposable
			{
			public:
				AutoResetEvent(mscorlib::System::Boolean initialState)
				: mscorlib::System::Threading::EventWaitHandle(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.AutoResetEvent"))
				, mscorlib::System::IDisposable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
					__parameters__[0] = reinterpret_cast<void*>(initialState);
					__native_object__ = Global::New("mscorlib", "System.Threading", "AutoResetEvent", 1, __parameter_types__, __parameters__);
				};
			
				AutoResetEvent(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Threading::EventWaitHandle(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				AutoResetEvent(MonoObject *nativeObject)
				: mscorlib::System::Threading::EventWaitHandle(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~AutoResetEvent()
				{
				};
			

				AutoResetEvent & operator=(AutoResetEvent &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


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
