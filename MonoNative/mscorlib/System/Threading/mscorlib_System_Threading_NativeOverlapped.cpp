#include <mscorlib/System/Threading/mscorlib_System_Threading_NativeOverlapped.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			//	Get/Set:InternalLow
			mscorlib::System::IntPtr NativeOverlapped::get_InternalLow() const
			{
				return Global::GetFieldValue(__native_object__, "InternalLow");
			}

			void NativeOverlapped::set_InternalLow(mscorlib::System::IntPtr  value)
			{
			}

			//	Get/Set:InternalHigh
			mscorlib::System::IntPtr NativeOverlapped::get_InternalHigh() const
			{
				return Global::GetFieldValue(__native_object__, "InternalHigh");
			}

			void NativeOverlapped::set_InternalHigh(mscorlib::System::IntPtr  value)
			{
			}

			//	Get/Set:OffsetLow
			mscorlib::System::Int32 NativeOverlapped::get_OffsetLow() const
			{
				return Global::GetFieldInt32Value(__native_object__, "OffsetLow");
			}

			void NativeOverlapped::set_OffsetLow(mscorlib::System::Int32  value)
			{
			}

			//	Get/Set:OffsetHigh
			mscorlib::System::Int32 NativeOverlapped::get_OffsetHigh() const
			{
				return Global::GetFieldInt32Value(__native_object__, "OffsetHigh");
			}

			void NativeOverlapped::set_OffsetHigh(mscorlib::System::Int32  value)
			{
			}

			//	Get/Set:EventHandle
			mscorlib::System::IntPtr NativeOverlapped::get_EventHandle() const
			{
				return Global::GetFieldValue(__native_object__, "EventHandle");
			}

			void NativeOverlapped::set_EventHandle(mscorlib::System::IntPtr  value)
			{
			}


		}
	}
}
