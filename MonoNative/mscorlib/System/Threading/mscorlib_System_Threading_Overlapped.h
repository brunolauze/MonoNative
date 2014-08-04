#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_OVERLAPPED_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_OVERLAPPED_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_IAsyncResult.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>

namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class NativeOverlapped;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

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

			class Overlapped
				: public mscorlib::System::Object
			{
			public:
				Overlapped()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Overlapped"))
				{
					__native_object__ = Global::New("mscorlib", "System.Threading", "Overlapped");
				};
			
				Overlapped(mscorlib::System::Int32 offsetLo, mscorlib::System::Int32 offsetHi, mscorlib::System::Int32 hEvent, mscorlib::System::IAsyncResult ar)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Overlapped"))
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "IAsyncResult");
					__parameters__[0] = &offsetLo;
					__parameters__[1] = &offsetHi;
					__parameters__[2] = &hEvent;
					__parameters__[3] = (MonoObject*)ar;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Overlapped", 4, __parameter_types__, __parameters__);
				};
			
				Overlapped(mscorlib::System::Int32 offsetLo, mscorlib::System::Int32 offsetHi, mscorlib::System::IntPtr hEvent, mscorlib::System::IAsyncResult ar)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Overlapped"))
				{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "IntPtr");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "IAsyncResult");
					__parameters__[0] = &offsetLo;
					__parameters__[1] = &offsetHi;
					__parameters__[2] = (MonoObject*)hEvent;
					__parameters__[3] = (MonoObject*)ar;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Overlapped", 4, __parameter_types__, __parameters__);
				};
			
				Overlapped(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Overlapped(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Overlapped()
				{
				};
			

				Overlapped & operator=(Overlapped &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  Free(mscorlib::System::Threading::NativeOverlapped* nativeOverlappedPtr);
				static mscorlib::System::Threading::Overlapped  Unpack(mscorlib::System::Threading::NativeOverlapped* nativeOverlappedPtr);
				mscorlib::System::Threading::NativeOverlapped*  Pack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb);
				mscorlib::System::Threading::NativeOverlapped*  Pack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb, mscorlib::System::Object userData);
				mscorlib::System::Threading::NativeOverlapped*  UnsafePack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb);
				mscorlib::System::Threading::NativeOverlapped*  UnsafePack(mscorlib::Callback<void  (mscorlib::System::UInt32 , mscorlib::System::UInt32 , mscorlib::System::Threading::NativeOverlapped* )> iocb, mscorlib::System::Object userData);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_AsyncResult, put=set_AsyncResult)) mscorlib::System::IAsyncResult  AsyncResult;
				__declspec(property(get=get_EventHandle, put=set_EventHandle)) mscorlib::System::Int32  EventHandle;
				__declspec(property(get=get_EventHandleIntPtr, put=set_EventHandleIntPtr)) mscorlib::System::IntPtr  EventHandleIntPtr;
				__declspec(property(get=get_OffsetHigh, put=set_OffsetHigh)) mscorlib::System::Int32  OffsetHigh;
				__declspec(property(get=get_OffsetLow, put=set_OffsetLow)) mscorlib::System::Int32  OffsetLow;

				//Get Set Properties Methods
				//	Get/Set:AsyncResult
				mscorlib::System::IAsyncResult  get_AsyncResult();
				void set_AsyncResult(mscorlib::System::IAsyncResult  value);

				//	Get/Set:EventHandle
				mscorlib::System::Int32  get_EventHandle();
				void set_EventHandle(mscorlib::System::Int32  value);

				//	Get/Set:EventHandleIntPtr
				mscorlib::System::IntPtr  get_EventHandleIntPtr();
				void set_EventHandleIntPtr(mscorlib::System::IntPtr  value);

				//	Get/Set:OffsetHigh
				mscorlib::System::Int32  get_OffsetHigh();
				void set_OffsetHigh(mscorlib::System::Int32  value);

				//	Get/Set:OffsetLow
				mscorlib::System::Int32  get_OffsetLow();
				void set_OffsetLow(mscorlib::System::Int32  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
