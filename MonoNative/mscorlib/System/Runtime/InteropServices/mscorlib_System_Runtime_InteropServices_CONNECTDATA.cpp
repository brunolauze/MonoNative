#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CONNECTDATA.h>
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
				//	Get/Set:pUnk
				mscorlib::System::Object CONNECTDATA::get_pUnk()
				{
					return Global::GetFieldValue(__native_object__, "pUnk");
				}

				void CONNECTDATA::set_pUnk(mscorlib::System::Object  value)
				{
				}

				//	Get/Set:dwCookie
				mscorlib::System::Int32 CONNECTDATA::get_dwCookie()
				{
					return Global::GetFieldInt32Value(__native_object__, "dwCookie");
				}

				void CONNECTDATA::set_dwCookie(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
