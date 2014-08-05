#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_DISPPARAMS.h>
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
				namespace ComTypes
				{

					//Public Methods
					//	Get/Set:rgvarg
					mscorlib::System::IntPtr DISPPARAMS::get_rgvarg() const
					{
						return Global::GetFieldValue(__native_object__, "rgvarg");
					}

					void DISPPARAMS::set_rgvarg(mscorlib::System::IntPtr  value)
					{
					}

					//	Get/Set:rgdispidNamedArgs
					mscorlib::System::IntPtr DISPPARAMS::get_rgdispidNamedArgs() const
					{
						return Global::GetFieldValue(__native_object__, "rgdispidNamedArgs");
					}

					void DISPPARAMS::set_rgdispidNamedArgs(mscorlib::System::IntPtr  value)
					{
					}

					//	Get/Set:cArgs
					mscorlib::System::Int32 DISPPARAMS::get_cArgs() const
					{
						return Global::GetFieldInt32Value(__native_object__, "cArgs");
					}

					void DISPPARAMS::set_cArgs(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:cNamedArgs
					mscorlib::System::Int32 DISPPARAMS::get_cNamedArgs() const
					{
						return Global::GetFieldInt32Value(__native_object__, "cNamedArgs");
					}

					void DISPPARAMS::set_cNamedArgs(mscorlib::System::Int32  value)
					{
					}


				}
			}
		}
	}
}
