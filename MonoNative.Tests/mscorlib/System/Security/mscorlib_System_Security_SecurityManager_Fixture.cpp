// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: SecurityManager
// C++ Typed Name: mscorlib::System::Security::SecurityManager


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityManager.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ArrayList.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods Tests
			
			//Public Static Methods Tests
			
			// Method GetZoneAndOrigin
			//		Signature: mscorlib::System::Collections::ArrayList zone, mscorlib::System::Collections::ArrayList origin
			TEST(mscorlib_System_Security_SecurityManager_Fixture,GetZoneAndOrigin_StaticTest)
			{
				
				
			}

			// Method IsGranted
			//		Signature: mscorlib::System::Security::IPermission perm
			TEST(mscorlib_System_Security_SecurityManager_Fixture,IsGranted_StaticTest)
			{
				
				
			}

			// Method LoadPolicyLevelFromFile
			//		Signature: mscorlib::System::String path, mscorlib::System::Security::PolicyLevelType::__ENUM__ type
			TEST(mscorlib_System_Security_SecurityManager_Fixture,LoadPolicyLevelFromFile_StaticTest)
			{
				
				
			}

			// Method LoadPolicyLevelFromString
			//		Signature: mscorlib::System::String str, mscorlib::System::Security::PolicyLevelType::__ENUM__ type
			TEST(mscorlib_System_Security_SecurityManager_Fixture,LoadPolicyLevelFromString_StaticTest)
			{
				
				
			}

			// Method PolicyHierarchy
			//		Signature: 
			TEST(mscorlib_System_Security_SecurityManager_Fixture,PolicyHierarchy_StaticTest)
			{
				
				
			}

			// Method ResolvePolicy
			//		Signature: mscorlib::System::Security::Policy::Evidence evidence
			TEST(mscorlib_System_Security_SecurityManager_Fixture,ResolvePolicy_1_StaticTest)
			{
				
				
			}

			// Method ResolvePolicy
			//		Signature: std::vector<mscorlib::System::Security::Policy::Evidence*> evidences
			TEST(mscorlib_System_Security_SecurityManager_Fixture,ResolvePolicy_2_StaticTest)
			{
				
				
			}

			// Method ResolveSystemPolicy
			//		Signature: mscorlib::System::Security::Policy::Evidence evidence
			TEST(mscorlib_System_Security_SecurityManager_Fixture,ResolveSystemPolicy_StaticTest)
			{
				
				
			}

			// Method ResolvePolicy
			//		Signature: mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet reqdPset, mscorlib::System::Security::PermissionSet optPset, mscorlib::System::Security::PermissionSet denyPset, mscorlib::System::Security::PermissionSet denied
			TEST(mscorlib_System_Security_SecurityManager_Fixture,ResolvePolicy_3_StaticTest)
			{
				
				
			}

			// Method ResolvePolicyGroups
			//		Signature: mscorlib::System::Security::Policy::Evidence evidence
			TEST(mscorlib_System_Security_SecurityManager_Fixture,ResolvePolicyGroups_StaticTest)
			{
				
				
			}

			// Method SavePolicy
			//		Signature: 
			TEST(mscorlib_System_Security_SecurityManager_Fixture,SavePolicy_StaticTest)
			{
				
				
			}

			// Method SavePolicyLevel
			//		Signature: mscorlib::System::Security::Policy::PolicyLevel level
			TEST(mscorlib_System_Security_SecurityManager_Fixture,SavePolicyLevel_StaticTest)
			{
				
				
			}

			// Method GetStandardSandbox
			//		Signature: mscorlib::System::Security::Policy::Evidence evidence
			TEST(mscorlib_System_Security_SecurityManager_Fixture,GetStandardSandbox_StaticTest)
			{
				
				
			}

			// Method CurrentThreadRequiresSecurityContextCapture
			//		Signature: 
			TEST(mscorlib_System_Security_SecurityManager_Fixture,CurrentThreadRequiresSecurityContextCapture_StaticTest)
			{
				
				
			}

			// Property CheckExecutionRights
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityManager_Fixture,get_CheckExecutionRights_Test)
			{
				
				
			}

			// Property CheckExecutionRights
			//		Return Type: mscorlib::System::Boolean
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityManager_Fixture,set_CheckExecutionRights_Test)
			{
				
				
			}

			// Property SecurityEnabled
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityManager_Fixture,get_SecurityEnabled_Test)
			{
				
				
			}

			// Property SecurityEnabled
			//		Return Type: mscorlib::System::Boolean
			//			Property Set Method
			TEST(mscorlib_System_Security_SecurityManager_Fixture,set_SecurityEnabled_Test)
			{
				
				
			}


		}
	}
}
