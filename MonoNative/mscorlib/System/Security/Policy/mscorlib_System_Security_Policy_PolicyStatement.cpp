#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatement.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				mscorlib::System::Security::Policy::PolicyStatement PolicyStatement::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Policy::PolicyStatement(__result__);
				}

				void PolicyStatement::FromXml(mscorlib::System::Security::SecurityElement et)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(et).name());
						__parameters__[0] = (MonoObject*)et;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PolicyStatement::FromXml(mscorlib::System::Security::SecurityElement et, mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(et).name());
						__parameter_types__[1] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)et;
						__parameters__[1] = (MonoObject*)level;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "FromXml", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::SecurityElement PolicyStatement::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::SecurityElement PolicyStatement::ToXml(mscorlib::System::Security::Policy::PolicyLevel level)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(level).name());
						__parameters__[0] = (MonoObject*)level;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "ToXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Boolean PolicyStatement::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 PolicyStatement::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:PermissionSet
				mscorlib::System::Security::PermissionSet  PolicyStatement::get_PermissionSet() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "get_PermissionSet", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
				}

				void PolicyStatement::set_PermissionSet(mscorlib::System::Security::PermissionSet  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "set_PermissionSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Attributes
				mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__  PolicyStatement::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void PolicyStatement::set_Attributes(mscorlib::System::Security::Policy::PolicyStatementAttribute::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "set_Attributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AttributeString
				mscorlib::System::String  PolicyStatement::get_AttributeString() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "PolicyStatement", 0, NULL, "get_AttributeString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
