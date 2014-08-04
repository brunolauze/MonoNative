#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_FUNCDESC.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ELEMDESC.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//	Get/Set:memid
				mscorlib::System::Int32 FUNCDESC::get_memid()
				{
					return Global::GetFieldInt32Value(__native_object__, "memid");
				}

				void FUNCDESC::set_memid(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:lprgscode
				mscorlib::System::IntPtr FUNCDESC::get_lprgscode()
				{
					return Global::GetFieldValue(__native_object__, "lprgscode");
				}

				void FUNCDESC::set_lprgscode(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:lprgelemdescParam
				mscorlib::System::IntPtr FUNCDESC::get_lprgelemdescParam()
				{
					return Global::GetFieldValue(__native_object__, "lprgelemdescParam");
				}

				void FUNCDESC::set_lprgelemdescParam(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:funckind
				mscorlib::System::Runtime::InteropServices::FUNCKIND::__ENUM__ FUNCDESC::get_funckind()
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::FUNCKIND::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "funckind"));
				}

				void FUNCDESC::set_funckind(mscorlib::System::Runtime::InteropServices::FUNCKIND::__ENUM__  value)
				{
				}

				//	Get/Set:invkind
				mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__ FUNCDESC::get_invkind()
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "invkind"));
				}

				void FUNCDESC::set_invkind(mscorlib::System::Runtime::InteropServices::INVOKEKIND::__ENUM__  value)
				{
				}

				//	Get/Set:callconv
				mscorlib::System::Runtime::InteropServices::CALLCONV::__ENUM__ FUNCDESC::get_callconv()
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::CALLCONV::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "callconv"));
				}

				void FUNCDESC::set_callconv(mscorlib::System::Runtime::InteropServices::CALLCONV::__ENUM__  value)
				{
				}

				//	Get/Set:cParams
				mscorlib::System::Int16 FUNCDESC::get_cParams()
				{
					return Global::GetFieldInt16Value(__native_object__, "cParams");
				}

				void FUNCDESC::set_cParams(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:cParamsOpt
				mscorlib::System::Int16 FUNCDESC::get_cParamsOpt()
				{
					return Global::GetFieldInt16Value(__native_object__, "cParamsOpt");
				}

				void FUNCDESC::set_cParamsOpt(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:oVft
				mscorlib::System::Int16 FUNCDESC::get_oVft()
				{
					return Global::GetFieldInt16Value(__native_object__, "oVft");
				}

				void FUNCDESC::set_oVft(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:cScodes
				mscorlib::System::Int16 FUNCDESC::get_cScodes()
				{
					return Global::GetFieldInt16Value(__native_object__, "cScodes");
				}

				void FUNCDESC::set_cScodes(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:elemdescFunc
				mscorlib::System::Runtime::InteropServices::ELEMDESC FUNCDESC::get_elemdescFunc()
				{
					return Global::GetFieldValue(__native_object__, "elemdescFunc");
				}

				void FUNCDESC::set_elemdescFunc(mscorlib::System::Runtime::InteropServices::ELEMDESC  value)
				{
				}

				//	Get/Set:wFuncFlags
				mscorlib::System::Int16 FUNCDESC::get_wFuncFlags()
				{
					return Global::GetFieldInt16Value(__native_object__, "wFuncFlags");
				}

				void FUNCDESC::set_wFuncFlags(mscorlib::System::Int16  value)
				{
				}


			}
		}
	}
}
