#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void ISecurityEncodable::FromXml(mscorlib::System::Security::SecurityElement e)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(e).name());
					__parameters__[0] = (MonoObject*)e;
					Global::InvokeMethod("mscorlib", "System.Security", "ISecurityEncodable", 0, NULL, "FromXml", __mscorlib_System_Security_ISecurityEncodable, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Security::SecurityElement ISecurityEncodable::ToXml()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "ISecurityEncodable", 0, NULL, "ToXml", __mscorlib_System_Security_ISecurityEncodable, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecurityElement(__result__);
			}


		}
	}
}
