// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Policy
// Name: GacMembershipCondition
// C++ Typed Name: mscorlib::System::Security::Policy::GacMembershipCondition


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_GacMembershipCondition.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Constructors Tests
				
				//GacMembershipCondition()
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Policy::GacMembershipCondition *value = new mscorlib::System::Security::Policy::GacMembershipCondition();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Check
				//		Signature: mscorlib::System::Security::Policy::Evidence evidence
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,Check_Test)
				{
					
					
				}

				// Method Copy
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,Copy_Test)
				{
					
					
				}

				// Method Equals
				//		Signature: mscorlib::System::Object o
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,Equals_Test)
				{
					
					
				}

				// Method FromXml
				//		Signature: mscorlib::System::Security::SecurityElement e
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,FromXml_1_Test)
				{
					
					
				}

				// Method FromXml
				//		Signature: mscorlib::System::Security::SecurityElement e, mscorlib::System::Security::Policy::PolicyLevel level
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,FromXml_2_Test)
				{
					
					
				}

				// Method GetHashCode
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,GetHashCode_Test)
				{
					
					
				}

				// Method ToString
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,ToString_Test)
				{
					
					
				}

				// Method ToXml
				//		Signature: 
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,ToXml_1_Test)
				{
					
					
				}

				// Method ToXml
				//		Signature: mscorlib::System::Security::Policy::PolicyLevel level
				TEST(mscorlib_System_Security_Policy_GacMembershipCondition_Fixture,ToXml_2_Test)
				{
					
					
				}


			}
		}
	}
}
