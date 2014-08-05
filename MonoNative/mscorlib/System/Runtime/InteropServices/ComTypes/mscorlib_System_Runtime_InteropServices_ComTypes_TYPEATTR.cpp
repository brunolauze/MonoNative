#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEATTR.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_TYPEDESC.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IDLDESC.h>



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
					mscorlib::System::Guid TYPEATTR::get_guid() const
					{
						return Global::GetFieldValue(__native_object__, "guid");
					}

					void TYPEATTR::set_guid(mscorlib::System::Guid  value)
					{
					}

					//	Get/Set:lcid
					mscorlib::System::Int32 TYPEATTR::get_lcid() const
					{
						return Global::GetFieldInt32Value(__native_object__, "lcid");
					}

					void TYPEATTR::set_lcid(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:dwReserved
					mscorlib::System::Int32 TYPEATTR::get_dwReserved() const
					{
						return Global::GetFieldInt32Value(__native_object__, "dwReserved");
					}

					void TYPEATTR::set_dwReserved(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:memidConstructor
					mscorlib::System::Int32 TYPEATTR::get_memidConstructor() const
					{
						return Global::GetFieldInt32Value(__native_object__, "memidConstructor");
					}

					void TYPEATTR::set_memidConstructor(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:memidDestructor
					mscorlib::System::Int32 TYPEATTR::get_memidDestructor() const
					{
						return Global::GetFieldInt32Value(__native_object__, "memidDestructor");
					}

					void TYPEATTR::set_memidDestructor(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:lpstrSchema
					mscorlib::System::IntPtr TYPEATTR::get_lpstrSchema() const
					{
						return Global::GetFieldValue(__native_object__, "lpstrSchema");
					}

					void TYPEATTR::set_lpstrSchema(mscorlib::System::IntPtr  value)
					{
					}

					//	Get/Set:cbSizeInstance
					mscorlib::System::Int32 TYPEATTR::get_cbSizeInstance() const
					{
						return Global::GetFieldInt32Value(__native_object__, "cbSizeInstance");
					}

					void TYPEATTR::set_cbSizeInstance(mscorlib::System::Int32  value)
					{
					}

					//	Get/Set:typekind
					mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__ TYPEATTR::get_typekind() const
					{
						return static_cast<mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "typekind"));
					}

					void TYPEATTR::set_typekind(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEKIND::__ENUM__  value)
					{
					}

					//	Get/Set:cFuncs
					mscorlib::System::Int16 TYPEATTR::get_cFuncs() const
					{
						return Global::GetFieldInt16Value(__native_object__, "cFuncs");
					}

					void TYPEATTR::set_cFuncs(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:cVars
					mscorlib::System::Int16 TYPEATTR::get_cVars() const
					{
						return Global::GetFieldInt16Value(__native_object__, "cVars");
					}

					void TYPEATTR::set_cVars(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:cImplTypes
					mscorlib::System::Int16 TYPEATTR::get_cImplTypes() const
					{
						return Global::GetFieldInt16Value(__native_object__, "cImplTypes");
					}

					void TYPEATTR::set_cImplTypes(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:cbSizeVft
					mscorlib::System::Int16 TYPEATTR::get_cbSizeVft() const
					{
						return Global::GetFieldInt16Value(__native_object__, "cbSizeVft");
					}

					void TYPEATTR::set_cbSizeVft(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:cbAlignment
					mscorlib::System::Int16 TYPEATTR::get_cbAlignment() const
					{
						return Global::GetFieldInt16Value(__native_object__, "cbAlignment");
					}

					void TYPEATTR::set_cbAlignment(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:wTypeFlags
					mscorlib::System::Runtime::InteropServices::ComTypes::TYPEFLAGS::__ENUM__ TYPEATTR::get_wTypeFlags() const
					{
						return static_cast<mscorlib::System::Runtime::InteropServices::ComTypes::TYPEFLAGS::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "wTypeFlags"));
					}

					void TYPEATTR::set_wTypeFlags(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEFLAGS::__ENUM__  value)
					{
					}

					//	Get/Set:wMajorVerNum
					mscorlib::System::Int16 TYPEATTR::get_wMajorVerNum() const
					{
						return Global::GetFieldInt16Value(__native_object__, "wMajorVerNum");
					}

					void TYPEATTR::set_wMajorVerNum(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:wMinorVerNum
					mscorlib::System::Int16 TYPEATTR::get_wMinorVerNum() const
					{
						return Global::GetFieldInt16Value(__native_object__, "wMinorVerNum");
					}

					void TYPEATTR::set_wMinorVerNum(mscorlib::System::Int16  value)
					{
					}

					//	Get/Set:tdescAlias
					mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC TYPEATTR::get_tdescAlias() const
					{
						return Global::GetFieldValue(__native_object__, "tdescAlias");
					}

					void TYPEATTR::set_tdescAlias(mscorlib::System::Runtime::InteropServices::ComTypes::TYPEDESC  value)
					{
					}

					//	Get/Set:idldescType
					mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC TYPEATTR::get_idldescType() const
					{
						return Global::GetFieldValue(__native_object__, "idldescType");
					}

					void TYPEATTR::set_idldescType(mscorlib::System::Runtime::InteropServices::ComTypes::IDLDESC  value)
					{
					}

						//	Get/Set:MEMBER_ID_NIL
					mscorlib::System::Int32 TYPEATTR::get_MEMBER_ID_NIL()
					{
						return Global::GetFieldInt32Value("mscorlib", "System.Runtime.InteropServices.ComTypes", "TYPEATTR", 0, NULL, "MEMBER_ID_NIL");
					}

					void TYPEATTR::set_MEMBER_ID_NIL(mscorlib::System::Int32  value)
					{
					}


				}
			}
		}
	}
}
