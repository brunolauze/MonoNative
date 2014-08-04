#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CommonObjectSecurity.h>
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

				class AuthorizationRuleCollection;
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

				class NativeObjectSecurity
					: public mscorlib::System::Security::AccessControl::CommonObjectSecurity
				{
				public:
					NativeObjectSecurity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::CommonObjectSecurity(nativeTypeInfo)
					{
					};
				
					NativeObjectSecurity(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::CommonObjectSecurity(nativeObject)
					{
					};
				
					~NativeObjectSecurity()
					{
					};
				

					NativeObjectSecurity & operator=(NativeObjectSecurity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


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
					mscorlib::System::Type  get_AccessRightType();

					//	Get:AccessRuleType
					mscorlib::System::Type  get_AccessRuleType();

					//	Get:AuditRuleType
					mscorlib::System::Type  get_AuditRuleType();

					//	Get:AreAccessRulesCanonical
					mscorlib::System::Boolean  get_AreAccessRulesCanonical();

					//	Get:AreAccessRulesProtected
					mscorlib::System::Boolean  get_AreAccessRulesProtected();

					//	Get:AreAuditRulesCanonical
					mscorlib::System::Boolean  get_AreAuditRulesCanonical();

					//	Get:AreAuditRulesProtected
					mscorlib::System::Boolean  get_AreAuditRulesProtected();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
