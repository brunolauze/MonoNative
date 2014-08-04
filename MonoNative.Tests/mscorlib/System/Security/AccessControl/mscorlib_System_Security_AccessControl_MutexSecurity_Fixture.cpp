// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: MutexSecurity
// C++ Typed Name: mscorlib::System::Security::AccessControl::MutexSecurity


#include <gtest/gtest.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_MutexSecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_MutexAccessRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_MutexAuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRuleCollection.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				//Constructors Tests
				
				//MutexSecurity()
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::AccessControl::MutexSecurity *value = new mscorlib::System::Security::AccessControl::MutexSecurity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//MutexSecurity(mscorlib::System::String name, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::AccessControl::MutexSecurity *value = new mscorlib::System::Security::AccessControl::MutexSecurity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method AccessRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,AccessRuleFactory_Test)
				{
					
					
				}

				// Method AddAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,AddAccessRule_Test)
				{
					
					
				}

				// Method RemoveAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,RemoveAccessRule_Test)
				{
					
					
				}

				// Method RemoveAccessRuleAll
				//		Signature: mscorlib::System::Security::AccessControl::MutexAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,RemoveAccessRuleAll_Test)
				{
					
					
				}

				// Method RemoveAccessRuleSpecific
				//		Signature: mscorlib::System::Security::AccessControl::MutexAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,RemoveAccessRuleSpecific_Test)
				{
					
					
				}

				// Method ResetAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,ResetAccessRule_Test)
				{
					
					
				}

				// Method SetAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAccessRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,SetAccessRule_Test)
				{
					
					
				}

				// Method AuditRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,AuditRuleFactory_Test)
				{
					
					
				}

				// Method AddAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,AddAuditRule_Test)
				{
					
					
				}

				// Method RemoveAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,RemoveAuditRule_Test)
				{
					
					
				}

				// Method RemoveAuditRuleAll
				//		Signature: mscorlib::System::Security::AccessControl::MutexAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,RemoveAuditRuleAll_Test)
				{
					
					
				}

				// Method RemoveAuditRuleSpecific
				//		Signature: mscorlib::System::Security::AccessControl::MutexAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,RemoveAuditRuleSpecific_Test)
				{
					
					
				}

				// Method SetAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::MutexAuditRule rule
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,SetAuditRule_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property AccessRightType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AccessRightType_Test)
				{
					
					
				}

				// Property AccessRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AccessRuleType_Test)
				{
					
					
				}

				// Property AuditRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AuditRuleType_Test)
				{
					
					
				}

				// Property AreAccessRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AreAccessRulesCanonical_Test)
				{
					
					
				}

				// Property AreAccessRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AreAccessRulesProtected_Test)
				{
					
					
				}

				// Property AreAuditRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AreAuditRulesCanonical_Test)
				{
					
					
				}

				// Property AreAuditRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_MutexSecurity_Fixture,get_AreAuditRulesProtected_Test)
				{
					
					
				}


			}
		}
	}
}
