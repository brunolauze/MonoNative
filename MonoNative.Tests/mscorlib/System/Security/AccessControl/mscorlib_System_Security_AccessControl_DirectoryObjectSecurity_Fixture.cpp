// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: DirectoryObjectSecurity
// C++ Typed Name: mscorlib::System::Security::AccessControl::DirectoryObjectSecurity


#include <gtest/gtest.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DirectoryObjectSecurity.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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

				//Public Methods Tests
				
				// Method AccessRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,AccessRuleFactory_Test)
				{
					
					
				}

				// Method AuditRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags, mscorlib::System::Guid objectType, mscorlib::System::Guid inheritedObjectType
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,AuditRuleFactory_Test)
				{
					
					
				}

				// Method GetAccessRules
				//		Signature: mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,GetAccessRules_Test)
				{
					
					
				}

				// Method GetAuditRules
				//		Signature: mscorlib::System::Boolean includeExplicit, mscorlib::System::Boolean includeInherited, mscorlib::System::Type targetType
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,GetAuditRules_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property AccessRightType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AccessRightType_Test)
				{
					
					
				}

				// Property AccessRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AccessRuleType_Test)
				{
					
					
				}

				// Property AuditRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AuditRuleType_Test)
				{
					
					
				}

				// Property AreAccessRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AreAccessRulesCanonical_Test)
				{
					
					
				}

				// Property AreAccessRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AreAccessRulesProtected_Test)
				{
					
					
				}

				// Property AreAuditRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AreAuditRulesCanonical_Test)
				{
					
					
				}

				// Property AreAuditRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectoryObjectSecurity_Fixture,get_AreAuditRulesProtected_Test)
				{
					
					
				}


			}
		}
	}
}
