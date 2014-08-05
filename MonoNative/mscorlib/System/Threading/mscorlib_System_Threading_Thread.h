#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREAD_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_THREAD_H

#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_CriticalFinalizerObject.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Thread.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ApartmentState.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ThreadPriority.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ThreadState.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>

namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class TimeSpan;
		class Type;
		class LocalDataStoreSlot;
		class AppDomain;
		class Byte;
		class IntPtr;
		class SByte;
		class UIntPtr;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ExecutionContext;
			class CompressedStack;
			

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
				namespace Contexts
				{

					class Context;
					

				}
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

			class Thread
				: public mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject
				, public virtual mscorlib::System::Runtime::InteropServices::_Thread
			{
			public:
				Thread(mscorlib::Callback<void  ()> start)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Thread"))
				, mscorlib::System::Runtime::InteropServices::_Thread(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "ThreadStart");
					__parameters__[0] = &start;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Thread", 1, __parameter_types__, __parameters__);
				};
			
				Thread(mscorlib::Callback<void  ()> start, mscorlib::System::Int32 maxStackSize)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Thread"))
				, mscorlib::System::Runtime::InteropServices::_Thread(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "ThreadStart");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &start;
					__parameters__[1] = &maxStackSize;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Thread", 2, __parameter_types__, __parameters__);
				};
			
				Thread(mscorlib::Callback<void  (mscorlib::System::Object )> start)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Thread"))
				, mscorlib::System::Runtime::InteropServices::_Thread(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "ParameterizedThreadStart");
					__parameters__[0] = &start;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Thread", 1, __parameter_types__, __parameters__);
				};
			
				Thread(mscorlib::Callback<void  (mscorlib::System::Object )> start, mscorlib::System::Int32 maxStackSize)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Threading.Thread"))
				, mscorlib::System::Runtime::InteropServices::_Thread(NULL)
				{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System.Threading", "ParameterizedThreadStart");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
					__parameters__[0] = &start;
					__parameters__[1] = &maxStackSize;
					__native_object__ = Global::New("mscorlib", "System.Threading", "Thread", 2, __parameter_types__, __parameters__);
				};
			
				Thread(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeTypeInfo)
				, mscorlib::System::Runtime::InteropServices::_Thread(NULL)
				{
				};
			
				Thread(MonoObject *nativeObject)
				: mscorlib::System::Runtime::ConstrainedExecution::CriticalFinalizerObject(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Thread(nativeObject)
				{
				};
			
				~Thread()
				{
				};
			

				Thread & operator=(Thread &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::LocalDataStoreSlot  AllocateNamedDataSlot(mscorlib::System::String name);
				static void  FreeNamedDataSlot(mscorlib::System::String name);
				static mscorlib::System::LocalDataStoreSlot  AllocateDataSlot();
				static mscorlib::System::Object  GetData(mscorlib::System::LocalDataStoreSlot slot);
				static void  SetData(mscorlib::System::LocalDataStoreSlot slot, mscorlib::System::Object data);
				static mscorlib::System::LocalDataStoreSlot  GetNamedDataSlot(mscorlib::System::String name);
				static mscorlib::System::AppDomain  GetDomain();
				static mscorlib::System::Int32  GetDomainID();
				static void  ResetAbort();
				static mscorlib::System::Boolean  Yield();
				static void  Sleep(mscorlib::System::Int32 millisecondsTimeout);
				static void  Sleep(mscorlib::System::TimeSpan timeout);
				void  Abort();
				void  Abort(mscorlib::System::Object stateInfo);
				void  Interrupt();
				void  Join();
				mscorlib::System::Boolean  Join(mscorlib::System::Int32 millisecondsTimeout);
				mscorlib::System::Boolean  Join(mscorlib::System::TimeSpan timeout);
				static void  MemoryBarrier();
				void  Resume();
				static void  SpinWait(mscorlib::System::Int32 iterations);
				void  Start();
				void  Suspend();
				static mscorlib::System::Byte  VolatileRead(mscorlib::System::Byte address);
				static mscorlib::System::Double  VolatileRead(mscorlib::System::Double address);
				static mscorlib::System::Int16  VolatileRead(mscorlib::System::Int16 address);
				static mscorlib::System::Int32  VolatileRead(mscorlib::System::Int32 address);
				static mscorlib::System::Int64  VolatileRead(mscorlib::System::Int64 address);
				static mscorlib::System::IntPtr  VolatileRead(mscorlib::System::IntPtr address);
				static mscorlib::System::Object  VolatileRead(mscorlib::System::Object address);
				static mscorlib::System::SByte  VolatileRead(mscorlib::System::SByte address);
				static mscorlib::System::Single  VolatileRead(mscorlib::System::Single address);
				static mscorlib::System::UInt16  VolatileRead(mscorlib::System::UInt16 address);
				static mscorlib::System::UInt32  VolatileRead(mscorlib::System::UInt32 address);
				static mscorlib::System::UInt64  VolatileRead(mscorlib::System::UInt64 address);
				static mscorlib::System::UIntPtr  VolatileRead(mscorlib::System::UIntPtr address);
				static void  VolatileWrite(mscorlib::System::Byte address, mscorlib::System::Byte value);
				static void  VolatileWrite(mscorlib::System::Double address, mscorlib::System::Double value);
				static void  VolatileWrite(mscorlib::System::Int16 address, mscorlib::System::Int16 value);
				static void  VolatileWrite(mscorlib::System::Int32 address, mscorlib::System::Int32 value);
				static void  VolatileWrite(mscorlib::System::Int64 address, mscorlib::System::Int64 value);
				static void  VolatileWrite(mscorlib::System::IntPtr address, mscorlib::System::IntPtr value);
				static void  VolatileWrite(mscorlib::System::Object address, mscorlib::System::Object value);
				static void  VolatileWrite(mscorlib::System::SByte address, mscorlib::System::SByte value);
				static void  VolatileWrite(mscorlib::System::Single address, mscorlib::System::Single value);
				static void  VolatileWrite(mscorlib::System::UInt16 address, mscorlib::System::UInt16 value);
				static void  VolatileWrite(mscorlib::System::UInt32 address, mscorlib::System::UInt32 value);
				static void  VolatileWrite(mscorlib::System::UInt64 address, mscorlib::System::UInt64 value);
				static void  VolatileWrite(mscorlib::System::UIntPtr address, mscorlib::System::UIntPtr value);
				static void  BeginCriticalRegion();
				static void  EndCriticalRegion();
				static void  BeginThreadAffinity();
				static void  EndThreadAffinity();
				mscorlib::System::Threading::ApartmentState::__ENUM__  GetApartmentState();
				void  SetApartmentState(mscorlib::System::Threading::ApartmentState::__ENUM__ state);
				mscorlib::System::Boolean  TrySetApartmentState(mscorlib::System::Threading::ApartmentState::__ENUM__ state);
				virtual mscorlib::System::Int32  GetHashCode() override;
				void  Start(mscorlib::System::Object parameter);
				mscorlib::System::Threading::CompressedStack  GetCompressedStack();
				void  SetCompressedStack(mscorlib::System::Threading::CompressedStack stack);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ApartmentState, put=set_ApartmentState)) mscorlib::System::Threading::ApartmentState::__ENUM__  ApartmentState;
				__declspec(property(get=get_CurrentCulture, put=set_CurrentCulture)) mscorlib::System::Globalization::CultureInfo  CurrentCulture;
				__declspec(property(get=get_CurrentUICulture, put=set_CurrentUICulture)) mscorlib::System::Globalization::CultureInfo  CurrentUICulture;
				__declspec(property(get=get_IsThreadPoolThread)) mscorlib::System::Boolean  IsThreadPoolThread;
				__declspec(property(get=get_IsAlive)) mscorlib::System::Boolean  IsAlive;
				__declspec(property(get=get_IsBackground, put=set_IsBackground)) mscorlib::System::Boolean  IsBackground;
				__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_Priority, put=set_Priority)) mscorlib::System::Threading::ThreadPriority::__ENUM__  Priority;
				__declspec(property(get=get_ThreadState)) mscorlib::System::Threading::ThreadState::__ENUM__  ThreadState;
				__declspec(property(get=get_ExecutionContext, put=set_ExecutionContext)) mscorlib::System::Threading::ExecutionContext  ExecutionContext;
				__declspec(property(get=get_ManagedThreadId)) mscorlib::System::Int32  ManagedThreadId;

				//Public Static Properties
				static Property<mscorlib::System::Runtime::Remoting::Contexts::Context , mscorlib::System::Threading::Thread> CurrentContext;
				static Property<mscorlib::System::Security::Principal::IPrincipal , mscorlib::System::Threading::Thread> CurrentPrincipal;
				static Property<mscorlib::System::Threading::Thread , mscorlib::System::Threading::Thread> CurrentThread;

				//Get Set Properties Methods
				//	Get/Set:ApartmentState
				mscorlib::System::Threading::ApartmentState::__ENUM__  get_ApartmentState() const;
				void set_ApartmentState(mscorlib::System::Threading::ApartmentState::__ENUM__  value);

				//	Get/Set:CurrentCulture
				mscorlib::System::Globalization::CultureInfo  get_CurrentCulture() const;
				void set_CurrentCulture(mscorlib::System::Globalization::CultureInfo  value);

				//	Get/Set:CurrentUICulture
				mscorlib::System::Globalization::CultureInfo  get_CurrentUICulture() const;
				void set_CurrentUICulture(mscorlib::System::Globalization::CultureInfo  value);

				//	Get:IsThreadPoolThread
				mscorlib::System::Boolean  get_IsThreadPoolThread() const;

				//	Get:IsAlive
				mscorlib::System::Boolean  get_IsAlive() const;

				//	Get/Set:IsBackground
				mscorlib::System::Boolean  get_IsBackground() const;
				void set_IsBackground(mscorlib::System::Boolean  value);

				//	Get/Set:Name
				mscorlib::System::String  get_Name() const;
				void set_Name(mscorlib::System::String  value);

				//	Get/Set:Priority
				mscorlib::System::Threading::ThreadPriority::__ENUM__  get_Priority() const;
				void set_Priority(mscorlib::System::Threading::ThreadPriority::__ENUM__  value);

				//	Get:ThreadState
				mscorlib::System::Threading::ThreadState::__ENUM__  get_ThreadState() const;

				//	Get/Set:ExecutionContext
				mscorlib::System::Threading::ExecutionContext  get_ExecutionContext() const;
				void set_ExecutionContext(mscorlib::System::Threading::ExecutionContext  value);

				//	Get:ManagedThreadId
				mscorlib::System::Int32  get_ManagedThreadId() const;

				//Get Set Static Properties Methods
				//	Get:CurrentContext
				static mscorlib::System::Runtime::Remoting::Contexts::Context  get_CurrentContext();
				static void set_CurrentContext(mscorlib::System::Runtime::Remoting::Contexts::Context  value);

				//	Get/Set:CurrentPrincipal
				static mscorlib::System::Security::Principal::IPrincipal  get_CurrentPrincipal();
				static void set_CurrentPrincipal(mscorlib::System::Security::Principal::IPrincipal  value);

				//	Get:CurrentThread
				static mscorlib::System::Threading::Thread  get_CurrentThread();
				static void set_CurrentThread(mscorlib::System::Threading::Thread  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
