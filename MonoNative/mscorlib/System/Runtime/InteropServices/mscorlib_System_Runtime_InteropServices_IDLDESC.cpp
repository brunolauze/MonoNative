#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_IDLDESC.h>
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
				//	Get/Set:dwReserved
				mscorlib::System::Int32 IDLDESC::get_dwReserved() const
				{
					return Global::GetFieldInt32Value(__native_object__, "dwReserved");
				}

				void IDLDESC::set_dwReserved(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:wIDLFlags
				mscorlib::System::Runtime::InteropServices::IDLFLAG::__ENUM__ IDLDESC::get_wIDLFlags() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::IDLFLAG::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "wIDLFlags"));
				}

				void IDLDESC::set_wIDLFlags(mscorlib::System::Runtime::InteropServices::IDLFLAG::__ENUM__  value)
				{
				}


			}
		}
	}
}
