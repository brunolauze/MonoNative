#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlModification.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AccessRuleBase;
				class AuditRuleBase;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IdentityReference;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class ObjectSecurityBase
					: public mscorlib::System::Object
				{
				public:
					ObjectSecurityBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ObjectSecurityBase(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ObjectSecurityBase()
					{
					};
				

					ObjectSecurityBase & operator=(ObjectSecurityBase &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ObjectSecurityBase &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::AccessControl::AccessRuleBase  AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type);
					virtual mscorlib::System::Security::AccessControl::AuditRuleBase  AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags);
					mscorlib::System::Security::Principal::IdentityReference  GetGroup(mscorlib::System::Type targetType);
					mscorlib::System::Security::Principal::IdentityReference  GetOwner(mscorlib::System::Type targetType);
					std::vector<mscorlib::System::Byte*>  GetSecurityDescriptorBinaryForm();
					mscorlib::System::String  GetSecurityDescriptorSddlForm(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
					static mscorlib::System::Boolean  IsSddlConversionSupported();
					virtual mscorlib::System::Boolean  ModifyAccessRule(mscorlib::System::Security::AccessControl::AccessControlModification::__ENUM__ modification, mscorlib::System::Security::AccessControl::AccessRuleBase rule, mscorlib::System::Boolean modified);
					virtual mscorlib::System::Boolean  ModifyAuditRule(mscorlib::System::Security::AccessControl::AccessControlModification::__ENUM__ modification, mscorlib::System::Security::AccessControl::AuditRuleBase rule, mscorlib::System::Boolean modified);
					virtual void  PurgeAccessRules(mscorlib::System::Security::Principal::IdentityReference identity);
					virtual void  PurgeAuditRules(mscorlib::System::Security::Principal::IdentityReference identity);
					void  SetAccessRuleProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance);
					void  SetAuditRuleProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance);
					void  SetGroup(mscorlib::System::Security::Principal::IdentityReference identity);
					void  SetOwner(mscorlib::System::Security::Principal::IdentityReference identity);
					void  SetSecurityDescriptorBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm);
					void  SetSecurityDescriptorBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
					void  SetSecurityDescriptorSddlForm(mscorlib::System::String sddlForm);
					void  SetSecurityDescriptorSddlForm(const char *sddlForm);
					void  SetSecurityDescriptorSddlForm(mscorlib::System::String sddlForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
					void  SetSecurityDescriptorSddlForm(const char *sddlForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AccessRightType)) mscorlib::System::Type  AccessRightType;
					__declspec(property(get=get_AccessRuleType)) mscorlib::System::Type  AccessRuleType;
					__declspec(property(get=get_AuditRuleType)) mscorlib::System::Type  AuditRuleType;
					__declspec(property(get=get_AreAccessRulesCanonical)) mscorlib::System::Boolean  AreAccessRulesCanonical;
					__declspec(property(get=get_AreAccessRulesProtected)) mscorlib::System::Boolean  AreAccessRulesProtected;
					__declspec(property(get=get_AreAuditRulesCanonical)) mscorlib::System::Boolean  AreAuditRulesCanonical;
					__declspec(property(get=get_AreAuditRulesProtected)) mscorlib::System::Boolean  AreAuditRulesProtected;

					//Get Set Properties Methods
					//	Get:AccessRightType
					mscorlib::System::Type  get_AccessRightType() const;

					//	Get:AccessRuleType
					mscorlib::System::Type  get_AccessRuleType() const;

					//	Get:AuditRuleType
					mscorlib::System::Type  get_AuditRuleType() const;

					//	Get:AreAccessRulesCanonical
					mscorlib::System::Boolean  get_AreAccessRulesCanonical() const;

					//	Get:AreAccessRulesProtected
					mscorlib::System::Boolean  get_AreAccessRulesProtected() const;

					//	Get:AreAuditRulesCanonical
					mscorlib::System::Boolean  get_AreAuditRulesCanonical() const;

					//	Get:AreAuditRulesProtected
					mscorlib::System::Boolean  get_AreAuditRulesProtected() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
