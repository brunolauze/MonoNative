// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Principal
// Name: WindowsIdentity
// C++ Typed Name: mscorlib::System::Security::Principal::WindowsIdentity


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsIdentity.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsImpersonationContext.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReferenceCollection.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_Claim.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Constructors Tests
				
				//WindowsIdentity(mscorlib::System::IntPtr userToken)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_1)
				{
					
					
					
				}
				
				//WindowsIdentity(mscorlib::System::IntPtr userToken, mscorlib::System::String type)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_2)
				{
					
					
					
				}
				
				//WindowsIdentity(mscorlib::System::IntPtr userToken, mscorlib::System::String type, mscorlib::System::Security::Principal::WindowsAccountType::__ENUM__ acctType)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_3)
				{
					
					
					
				}
				
				//WindowsIdentity(mscorlib::System::IntPtr userToken, mscorlib::System::String type, mscorlib::System::Security::Principal::WindowsAccountType::__ENUM__ acctType, mscorlib::System::Boolean isAuthenticated)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_4)
				{
					
					
					
				}
				
				//WindowsIdentity(mscorlib::System::String sUserPrincipalName)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_5)
				{
					
					
					
				}
				
				//WindowsIdentity(mscorlib::System::String sUserPrincipalName, mscorlib::System::String type)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_6)
				{
					
					
					
				}
				
				//WindowsIdentity(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Constructor_7)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method Dispose
				//		Signature: 
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Dispose_Test)
				{
					
					
				}

				// Method Impersonate
				//		Signature: 
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Impersonate_Test)
				{
					
					
				}

				//Public Static Methods Tests
				
				// Method GetAnonymous
				//		Signature: 
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,GetAnonymous_StaticTest)
				{
					
					
				}

				// Method GetCurrent
				//		Signature: 
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,GetCurrent_1_StaticTest)
				{
					
					
				}

				// Method GetCurrent
				//		Signature: mscorlib::System::Boolean ifImpersonating
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,GetCurrent_2_StaticTest)
				{
					
					
				}

				// Method GetCurrent
				//		Signature: mscorlib::System::Security::Principal::TokenAccessLevels::__ENUM__ desiredAccess
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,GetCurrent_3_StaticTest)
				{
					
					
				}

				// Method Impersonate
				//		Signature: mscorlib::System::IntPtr userToken
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,Impersonate_StaticTest)
				{
					
					
				}

				//Public Properties Tests
				
				// Property AuthenticationType
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_AuthenticationType_Test)
				{
					
					
				}

				// Property IsAnonymous
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_IsAnonymous_Test)
				{
					
					
				}

				// Property IsAuthenticated
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_IsAuthenticated_Test)
				{
					
					
				}

				// Property IsGuest
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_IsGuest_Test)
				{
					
					
				}

				// Property IsSystem
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_IsSystem_Test)
				{
					
					
				}

				// Property Name
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Name_Test)
				{
					
					
				}

				// Property Token
				//		Return Type: mscorlib::System::IntPtr
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Token_Test)
				{
					
					
				}

				// Property Groups
				//		Return Type: mscorlib::System::Security::Principal::IdentityReferenceCollection
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Groups_Test)
				{
					
					
				}

				// Property ImpersonationLevel
				//		Return Type: mscorlib::System::Security::Principal::TokenImpersonationLevel::__ENUM__
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_ImpersonationLevel_Test)
				{
					
					
				}

				// Property Owner
				//		Return Type: mscorlib::System::Security::Principal::SecurityIdentifier
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Owner_Test)
				{
					
					
				}

				// Property User
				//		Return Type: mscorlib::System::Security::Principal::SecurityIdentifier
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_User_Test)
				{
					
					
				}

				// Property Actor
				//		Return Type: mscorlib::System::Security::Claims::ClaimsIdentity
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Actor_Test)
				{
					
					
				}

				// Property Actor
				//		Return Type: mscorlib::System::Security::Claims::ClaimsIdentity
				//			Property Set Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,set_Actor_Test)
				{
					
					
				}

				// Property BootstrapContext
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_BootstrapContext_Test)
				{
					
					
				}

				// Property BootstrapContext
				//		Return Type: mscorlib::System::Object
				//			Property Set Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,set_BootstrapContext_Test)
				{
					
					
				}

				// Property Label
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Label_Test)
				{
					
					
				}

				// Property Label
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,set_Label_Test)
				{
					
					
				}

				// Property NameClaimType
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_NameClaimType_Test)
				{
					
					
				}

				// Property NameClaimType
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,set_NameClaimType_Test)
				{
					
					
				}

				// Property RoleClaimType
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_RoleClaimType_Test)
				{
					
					
				}

				// Property RoleClaimType
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,set_RoleClaimType_Test)
				{
					
					
				}

				// Property Claims
				//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>
				//			Property Get Method
				TEST(mscorlib_System_Security_Principal_WindowsIdentity_Fixture,get_Claims_Test)
				{
					
					
				}


			}
		}
	}
}
