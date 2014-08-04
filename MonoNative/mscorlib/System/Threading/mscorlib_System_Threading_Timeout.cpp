#include <mscorlib/System/Threading/mscorlib_System_Threading_Timeout.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
				//	Get/Set:Infinite
			mscorlib::System::Int32 Timeout::get_Infinite()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Threading", "Timeout", 0, NULL, "Infinite");
			}

			void Timeout::set_Infinite(mscorlib::System::Int32  value)
			{
			}

				//	Get/Set:InfiniteTimeSpan
			mscorlib::System::TimeSpan Timeout::get_InfiniteTimeSpan()
			{
				return Global::GetFieldValue("mscorlib", "System.Threading", "Timeout", 0, NULL, "InfiniteTimeSpan");
			}



		}
	}
}
