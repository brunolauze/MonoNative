#include <mscorlib/System/Security/mscorlib_System_Security_IEvidenceFactory.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Get Set Properties Methods
			//	Get:Evidence
			mscorlib::System::Security::Policy::Evidence  IEvidenceFactory::get_Evidence() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "IEvidenceFactory", 0, NULL, "get_Evidence", __mscorlib_System_Security_IEvidenceFactory, 0, NULL, NULL, NULL);
				return mscorlib::System::Security::Policy::Evidence(__result__);
			}



		}
	}
}
