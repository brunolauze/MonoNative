// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Claims
// Name: ClaimsIdentity
// C++ Typed Name: mscorlib::System::Security::Claims::ClaimsIdentity


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsIdentity.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_Claim.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Claims
			{

				//Constructors Tests
				
				//ClaimsIdentity()
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::String authenticationType)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims, mscorlib::System::String authenticationType)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_4)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::String authenticationType, mscorlib::System::String nameType, mscorlib::System::String roleType)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_5)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::Security::Principal::IIdentity identity)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_6)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims, mscorlib::System::String authenticationType, mscorlib::System::String nameType, mscorlib::System::String roleType)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_7)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::Security::Principal::IIdentity identity, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_8)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsIdentity(mscorlib::System::Security::Principal::IIdentity identity, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims, mscorlib::System::String authenticationType, mscorlib::System::String nameType, mscorlib::System::String roleType)
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Constructor_9)
				{
					
					mscorlib::System::Security::Claims::ClaimsIdentity *value = new mscorlib::System::Security::Claims::ClaimsIdentity();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method AddClaim
				//		Signature: mscorlib::System::Security::Claims::Claim claim
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,AddClaim_Test)
				{
					
					
				}

				// Method AddClaims
				//		Signature: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,AddClaims_Test)
				{
					
					
				}

				// Method Clone
				//		Signature: 
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,Clone_Test)
				{
					
					
				}

				// Method FindAll
				//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,FindAll_1_Test)
				{
					
					
				}

				// Method FindAll
				//		Signature: mscorlib::System::String type
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,FindAll_2_Test)
				{
					
					
				}

				// Method FindFirst
				//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,FindFirst_1_Test)
				{
					
					
				}

				// Method FindFirst
				//		Signature: mscorlib::System::String type
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,FindFirst_2_Test)
				{
					
					
				}

				// Method HasClaim
				//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,HasClaim_1_Test)
				{
					
					
				}

				// Method HasClaim
				//		Signature: mscorlib::System::String type, mscorlib::System::String value
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,HasClaim_2_Test)
				{
					
					
				}

				// Method RemoveClaim
				//		Signature: mscorlib::System::Security::Claims::Claim claim
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,RemoveClaim_Test)
				{
					
					
				}

				// Method TryRemoveClaim
				//		Signature: mscorlib::System::Security::Claims::Claim claim
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,TryRemoveClaim_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Actor
				//		Return Type: mscorlib::System::Security::Claims::ClaimsIdentity
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_Actor_Test)
				{
					
					
				}

				// Property Actor
				//		Return Type: mscorlib::System::Security::Claims::ClaimsIdentity
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,set_Actor_Test)
				{
					
					
				}

				// Property AuthenticationType
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_AuthenticationType_Test)
				{
					
					
				}

				// Property BootstrapContext
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_BootstrapContext_Test)
				{
					
					
				}

				// Property BootstrapContext
				//		Return Type: mscorlib::System::Object
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,set_BootstrapContext_Test)
				{
					
					
				}

				// Property Label
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_Label_Test)
				{
					
					
				}

				// Property Label
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,set_Label_Test)
				{
					
					
				}

				// Property Name
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_Name_Test)
				{
					
					
				}

				// Property NameClaimType
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_NameClaimType_Test)
				{
					
					
				}

				// Property NameClaimType
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,set_NameClaimType_Test)
				{
					
					
				}

				// Property RoleClaimType
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_RoleClaimType_Test)
				{
					
					
				}

				// Property RoleClaimType
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,set_RoleClaimType_Test)
				{
					
					
				}

				// Property Claims
				//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_Claims_Test)
				{
					
					
				}

				// Property IsAuthenticated
				//		Return Type: mscorlib::System::Boolean
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsIdentity_Fixture,get_IsAuthenticated_Test)
				{
					
					
				}


			}
		}
	}
}
