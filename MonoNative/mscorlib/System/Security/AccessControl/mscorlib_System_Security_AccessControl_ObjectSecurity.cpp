#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ObjectSecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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
				mscorlib::System::Security::AccessControl::AccessRuleBase ObjectSecurityBase::AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(type);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "AccessRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AccessRuleBase(__result__);
				}

				mscorlib::System::Security::AccessControl::AuditRuleBase ObjectSecurityBase::AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(identityReference).name());
						__parameter_types__[1] = Global::GetType(typeid(accessMask).name());
						__parameter_types__[2] = Global::GetType(typeid(isInherited).name());
						__parameter_types__[3] = Global::GetType(typeid(inheritanceFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(propagationFlags).name());
						__parameter_types__[5] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)identityReference;
						__parameters__[1] = &accessMask;
						__parameters__[2] = reinterpret_cast<void*>(isInherited);
						__parameters__[3] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[4] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[5] = reinterpret_cast<void*>(flags);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "AuditRuleFactory", __native_object__, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::AccessControl::AuditRuleBase(__result__);
				}

				mscorlib::System::Security::Principal::IdentityReference ObjectSecurityBase::GetGroup(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "GetGroup", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}

				mscorlib::System::Security::Principal::IdentityReference ObjectSecurityBase::GetOwner(mscorlib::System::Type targetType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(targetType).name());
						__parameters__[0] = (MonoObject*)targetType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "GetOwner", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::IdentityReference(__result__);
				}

				std::vector<mscorlib::System::Byte*> ObjectSecurityBase::GetSecurityDescriptorBinaryForm()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "GetSecurityDescriptorBinaryForm", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::String ObjectSecurityBase::GetSecurityDescriptorSddlForm(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includeSections).name());
						__parameters__[0] = reinterpret_cast<void*>(includeSections);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "GetSecurityDescriptorSddlForm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean ObjectSecurityBase::IsSddlConversionSupported()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "IsSddlConversionSupported", NullMonoObject, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ObjectSecurityBase::ModifyAccessRule(mscorlib::System::Security::AccessControl::AccessControlModification::__ENUM__ modification, mscorlib::System::Security::AccessControl::AccessRuleBase rule, mscorlib::System::Boolean modified)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(modification).name());
						__parameter_types__[1] = Global::GetType(typeid(rule).name());
						__parameter_types__[2] = Global::GetType(typeid(modified).name());
						__parameters__[0] = reinterpret_cast<void*>(modification);
						__parameters__[1] = (MonoObject*)rule;
						__parameters__[2] = &modified;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "ModifyAccessRule", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ObjectSecurityBase::ModifyAuditRule(mscorlib::System::Security::AccessControl::AccessControlModification::__ENUM__ modification, mscorlib::System::Security::AccessControl::AuditRuleBase rule, mscorlib::System::Boolean modified)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(modification).name());
						__parameter_types__[1] = Global::GetType(typeid(rule).name());
						__parameter_types__[2] = Global::GetType(typeid(modified).name());
						__parameters__[0] = reinterpret_cast<void*>(modification);
						__parameters__[1] = (MonoObject*)rule;
						__parameters__[2] = &modified;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "ModifyAuditRule", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ObjectSecurityBase::PurgeAccessRules(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "PurgeAccessRules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::PurgeAuditRules(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "PurgeAuditRules", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetAccessRuleProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(isProtected).name());
						__parameter_types__[1] = Global::GetType(typeid(preserveInheritance).name());
						__parameters__[0] = reinterpret_cast<void*>(isProtected);
						__parameters__[1] = reinterpret_cast<void*>(preserveInheritance);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetAccessRuleProtection", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetAuditRuleProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(isProtected).name());
						__parameter_types__[1] = Global::GetType(typeid(preserveInheritance).name());
						__parameters__[0] = reinterpret_cast<void*>(isProtected);
						__parameters__[1] = reinterpret_cast<void*>(preserveInheritance);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetAuditRuleProtection", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetGroup(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetGroup", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetOwner(mscorlib::System::Security::Principal::IdentityReference identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetOwner", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetSecurityDescriptorBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetSecurityDescriptorBinaryForm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetSecurityDescriptorBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryForm).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(includeSections).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = reinterpret_cast<void*>(includeSections);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetSecurityDescriptorBinaryForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetSecurityDescriptorSddlForm(mscorlib::System::String sddlForm)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sddlForm).name());
						__parameters__[0] = (MonoObject*)sddlForm;
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetSecurityDescriptorSddlForm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ObjectSecurityBase::SetSecurityDescriptorSddlForm(mscorlib::System::String sddlForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(sddlForm).name());
						__parameter_types__[1] = Global::GetType(typeid(includeSections).name());
						__parameters__[0] = (MonoObject*)sddlForm;
						__parameters__[1] = reinterpret_cast<void*>(includeSections);
						Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "SetSecurityDescriptorSddlForm", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:AccessRightType
				mscorlib::System::Type  ObjectSecurityBase::get_AccessRightType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRightType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AccessRuleType
				mscorlib::System::Type  ObjectSecurityBase::get_AccessRuleType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AccessRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AuditRuleType
				mscorlib::System::Type  ObjectSecurityBase::get_AuditRuleType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AuditRuleType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:AreAccessRulesCanonical
				mscorlib::System::Boolean  ObjectSecurityBase::get_AreAccessRulesCanonical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAccessRulesProtected
				mscorlib::System::Boolean  ObjectSecurityBase::get_AreAccessRulesProtected()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAccessRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesCanonical
				mscorlib::System::Boolean  ObjectSecurityBase::get_AreAuditRulesCanonical()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesCanonical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:AreAuditRulesProtected
				mscorlib::System::Boolean  ObjectSecurityBase::get_AreAuditRulesProtected()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.AccessControl", "ObjectSecurity", 0, NULL, "get_AreAuditRulesProtected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
