#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_STATSTG.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_FILETIME.h>
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
					//	Get/Set:pwcsName
					mscorlib::System::String STATSTG::get_pwcsName()
					{
						return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "pwcsName"));
					}

					void STATSTG::set_pwcsName(mscorlib::System::String  value)
					{
					}

					//	Get/Set:type
					mscorlib::System::Int32 STATSTG::get_type()
					{
						return Global::GetFieldInt32Value(__native_object__, "type");
					}

					void STATSTG::set_type(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:cbSize
					mscorlib::System::Int64 STATSTG::get_cbSize()
					{
						return Global::GetFieldInt64Value(__native_object__, "cbSize");
					}

					void STATSTG::set_cbSize(mscorlib::System::Int64  value)
					{
					}

					//	Get/Set:mtime
					mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME STATSTG::get_mtime()
					{
						return Global::GetFieldValue(__native_object__, "mtime");
					}

					void STATSTG::set_mtime(mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME  value)
					{
					}

					//	Get/Set:ctime
					mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME STATSTG::get_ctime()
					{
						return Global::GetFieldValue(__native_object__, "ctime");
					}

					void STATSTG::set_ctime(mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME  value)
					{
					}

					//	Get/Set:atime
					mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME STATSTG::get_atime()
					{
						return Global::GetFieldValue(__native_object__, "atime");
					}

					void STATSTG::set_atime(mscorlib::System::Runtime::InteropServices::ComTypes::FILETIME  value)
					{
					}

					//	Get/Set:grfMode
					mscorlib::System::Int32 STATSTG::get_grfMode()
					{
						return Global::GetFieldInt32Value(__native_object__, "grfMode");
					}

					void STATSTG::set_grfMode(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:grfLocksSupported
					mscorlib::System::Int32 STATSTG::get_grfLocksSupported()
					{
						return Global::GetFieldInt32Value(__native_object__, "grfLocksSupported");
					}

					void STATSTG::set_grfLocksSupported(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:clsid
					mscorlib::System::Guid STATSTG::get_clsid()
					{
						return Global::GetFieldValue(__native_object__, "clsid");
					}

					void STATSTG::set_clsid(mscorlib::System::Guid  value)
					{
					}

					//	Get/Set:grfStateBits
					mscorlib::System::Int32 STATSTG::get_grfStateBits()
					{
						return Global::GetFieldInt32Value(__native_object__, "grfStateBits");
					}

					void STATSTG::set_grfStateBits(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:reserved
					mscorlib::System::Int32 STATSTG::get_reserved()
					{
						return Global::GetFieldInt32Value(__native_object__, "reserved");
					}

					void STATSTG::set_reserved(mscorlib::System::Int32  value)
					{
					}


				}
			}
		}
	}
}
