#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CommonSecurityDescriptor.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Public Methods
				void CommonSecurityDescriptor::PurgeAccessControl(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "PurgeAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CommonSecurityDescriptor::PurgeAudit(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "PurgeAudit", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void CommonSecurityDescriptor::SetDiscretionaryAclProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(isProtected).name());
						__parameter_types__[1] = Global::GetType(typeid(preserveInheritance).name());
						__parameters__[0] = reinterpret_cast<void*>(isProtected);
						__parameters__[1] = reinterpret_cast<void*>(preserveInheritance);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "SetDiscretionaryAclProtection", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void CommonSecurityDescriptor::SetSystemAclProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(isProtected).name());
						__parameter_types__[1] = Global::GetType(typeid(preserveInheritance).name());
						__parameters__[0] = reinterpret_cast<void*>(isProtected);
						__parameters__[1] = reinterpret_cast<void*>(preserveInheritance);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "SetSystemAclProtection", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:ControlFlags
				mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  CommonSecurityDescriptor::get_ControlFlags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_ControlFlags", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__>(*(mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get/Set:DiscretionaryAcl
				mscorlib::System::Security::AccessControl::DiscretionaryAcl  CommonSecurityDescriptor::get_DiscretionaryAcl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_DiscretionaryAcl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::DiscretionaryAcl(__result__);
				}

				void CommonSecurityDescriptor::set_DiscretionaryAcl(mscorlib::System::Security::AccessControl::DiscretionaryAcl  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "set_DiscretionaryAcl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Group
				mscorlib::System::Security::Principal::SecurityIdentifier  CommonSecurityDescriptor::get_Group() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_Group", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void CommonSecurityDescriptor::set_Group(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "set_Group", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:IsContainer
				mscorlib::System::Boolean  CommonSecurityDescriptor::get_IsContainer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_IsContainer", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsDiscretionaryAclCanonical
				mscorlib::System::Boolean  CommonSecurityDescriptor::get_IsDiscretionaryAclCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_IsDiscretionaryAclCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsDS
				mscorlib::System::Boolean  CommonSecurityDescriptor::get_IsDS() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_IsDS", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSystemAclCanonical
				mscorlib::System::Boolean  CommonSecurityDescriptor::get_IsSystemAclCanonical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_IsSystemAclCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get/Set:Owner
				mscorlib::System::Security::Principal::SecurityIdentifier  CommonSecurityDescriptor::get_Owner() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_Owner", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}

				void CommonSecurityDescriptor::set_Owner(mscorlib::System::Security::Principal::SecurityIdentifier  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "set_Owner", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SystemAcl
				mscorlib::System::Security::AccessControl::SystemAcl  CommonSecurityDescriptor::get_SystemAcl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "get_SystemAcl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::SystemAcl(__result__);
				}

				void CommonSecurityDescriptor::set_SystemAcl(mscorlib::System::Security::AccessControl::SystemAcl  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 0, NULL, "set_SystemAcl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:BinaryLength
				mscorlib::System::Int32  CommonSecurityDescriptor::get_BinaryLength() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "GenericSecurityDescriptor", 0, NULL, "get_BinaryLength", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
