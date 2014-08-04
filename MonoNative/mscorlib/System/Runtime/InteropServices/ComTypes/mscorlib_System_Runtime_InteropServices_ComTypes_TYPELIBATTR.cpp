#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPELIBATTR.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Guid.h>



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
					//	Get/Set:guid
					mscorlib::System::Guid TYPELIBATTR::get_guid()
					{
						return Global::GetFieldValue(__native_object__, "guid");
					}

					void TYPELIBATTR::set_guid(mscorlib::System::Guid  value)
					{
					}

					//	Get/Set:lcid
					mscorlib::System::Int32 TYPELIBATTR::get_lcid()
					{
						return Global::GetFieldInt32Value(__native_object__, "lcid");
					}

					void TYPELIBATTR::set_lcid(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:syskind
					mscorlib::System::Runtime::InteropServices::ComTypes::SYSKIND::__ENUM__ TYPELIBATTR::get_syskind()
					{
						return static_cast<mscorlib::System::Runtime::InteropServices::ComTypes::SYSKIND::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "syskind"));
					}

					void TYPELIBATTR::set_syskind(mscorlib::System::Runtime::InteropServices::ComTypes::SYSKIND::__ENUM__  value)
					{
					}

					//	Get/Set:wMajorVerNum
					mscorlib::System::Int16 TYPELIBATTR::get_wMajorVerNum()
					{
						return Global::GetFieldInt16Value(__native_object__, "wMajorVerNum");
					}

					void TYPELIBATTR::set_wMajorVerNum(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:wMinorVerNum
					mscorlib::System::Int16 TYPELIBATTR::get_wMinorVerNum()
					{
						return Global::GetFieldInt16Value(__native_object__, "wMinorVerNum");
					}

					void TYPELIBATTR::set_wMinorVerNum(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:wLibFlags
					mscorlib::System::Runtime::InteropServices::ComTypes::LIBFLAGS::__ENUM__ TYPELIBATTR::get_wLibFlags()
					{
						return static_cast<mscorlib::System::Runtime::InteropServices::ComTypes::LIBFLAGS::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "wLibFlags"));
					}

					void TYPELIBATTR::set_wLibFlags(mscorlib::System::Runtime::InteropServices::ComTypes::LIBFLAGS::__ENUM__  value)
					{
					}


				}
			}
		}
	}
}
