#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_UrlMembershipCondition.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Boolean UrlMembershipCondition::Check(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "Check", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Policy::IMembershipCondition UrlMembershipCondition::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				mscorlib::System::Boolean UrlMembershipCondition::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void UrlMembershipCondition::FromXml(mscorlib::System::Security::SecurityElement e)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameters__[0] = (MonoObject*)e;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void UrlMembershipCondition::FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameter_types__[1] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)e;
						__parameters__[1] = (MonoObject*)level;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "FromXml", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 UrlMembershipCondition::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::String UrlMembershipCondition::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::SecurityElement UrlMembershipCondition::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::SecurityElement UrlMembershipCondition::ToXml(mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)level;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "ToXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Url
				mscorlib::System::String  UrlMembershipCondition::get_Url() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "get_Url", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void UrlMembershipCondition::set_Url(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "UrlMembershipCondition", 0, NULL, "set_Url", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
