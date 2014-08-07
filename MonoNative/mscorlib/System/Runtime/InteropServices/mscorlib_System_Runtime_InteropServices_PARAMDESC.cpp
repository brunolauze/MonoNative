#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_PARAMDESC.h>
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
				//	Get/Set:lpVarValue
				mscorlib::System::IntPtr PARAMDESC::get_lpVarValue() const
				{
					return Global::GetFieldIntPtrValue(__native_object__, "lpVarValue");
				}

				void PARAMDESC::set_lpVarValue(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:wParamFlags
				mscorlib::System::Runtime::InteropServices::PARAMFLAG::__ENUM__ PARAMDESC::get_wParamFlags() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::PARAMFLAG::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "wParamFlags"));
				}

				void PARAMDESC::set_wParamFlags(mscorlib::System::Runtime::InteropServices::PARAMFLAG::__ENUM__  value)
				{
				}


			}
		}
	}
}
