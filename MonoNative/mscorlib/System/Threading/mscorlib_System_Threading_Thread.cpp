#include <mscorlib/System/Threading/mscorlib_System_Threading_Thread.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_ExecutionContext.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_CompressedStack.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_LocalDataStoreSlot.h>
#include <mscorlib/System/mscorlib_System_AppDomain.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/mscorlib_System_UIntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::LocalDataStoreSlot Thread::AllocateNamedDataSlot(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "AllocateNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::LocalDataStoreSlot(__result__);
			}

			void Thread::FreeNamedDataSlot(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "FreeNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::LocalDataStoreSlot Thread::AllocateDataSlot()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "AllocateDataSlot", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::LocalDataStoreSlot(__result__);
			}

			mscorlib::System::Object Thread::GetData(mscorlib::System::LocalDataStoreSlot slot)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(slot).name());
					__parameters__[0] = (MonoObject*)slot;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			void Thread::SetData(mscorlib::System::LocalDataStoreSlot slot, mscorlib::System::Object data)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(slot).name());
					__parameter_types__[1] = Global::GetType(typeid(data).name());
					__parameters__[0] = (MonoObject*)slot;
					__parameters__[1] = (MonoObject*)data;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "SetData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::LocalDataStoreSlot Thread::GetNamedDataSlot(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::LocalDataStoreSlot(__result__);
			}

			mscorlib::System::AppDomain Thread::GetDomain()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetDomain", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::AppDomain(__result__);
			}

			mscorlib::System::Int32 Thread::GetDomainID()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetDomainID", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Thread::ResetAbort()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "ResetAbort", NullMonoObject, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean Thread::Yield()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Yield", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Thread::Sleep(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Sleep", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Thread::Sleep(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Sleep", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Thread::Abort()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Abort", __native_object__, 0, NULL, NULL, NULL);
			}

			void Thread::Abort(mscorlib::System::Object stateInfo)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(stateInfo).name());
					__parameters__[0] = (MonoObject*)stateInfo;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Abort", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void Thread::Interrupt()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Interrupt", __native_object__, 0, NULL, NULL, NULL);
			}

			void Thread::Join()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Join", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Boolean Thread::Join(mscorlib::System::Int32 millisecondsTimeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(millisecondsTimeout).name());
					__parameters__[0] = &millisecondsTimeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Join", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Thread::Join(mscorlib::System::TimeSpan timeout)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(timeout).name());
					__parameters__[0] = (MonoObject*)timeout;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Join", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Thread::MemoryBarrier()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "MemoryBarrier", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void Thread::Resume()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Resume", __native_object__, 0, NULL, NULL, NULL);
			}

			void Thread::SpinWait(mscorlib::System::Int32 iterations)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(iterations).name());
					__parameters__[0] = &iterations;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "SpinWait", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Thread::Start()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Start", __native_object__, 0, NULL, NULL, NULL);
			}

			void Thread::Suspend()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Suspend", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Byte Thread::VolatileRead(mscorlib::System::Byte address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = (MonoObject*)address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Byte(__result__);
			}

			mscorlib::System::Double Thread::VolatileRead(mscorlib::System::Double address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Double*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int16 Thread::VolatileRead(mscorlib::System::Int16 address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Thread::VolatileRead(mscorlib::System::Int32 address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int64 Thread::VolatileRead(mscorlib::System::Int64 address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}

			mscorlib::System::IntPtr Thread::VolatileRead(mscorlib::System::IntPtr address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = (MonoObject*)address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IntPtr(__result__);
			}

			mscorlib::System::Object Thread::VolatileRead(mscorlib::System::Object address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = (MonoObject*)address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::SByte Thread::VolatileRead(mscorlib::System::SByte address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = (MonoObject*)address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::SByte(__result__);
			}

			mscorlib::System::Single Thread::VolatileRead(mscorlib::System::Single address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Single*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt16 Thread::VolatileRead(mscorlib::System::UInt16 address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt16*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt32 Thread::VolatileRead(mscorlib::System::UInt32 address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
			}

			mscorlib::System::UInt64 Thread::VolatileRead(mscorlib::System::UInt64 address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = &address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::UInt64*)mono_object_unbox(__result__);
			}

			mscorlib::System::UIntPtr Thread::VolatileRead(mscorlib::System::UIntPtr address)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameters__[0] = (MonoObject*)address;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::UIntPtr(__result__);
			}

			void Thread::VolatileWrite(mscorlib::System::Byte address, mscorlib::System::Byte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)address;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::Double address, mscorlib::System::Double value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::Int16 address, mscorlib::System::Int16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::Int32 address, mscorlib::System::Int32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::Int64 address, mscorlib::System::Int64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::IntPtr address, mscorlib::System::IntPtr value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)address;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::Object address, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)address;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::SByte address, mscorlib::System::SByte value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)address;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::Single address, mscorlib::System::Single value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::UInt16 address, mscorlib::System::UInt16 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::UInt32 address, mscorlib::System::UInt32 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::UInt64 address, mscorlib::System::UInt64 value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = &address;
					__parameters__[1] = &value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::VolatileWrite(mscorlib::System::UIntPtr address, mscorlib::System::UIntPtr value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(address).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)address;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "VolatileWrite", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Thread::BeginCriticalRegion()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "BeginCriticalRegion", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void Thread::EndCriticalRegion()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "EndCriticalRegion", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void Thread::BeginThreadAffinity()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "BeginThreadAffinity", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void Thread::EndThreadAffinity()
			{
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "EndThreadAffinity", NullMonoObject, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Threading::ApartmentState::__ENUM__ Thread::GetApartmentState()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetApartmentState", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Threading::ApartmentState::__ENUM__*)mono_object_unbox(__result__);
			}

			void Thread::SetApartmentState(mscorlib::System::Threading::ApartmentState::__ENUM__ state)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(state).name());
					__parameters__[0] = reinterpret_cast<void*>(state);
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "SetApartmentState", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean Thread::TrySetApartmentState(mscorlib::System::Threading::ApartmentState::__ENUM__ state)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(state).name());
					__parameters__[0] = reinterpret_cast<void*>(state);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "TrySetApartmentState", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Thread::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			void Thread::Start(mscorlib::System::Object parameter)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(parameter).name());
					__parameters__[0] = (MonoObject*)parameter;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "Start", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Threading::CompressedStack Thread::GetCompressedStack()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "GetCompressedStack", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Threading::CompressedStack(__result__);
			}

			void Thread::SetCompressedStack(mscorlib::System::Threading::CompressedStack stack)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(stack).name());
					__parameters__[0] = (MonoObject*)stack;
					Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "SetCompressedStack", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get/Set:ApartmentState
			mscorlib::System::Threading::ApartmentState::__ENUM__  Thread::get_ApartmentState()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_ApartmentState", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Threading::ApartmentState::__ENUM__*)mono_object_unbox(__result__);
			}

			void Thread::set_ApartmentState(mscorlib::System::Threading::ApartmentState::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_ApartmentState", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrentCulture
			mscorlib::System::Globalization::CultureInfo  Thread::get_CurrentCulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_CurrentCulture", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			void Thread::set_CurrentCulture(mscorlib::System::Globalization::CultureInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_CurrentCulture", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CurrentUICulture
			mscorlib::System::Globalization::CultureInfo  Thread::get_CurrentUICulture()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_CurrentUICulture", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			void Thread::set_CurrentUICulture(mscorlib::System::Globalization::CultureInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_CurrentUICulture", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:IsThreadPoolThread
			mscorlib::System::Boolean  Thread::get_IsThreadPoolThread()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_IsThreadPoolThread", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAlive
			mscorlib::System::Boolean  Thread::get_IsAlive()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_IsAlive", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get/Set:IsBackground
			mscorlib::System::Boolean  Thread::get_IsBackground()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_IsBackground", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void Thread::set_IsBackground(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_IsBackground", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Name
			mscorlib::System::String  Thread::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void Thread::set_Name(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Priority
			mscorlib::System::Threading::ThreadPriority::__ENUM__  Thread::get_Priority()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_Priority", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Threading::ThreadPriority::__ENUM__*)mono_object_unbox(__result__);
			}

			void Thread::set_Priority(mscorlib::System::Threading::ThreadPriority::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_Priority", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:ThreadState
			mscorlib::System::Threading::ThreadState::__ENUM__  Thread::get_ThreadState()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_ThreadState", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Threading::ThreadState::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get/Set:ExecutionContext
			mscorlib::System::Threading::ExecutionContext  Thread::get_ExecutionContext()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_ExecutionContext", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::ExecutionContext(__result__);
			}

			void Thread::set_ExecutionContext(mscorlib::System::Threading::ExecutionContext  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_ExecutionContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:ManagedThreadId
			mscorlib::System::Int32  Thread::get_ManagedThreadId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_ManagedThreadId", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:CurrentContext
			mscorlib::System::Runtime::Remoting::Contexts::Context  Thread::get_CurrentContext()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_CurrentContext", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Runtime::Remoting::Contexts::Context(__result__);
			}


			//	Get/Set:CurrentPrincipal
			mscorlib::System::Security::Principal::IPrincipal  Thread::get_CurrentPrincipal()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_CurrentPrincipal", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Security::Principal::IPrincipal(__result__);
			}

			void Thread::set_CurrentPrincipal(mscorlib::System::Security::Principal::IPrincipal  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "set_CurrentPrincipal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:CurrentThread
			mscorlib::System::Threading::Thread  Thread::get_CurrentThread()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "Thread", 0, NULL, "get_CurrentThread", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Threading::Thread(__result__);
			}




		}
	}
}
