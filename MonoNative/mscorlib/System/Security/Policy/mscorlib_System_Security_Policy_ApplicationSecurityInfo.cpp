#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationSecurityInfo.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_ApplicationId.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
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
				//Get Set Properties Methods
				//	Get/Set:ApplicationEvidence
				mscorlib::System::Security::Policy::Evidence  ApplicationSecurityInfo::get_ApplicationEvidence() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "get_ApplicationEvidence", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Policy::Evidence(__result__);
				}

				void ApplicationSecurityInfo::set_ApplicationEvidence(mscorlib::System::Security::Policy::Evidence  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "set_ApplicationEvidence", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ApplicationId
				mscorlib::System::ApplicationId  ApplicationSecurityInfo::get_ApplicationId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "get_ApplicationId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ApplicationId(__result__);
				}

				void ApplicationSecurityInfo::set_ApplicationId(mscorlib::System::ApplicationId  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "set_ApplicationId", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:DefaultRequestSet
				mscorlib::System::Security::PermissionSet  ApplicationSecurityInfo::get_DefaultRequestSet() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "get_DefaultRequestSet", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
				}

				void ApplicationSecurityInfo::set_DefaultRequestSet(mscorlib::System::Security::PermissionSet  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "set_DefaultRequestSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:DeploymentId
				mscorlib::System::ApplicationId  ApplicationSecurityInfo::get_DeploymentId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "get_DeploymentId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ApplicationId(__result__);
				}

				void ApplicationSecurityInfo::set_DeploymentId(mscorlib::System::ApplicationId  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 0, NULL, "set_DeploymentId", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
