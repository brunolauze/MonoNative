#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_DIRECTORYOBJECTSECURITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_DIRECTORYOBJECTSECURITY_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ObjectSecurity.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlModification.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
				class AuthorizationRuleCollection;
				

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

		class Guid;
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

				class DirectoryObjectSecurity
					: public mscorlib::System::Security::AccessControl::ObjectSecurityBase
				{
				public:
					DirectoryObjectSecurity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::ObjectSecurityBase(nativeTypeInfo)
					{
					};
				
					DirectoryObjectSecurity(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::ObjectSecurityBase(nativeObject)
					{
					};
				
					~DirectoryObjectSecurity()
					{
					};
				

					DirectoryObjectSecurity & operator=(DirectoryObjectSecurity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::AccessControl::AccessRuleBase  AccessRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType);
					virtual mscorlib::System::Security::AccessControl::AuditRuleBase  AuditRuleFactory(mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType);
					mscorlib::System::Security::AccessControl::AuthorizationRuleCollection  GetAccessRules(mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType);
					mscorlib::System::Security::AccessControl::AuthorizationRuleCollection  GetAuditRules(mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType);
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
