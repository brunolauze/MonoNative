// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Policy
// Name: ApplicationTrust
// C++ Typed Name: mscorlib::System::Security::Policy::ApplicationTrust


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_StrongName.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyStatement.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Constructors Tests
				
				//ApplicationTrust()
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Policy::ApplicationTrust *value = new mscorlib::System::Security::Policy::ApplicationTrust();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ApplicationTrust(mscorlib::System::ApplicationIdentity applicationIdentity)
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Policy::ApplicationTrust *value = new mscorlib::System::Security::Policy::ApplicationTrust();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ApplicationTrust(mscorlib::System::Security::PermissionSet defaultGrantSet, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Policy::StrongName> fullTrustAssemblies)
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Policy::ApplicationTrust *value = new mscorlib::System::Security::Policy::ApplicationTrust();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method FromXml
				//		Signature: mscorlib::System::Security::SecurityElement element
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,FromXml_Test)
				{
					
					
				}

				// Method ToXml
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,ToXml_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property ApplicationIdentity
				//		Return Type: mscorlib::System::ApplicationIdentity
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,get_ApplicationIdentity_Test)
				{
					
					
				}

				// Property ApplicationIdentity
				//		Return Type: mscorlib::System::ApplicationIdentity
				//			Property Set Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,set_ApplicationIdentity_Test)
				{
					
					
				}

				// Property DefaultGrantSet
				//		Return Type: mscorlib::System::Security::Policy::PolicyStatement
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,get_DefaultGrantSet_Test)
				{
					
					
				}

				// Property DefaultGrantSet
				//		Return Type: mscorlib::System::Security::Policy::PolicyStatement
				//			Property Set Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,set_DefaultGrantSet_Test)
				{
					
					
				}

				// Property ExtraInfo
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,get_ExtraInfo_Test)
				{
					
					
				}

				// Property ExtraInfo
				//		Return Type: mscorlib::System::Object
				//			Property Set Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,set_ExtraInfo_Test)
				{
					
					
				}

				// Property IsApplicationTrustedToRun
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,get_IsApplicationTrustedToRun_Test)
				{
					
					
				}

				// Property IsApplicationTrustedToRun
				//		Return Type: mscorlib::System::Boolean
				//			Property Set Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,set_IsApplicationTrustedToRun_Test)
				{
					
					
				}

				// Property Persist
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,get_Persist_Test)
				{
					
					
				}

				// Property Persist
				//		Return Type: mscorlib::System::Boolean
				//			Property Set Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,set_Persist_Test)
				{
					
					
				}

				// Property FullTrustAssemblies
				//		Return Type: mscorlib::System::Collections::Generic::IList<mscorlib::System::Security::Policy::StrongName>
				//			Property Get Method
				TEST(mscorlib_System_Security_Policy_ApplicationTrust_Fixture,get_FullTrustAssemblies_Test)
				{
					
					
				}


			}
		}
	}
}
