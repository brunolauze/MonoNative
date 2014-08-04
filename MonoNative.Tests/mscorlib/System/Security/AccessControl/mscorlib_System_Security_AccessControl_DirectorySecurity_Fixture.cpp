// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.AccessControl
// Name: DirectorySecurity
// C++ Typed Name: mscorlib::System::Security::AccessControl::DirectorySecurity


#include <gtest/gtest.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DirectorySecurity.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSystemAccessRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSystemAuditRule.h>
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
				
				//DirectorySecurity()
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::AccessControl::DirectorySecurity *value = new mscorlib::System::Security::AccessControl::DirectorySecurity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//DirectorySecurity(mscorlib::System::String name, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::AccessControl::DirectorySecurity *value = new mscorlib::System::Security::AccessControl::DirectorySecurity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property AccessRightType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AccessRightType_Test)
				{
					
					
				}

				// Property AccessRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AccessRuleType_Test)
				{
					
					
				}

				// Property AuditRuleType
				//		Return Type: mscorlib::System::Type
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AuditRuleType_Test)
				{
					
					
				}

				// Property AreAccessRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AreAccessRulesCanonical_Test)
				{
					
					
				}

				// Property AreAccessRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AreAccessRulesProtected_Test)
				{
					
					
				}

				// Property AreAuditRulesCanonical
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AreAuditRulesCanonical_Test)
				{
					
					
				}

				// Property AreAuditRulesProtected
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_AccessControl_DirectorySecurity_Fixture,get_AreAuditRulesProtected_Test)
				{
					
					
				}


			}
		}
	}
}
