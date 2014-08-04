#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_READERWRITERLOCK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_READERWRITERLOCK_H

#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Threading
		{

			class LockCookie;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ReaderWriterLock
				: public mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
			{
			public:
				ReaderWriterLock()
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.ReaderWriterLock"))
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "ReaderWriterLock");
				};
			
				ReaderWriterLock(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeTypeInfo)
				{
				};
			
				ReaderWriterLock(MonoObject *nativeObject)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeObject)
				{
				};
			
				~ReaderWriterLock()
				{
				};
			

				ReaderWriterLock & operator=(ReaderWriterLock &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  AcquireReaderLock(mscorlib::System::Int32 millisecondsTimeout);
				void  AcquireReaderLock(mscorlib::System::TimeSpan timeout);
				void  AcquireWriterLock(mscorlib::System::Int32 millisecondsTimeout);
				void  AcquireWriterLock(mscorlib::System::TimeSpan timeout);
				mscorlib::System::Boolean  AnyWritersSince(mscorlib::System::Int32 seqNum);
				void  DowngradeFromWriterLock(mscorlib::System::Threading::LockCookie lockCookie);
				mscorlib::System::Threading::LockCookie  ReleaseLock();
				void  ReleaseReaderLock();
				void  ReleaseWriterLock();
				void  RestoreLock(mscorlib::System::Threading::LockCookie lockCookie);
				mscorlib::System::Threading::LockCookie  UpgradeToWriterLock(mscorlib::System::Int32 millisecondsTimeout);
				mscorlib::System::Threading::LockCookie  UpgradeToWriterLock(mscorlib::System::TimeSpan timeout);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_IsReaderLockHeld)) mscorlib::System::Boolean  IsReaderLockHeld;
				__declspec(property(get=get_IsWriterLockHeld)) mscorlib::System::Boolean  IsWriterLockHeld;
				__declspec(property(get=get_WriterSeqNum)) mscorlib::System::Int32  WriterSeqNum;

				//Get Set Properties Methods
				//	Get:IsReaderLockHeld
				mscorlib::System::Boolean  get_IsReaderLockHeld();

				//	Get:IsWriterLockHeld
				mscorlib::System::Boolean  get_IsWriterLockHeld();

				//	Get:WriterSeqNum
				mscorlib::System::Int32  get_WriterSeqNum();

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
