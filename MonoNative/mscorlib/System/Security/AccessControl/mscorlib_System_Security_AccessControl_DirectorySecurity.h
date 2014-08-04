#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_DIRECTORYSECURITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_DIRECTORYSECURITY_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSystemSecurity.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlModification.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		

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
				class FileSystemAccessRule;
				class AuditRuleBase;
				class FileSystemAuditRule;
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
		namespace Security
		{
			namespace AccessControl
			{

				class DirectorySecurity
					: public mscorlib::System::Security::AccessControl::FileSystemSecurity
				{
				public:
					DirectorySecurity()
					: mscorlib::System::Security::AccessControl::FileSystemSecurity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.DirectorySecurity"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "DirectorySecurity");
					};
				
					DirectorySecurity(mscorlib::System::String name, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
					: mscorlib::System::Security::AccessControl::FileSystemSecurity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.DirectorySecurity"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlSections");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(includeSections);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "DirectorySecurity", 2, __parameter_types__, __parameters__);
					};
				
					DirectorySecurity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::FileSystemSecurity(nativeTypeInfo)
					{
					};
				
					DirectorySecurity(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::FileSystemSecurity(nativeObject)
					{
					};
				
					~DirectorySecurity()
					{
					};
				

					DirectorySecurity & operator=(DirectorySecurity &value) { __native_object__ = value.GetNativeObject(); return value; };
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
