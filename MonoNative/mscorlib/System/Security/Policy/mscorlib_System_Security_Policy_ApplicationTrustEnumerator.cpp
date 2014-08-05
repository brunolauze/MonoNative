#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrustEnumerator.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Boolean ApplicationTrustEnumerator::MoveNext()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustEnumerator", 0, NULL, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ApplicationTrustEnumerator::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustEnumerator", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Current
				mscorlib::System::Security::Policy::ApplicationTrust  ApplicationTrustEnumerator::get_Current() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationTrustEnumerator", 0, NULL, "get_Current", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
				}



			}
		}
	}
}
