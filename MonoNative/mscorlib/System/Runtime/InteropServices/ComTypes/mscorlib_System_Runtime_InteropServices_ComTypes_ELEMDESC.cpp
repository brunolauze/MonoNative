#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ELEMDESC.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IDLDESC.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_PARAMDESC.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEDESC.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					//Public Methods
					//	Get/Set:tdesc
					mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC ELEMDESC::get_tdesc()
					{
						return Global::GetFieldValue(__native_object__, "tdesc");
					}

					void ELEMDESC::set_tdesc(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC  value)
					{
					}

					//	Get/Set:desc
					mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC::DESCUNION ELEMDESC::get_desc()
					{
						return Global::GetFieldValue(__native_object__, "desc");
					}

					void ELEMDESC::set_desc(mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC::DESCUNION  value)
					{
					}

					//DESCUNION Nested Type Implementation
					//Public Methods
					//	Get/Set:idldesc
					mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC ELEMDESC::DESCUNION::get_idldesc()
					{
						return Global::GetFieldValue(__native_object__, "idldesc");
					}

					void ELEMDESC::DESCUNION::set_idldesc(mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC  value)
					{
					}

					//	Get/Set:paramdesc
					mscorlib::System::Runtime::InteropServices::ComTypes::PARAMDESC ELEMDESC::DESCUNION::get_paramdesc()
					{
						return Global::GetFieldValue(__native_object__, "paramdesc");
					}

					void ELEMDESC::DESCUNION::set_paramdesc(mscorlib::System::Runtime::InteropServices::ComTypes::PARAMDESC  value)
					{
					}


				}
			}
		}
	}
}
