#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_WAITHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_WAITHANDLE_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

		class TimeSpan;
		class Type;
		class String;
		

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

			class WaitHandle
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				WaitHandle(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				WaitHandle(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~WaitHandle()
				{
				};
			

				WaitHandle & operator=(WaitHandle &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(WaitHandle &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles);
				static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext);
				static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext);
				static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles);
				static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext);
				static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout);
				static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout);
				static mscorlib::System::Int32  WaitAny(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext);
				virtual void  Close();
				virtual void  Dispose();
				static mscorlib::System::Boolean  SignalAndWait(mscorlib::System::Threading::WaitHandle toSignal, mscorlib::System::Threading::WaitHandle toWaitOn);
				static mscorlib::System::Boolean  SignalAndWait(mscorlib::System::Threading::WaitHandle toSignal, mscorlib::System::Threading::WaitHandle toWaitOn, mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext);
				static mscorlib::System::Boolean  SignalAndWait(mscorlib::System::Threading::WaitHandle toSignal, mscorlib::System::Threading::WaitHandle toWaitOn, mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext);
				virtual mscorlib::System::Boolean  WaitOne();
				virtual mscorlib::System::Boolean  WaitOne(mscorlib::System::Int32 millisecondsTimeout, mscorlib::System::Boolean exitContext);
				virtual mscorlib::System::Boolean  WaitOne(mscorlib::System::Int32 millisecondsTimeout);
				virtual mscorlib::System::Boolean  WaitOne(mscorlib::System::TimeSpan timeout);
				virtual mscorlib::System::Boolean  WaitOne(mscorlib::System::TimeSpan timeout, mscorlib::System::Boolean exitContext);
				static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::Int32 millisecondsTimeout);
				static mscorlib::System::Boolean  WaitAll(std::vector<mscorlib::System::Threading::WaitHandle*> waitHandles, mscorlib::System::TimeSpan timeout);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Handle, put=set_Handle)) mscorlib::System::IntPtr  Handle;
				__declspec(property(get=get_SafeWaitHandle, put=set_SafeWaitHandle)) mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  SafeWaitHandle;

				//Public Static Fields
				static Property<mscorlib::System::Int32 , mscorlib::System::Threading::WaitHandle> WaitTimeout;

				//Get Set Properties Methods
				//	Get/Set:Handle
				mscorlib::System::IntPtr  get_Handle() const;
				void set_Handle(mscorlib::System::IntPtr  value);

				//	Get/Set:SafeWaitHandle
				mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  get_SafeWaitHandle() const;
				void set_SafeWaitHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeWaitHandle  value);

				//	Get/Set:WaitTimeout
				static mscorlib::System::Int32  get_WaitTimeout();
				static void set_WaitTimeout(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
