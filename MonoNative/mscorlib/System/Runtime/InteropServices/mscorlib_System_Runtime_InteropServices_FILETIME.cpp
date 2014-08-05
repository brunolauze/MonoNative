#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_FILETIME.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//	Get/Set:dwLowDateTime
				mscorlib::System::Int32 FILETIME::get_dwLowDateTime() const
				{
					return Global::GetFieldInt32Value(__native_object__, "dwLowDateTime");
				}

				void FILETIME::set_dwLowDateTime(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:dwHighDateTime
				mscorlib::System::Int32 FILETIME::get_dwHighDateTime() const
				{
					return Global::GetFieldInt32Value(__native_object__, "dwHighDateTime");
				}

				void FILETIME::set_dwHighDateTime(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
