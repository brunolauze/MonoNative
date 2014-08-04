#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_VARDESC.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_ELEMDESC.h>



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
					//	Get/Set:memid
					mscorlib::System::Int32 VARDESC::get_memid()
					{
						return Global::GetFieldInt32Value(__native_object__, "memid");
					}

					void VARDESC::set_memid(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:lpstrSchema
					mscorlib::System::String VARDESC::get_lpstrSchema()
					{
						return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "lpstrSchema"));
					}

					void VARDESC::set_lpstrSchema(mscorlib::System::String  value)
					{
					}

					//	Get/Set:desc
					mscorlib::System::Runtime::InteropServices::ComTypes::VARDESC::DESCUNION VARDESC::get_desc()
					{
						return Global::GetFieldValue(__native_object__, "desc");
					}

					void VARDESC::set_desc(mscorlib::System::Runtime::InteropServices::ComTypes::VARDESC::DESCUNION  value)
					{
					}

					//	Get/Set:elemdescVar
					mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC VARDESC::get_elemdescVar()
					{
						return Global::GetFieldValue(__native_object__, "elemdescVar");
					}

					void VARDESC::set_elemdescVar(mscorlib::System::Runtime::InteropServices::ComTypes::ELEMDESC  value)
					{
					}

					//	Get/Set:wVarFlags
					mscorlib::System::Int16 VARDESC::get_wVarFlags()
					{
						return Global::GetFieldInt16Value(__native_object__, "wVarFlags");
					}

					void VARDESC::set_wVarFlags(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:varkind
					mscorlib::System::Runtime::InteropServices::ComTypes::VARKIND::__ENUM__ VARDESC::get_varkind()
					{
						return static_cast<mscorlib::System::Runtime::InteropServices::ComTypes::VARKIND::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "varkind"));
					}

					void VARDESC::set_varkind(mscorlib::System::Runtime::InteropServices::ComTypes::VARKIND::__ENUM__  value)
					{
					}

					//DESCUNION Nested Type Implementation
					//Public Methods
					//	Get/Set:lpvarValue
					mscorlib::System::IntPtr VARDESC::DESCUNION::get_lpvarValue()
					{
						return Global::GetFieldValue(__native_object__, "lpvarValue");
					}

					void VARDESC::DESCUNION::set_lpvarValue(mscorlib::System::IntPtr  value)
					{
					}

					//	Get/Set:oInst
					mscorlib::System::Int32 VARDESC::DESCUNION::get_oInst()
					{
						return Global::GetFieldInt32Value(__native_object__, "oInst");
					}

					void VARDESC::DESCUNION::set_oInst(mscorlib::System::Int32  value)
					{
					}


				}
			}
		}
	}
}
