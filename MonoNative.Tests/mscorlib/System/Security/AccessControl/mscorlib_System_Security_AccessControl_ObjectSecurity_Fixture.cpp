// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: ObjectSecurity
// C++ Typed Name: mscorlib::System::Security::AccessControl::ObjectSecurityBase


#include <gtest/gtest.h>
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

				//Public Methods Tests
				
				// Method AccessRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,AccessRuleFactory_Test)
				{
					
					
				}

				// Method AuditRuleFactory
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identityReference, mscorlib::System::Int32 accessMask, mscorlib::System::Boolean isInherited, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,AuditRuleFactory_Test)
				{
					
					
				}

				// Method GetGroup
				//		Signature: mscorlib::System::Type targetType
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,GetGroup_Test)
				{
					
					
				}

				// Method GetOwner
				//		Signature: mscorlib::System::Type targetType
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,GetOwner_Test)
				{
					
					
				}

				// Method GetSecurityDescriptorBinaryForm
				//		Signature: 
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,GetSecurityDescriptorBinaryForm_Test)
				{
					
					
				}

				// Method GetSecurityDescriptorSddlForm
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,GetSecurityDescriptorSddlForm_Test)
				{
					
					
				}

				// Method ModifyAccessRule
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlModification::__ENUM__ modification, mscorlib::System::Security::AccessControl::AccessRuleBase rule, mscorlib::System::Boolean modified
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,ModifyAccessRule_Test)
				{
					
					
				}

				// Method ModifyAuditRule
				//		Signature: mscorlib::System::Security::AccessControl::AccessControlModification::__ENUM__ modification, mscorlib::System::Security::AccessControl::AuditRuleBase rule, mscorlib::System::Boolean modified
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,ModifyAuditRule_Test)
				{
					
					
				}

				// Method PurgeAccessRules
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,PurgeAccessRules_Test)
				{
					
					
				}

				// Method PurgeAuditRules
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,PurgeAuditRules_Test)
				{
					
					
				}

				// Method SetAccessRuleProtection
				//		Signature: mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetAccessRuleProtection_Test)
				{
					
					
				}

				// Method SetAuditRuleProtection
				//		Signature: mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetAuditRuleProtection_Test)
				{
					
					
				}

				// Method SetGroup
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetGroup_Test)
				{
					
					
				}

				// Method SetOwner
				//		Signature: mscorlib::System::Security::Principal::IdentityReference identity
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetOwner_Test)
				{
					
					
				}

				// Method SetSecurityDescriptorBinaryForm
				//		Signature: std::vector<mscorlib::System::Byte*> binaryForm
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetSecurityDescriptorBinaryForm_1_Test)
				{
					
					
				}

				// Method SetSecurityDescriptorBinaryForm
				//		Signature: std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetSecurityDescriptorBinaryForm_2_Test)
				{
					
					
				}

				// Method SetSecurityDescriptorSddlForm
				//		Signature: mscorlib::System::String sddlForm
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetSecurityDescriptorSddlForm_1_Test)
				{
					
					
				}

				// Method SetSecurityDescriptorSddlForm
				//		Signature: mscorlib::System::String sddlForm, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,SetSecurityDescriptorSddlForm_2_Test)
				{
					
					
				}

				//Public Static Methods Tests
				
				// Method IsSddlConversionSupported
				//		Signature: 
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,IsSddlConversionSupported_StaticTest)
				{
					
					
				}

				//Public Properties Tests
				
				// Property AccessRightType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AccessRightType_Test)
				{
					
					
				}

				// Property AccessRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AccessRuleType_Test)
				{
					
					
				}

				// Property AuditRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AuditRuleType_Test)
				{
					
					
				}

				// Property AreAccessRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AreAccessRulesCanonical_Test)
				{
					
					
				}

				// Property AreAccessRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AreAccessRulesProtected_Test)
				{
					
					
				}

				// Property AreAuditRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AreAuditRulesCanonical_Test)
				{
					
					
				}

				// Property AreAuditRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_ObjectSecurity_Fixture,get_AreAuditRulesProtected_Test)
				{
					
					
				}


			}
		}
	}
}
