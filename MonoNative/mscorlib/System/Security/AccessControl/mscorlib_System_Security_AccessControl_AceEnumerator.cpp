#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceEnumerator.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericAce.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				mscorlib::System::Boolean AceEnumerator::MoveNext()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AceEnumerator", 0, NULL, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void AceEnumerator::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AceEnumerator", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Current
				mscorlib::System::Security::AccessControl::GenericAce  AceEnumerator::get_Current()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "AceEnumerator", 0, NULL, "get_Current", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::GenericAce(__result__);
				}



			}
		}
	}
}
