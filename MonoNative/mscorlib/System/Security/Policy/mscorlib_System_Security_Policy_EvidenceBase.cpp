#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
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
				mscorlib::System::Security::Policy::EvidenceBase EvidenceBase::Clone()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "EvidenceBase", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::EvidenceBase(__result__);
				}


			}
		}
	}
}
