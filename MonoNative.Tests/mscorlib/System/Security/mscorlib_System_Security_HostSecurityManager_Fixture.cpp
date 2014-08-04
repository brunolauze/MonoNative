// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: HostSecurityManager
// C++ Typed Name: mscorlib::System::Security::HostSecurityManager


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_HostSecurityManager.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_TrustManagerContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//HostSecurityManager()
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::HostSecurityManager *value = new mscorlib::System::Security::HostSecurityManager();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method DetermineApplicationTrust
			//		Signature: mscorlib::System::Security::Policy::Evidence applicationEvidence, mscorlib::System::Security::Policy::Evidence activatorEvidence, mscorlib::System::Security::Policy::TrustManagerContext context
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,DetermineApplicationTrust_Test)
			{
				
				
			}

			// Method ProvideAppDomainEvidence
			//		Signature: mscorlib::System::Security::Policy::Evidence inputEvidence
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,ProvideAppDomainEvidence_Test)
			{
				
				
			}

			// Method ProvideAssemblyEvidence
			//		Signature: mscorlib::System::Reflection::Assembly loadedAssembly, mscorlib::System::Security::Policy::Evidence inputEvidence
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,ProvideAssemblyEvidence_Test)
			{
				
				
			}

			// Method ResolvePolicy
			//		Signature: mscorlib::System::Security::Policy::Evidence evidence
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,ResolvePolicy_Test)
			{
				
				
			}

			//Public Properties Tests
			
			// Property DomainPolicy
			//		Return Type: mscorlib::System::Security::Policy::PolicyLevel
			//			Property Get Method
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,get_DomainPolicy_Test)
			{
				
				
			}

			// Property Flags
			//		Return Type: mscorlib::System::Security::HostSecurityManagerOptions::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Security_HostSecurityManager_Fixture,get_Flags_Test)
			{
				
				
			}


		}
	}
}
