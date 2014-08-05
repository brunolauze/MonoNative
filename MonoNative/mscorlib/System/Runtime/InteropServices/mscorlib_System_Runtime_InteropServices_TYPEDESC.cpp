#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TYPEDESC.h>
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
				//	Get/Set:lpValue
				mscorlib::System::IntPtr TYPEDESC::get_lpValue() const
				{
					return Global::GetFieldValue(__native_object__, "lpValue");
				}

				void TYPEDESC::set_lpValue(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:vt
				mscorlib::System::Int16 TYPEDESC::get_vt() const
				{
					return Global::GetFieldInt16Value(__native_object__, "vt");
				}

				void TYPEDESC::set_vt(mscorlib::System::Int16  value)
				{
				}


			}
		}
	}
}
