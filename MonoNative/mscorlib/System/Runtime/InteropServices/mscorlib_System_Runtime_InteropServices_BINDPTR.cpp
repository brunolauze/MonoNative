#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_BINDPTR.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//	Get/Set:lpfuncdesc
				mscorlib::System::IntPtr BINDPTR::get_lpfuncdesc() const
				{
					return Global::GetFieldValue(__native_object__, "lpfuncdesc");
				}

				void BINDPTR::set_lpfuncdesc(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:lptcomp
				mscorlib::System::IntPtr BINDPTR::get_lptcomp() const
				{
					return Global::GetFieldValue(__native_object__, "lptcomp");
				}

				void BINDPTR::set_lptcomp(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:lpvardesc
				mscorlib::System::IntPtr BINDPTR::get_lpvardesc() const
				{
					return Global::GetFieldValue(__native_object__, "lpvardesc");
				}

				void BINDPTR::set_lpvardesc(mscorlib::System::IntPtr  value)
				{
				}


			}
		}
	}
}
