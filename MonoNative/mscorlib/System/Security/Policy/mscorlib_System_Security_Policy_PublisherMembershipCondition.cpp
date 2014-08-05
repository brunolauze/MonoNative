#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PublisherMembershipCondition.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				mscorlib::System::Boolean PublisherMembershipCondition::Check(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "Check", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Policy::IMembershipCondition PublisherMembershipCondition::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::IMembershipCondition(__result__);
				}

				mscorlib::System::Boolean PublisherMembershipCondition::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void PublisherMembershipCondition::FromXml(mscorlib::System::Security::SecurityElement e)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameters__[0] = (MonoObject*)e;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PublisherMembershipCondition::FromXml(mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(e).name());
						__parameter_types__[1] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)e;
						__parameters__[1] = (MonoObject*)level;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "FromXml", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Int32 PublisherMembershipCondition::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::String PublisherMembershipCondition::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::SecurityElement PublisherMembershipCondition::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::SecurityElement PublisherMembershipCondition::ToXml(mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)level;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "ToXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Certificate
				mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  PublisherMembershipCondition::get_Certificate() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "get_Certificate", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate(__result__);
				}

				void PublisherMembershipCondition::set_Certificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "PublisherMembershipCondition", 0, NULL, "set_Certificate", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
