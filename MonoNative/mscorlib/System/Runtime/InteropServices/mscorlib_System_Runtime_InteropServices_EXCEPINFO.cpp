#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_EXCEPINFO.h>
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
				//	Get/Set:wCode
				mscorlib::System::Int16 EXCEPINFO::get_wCode() const
				{
					return Global::GetFieldInt16Value(__native_object__, "wCode");
				}

				void EXCEPINFO::set_wCode(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:wReserved
				mscorlib::System::Int16 EXCEPINFO::get_wReserved() const
				{
					return Global::GetFieldInt16Value(__native_object__, "wReserved");
				}

				void EXCEPINFO::set_wReserved(mscorlib::System::Int16  value)
				{
				}

				//	Get/Set:bstrSource
				mscorlib::System::String EXCEPINFO::get_bstrSource() const
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "bstrSource"));
				}

				void EXCEPINFO::set_bstrSource(mscorlib::System::String  value)
				{
				}

				//	Get/Set:bstrDescription
				mscorlib::System::String EXCEPINFO::get_bstrDescription() const
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "bstrDescription"));
				}

				void EXCEPINFO::set_bstrDescription(mscorlib::System::String  value)
				{
				}

				//	Get/Set:bstrHelpFile
				mscorlib::System::String EXCEPINFO::get_bstrHelpFile() const
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "bstrHelpFile"));
				}

				void EXCEPINFO::set_bstrHelpFile(mscorlib::System::String  value)
				{
				}

				//	Get/Set:dwHelpContext
				mscorlib::System::Int32 EXCEPINFO::get_dwHelpContext() const
				{
					return Global::GetFieldInt32Value(__native_object__, "dwHelpContext");
				}

				void EXCEPINFO::set_dwHelpContext(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:pvReserved
				mscorlib::System::IntPtr EXCEPINFO::get_pvReserved() const
				{
					return Global::GetFieldValue(__native_object__, "pvReserved");
				}

				void EXCEPINFO::set_pvReserved(mscorlib::System::IntPtr  value)
				{
				}

				//	Get/Set:pfnDeferredFillIn
				mscorlib::System::IntPtr EXCEPINFO::get_pfnDeferredFillIn() const
				{
					return Global::GetFieldValue(__native_object__, "pfnDeferredFillIn");
				}

				void EXCEPINFO::set_pfnDeferredFillIn(mscorlib::System::IntPtr  value)
				{
				}


			}
		}
	}
}
