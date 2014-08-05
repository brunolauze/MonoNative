#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ELEMDESC.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_IDLDESC.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_PARAMDESC.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TYPEDESC.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//	Get/Set:tdesc
				mscorlib::System::Runtime::InteropServices::TYPEDESC ELEMDESC::get_tdesc() const
				{
					return Global::GetFieldValue(__native_object__, "tdesc");
				}

				void ELEMDESC::set_tdesc(mscorlib::System::Runtime::InteropServices::TYPEDESC  value)
				{
				}

				//	Get/Set:desc
				mscorlib::System::Runtime::InteropServices::ELEMDESC::DESCUNION ELEMDESC::get_desc() const
				{
					return Global::GetFieldValue(__native_object__, "desc");
				}

				void ELEMDESC::set_desc(mscorlib::System::Runtime::InteropServices::ELEMDESC::DESCUNION  value)
				{
				}

				//DESCUNION Nested Type Implementation
				//Public Methods
				//	Get/Set:idldesc
				mscorlib::System::Runtime::InteropServices::IDLDESC ELEMDESC::DESCUNION::get_idldesc() const
				{
					return Global::GetFieldValue(__native_object__, "idldesc");
				}

				void ELEMDESC::DESCUNION::set_idldesc(mscorlib::System::Runtime::InteropServices::IDLDESC  value)
				{
				}

				//	Get/Set:paramdesc
				mscorlib::System::Runtime::InteropServices::PARAMDESC ELEMDESC::DESCUNION::get_paramdesc() const
				{
					return Global::GetFieldValue(__native_object__, "paramdesc");
				}

				void ELEMDESC::DESCUNION::set_paramdesc(mscorlib::System::Runtime::InteropServices::PARAMDESC  value)
				{
				}


			}
		}
	}
}
