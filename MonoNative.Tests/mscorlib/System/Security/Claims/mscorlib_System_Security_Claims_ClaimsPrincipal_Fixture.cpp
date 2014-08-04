// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Claims
// Name: ClaimsPrincipal
// C++ Typed Name: mscorlib::System::Security::Claims::ClaimsPrincipal


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsPrincipal.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsIdentity.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_Claim.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				
				//ClaimsPrincipal()
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Claims::ClaimsPrincipal *value = new mscorlib::System::Security::Claims::ClaimsPrincipal();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsPrincipal(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> identities)
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Claims::ClaimsPrincipal *value = new mscorlib::System::Security::Claims::ClaimsPrincipal();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsPrincipal(mscorlib::System::Security::Principal::IIdentity identity)
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,Constructor_3)
				{
					
					mscorlib::System::Security::Claims::ClaimsPrincipal *value = new mscorlib::System::Security::Claims::ClaimsPrincipal();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ClaimsPrincipal(mscorlib::System::Security::Principal::IPrincipal principal)
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,Constructor_4)
				{
					
					mscorlib::System::Security::Claims::ClaimsPrincipal *value = new mscorlib::System::Security::Claims::ClaimsPrincipal();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method AddIdentities
				//		Signature: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> identities
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,AddIdentities_Test)
				{
					
					
				}

				// Method AddIdentity
				//		Signature: mscorlib::System::Security::Claims::ClaimsIdentity identity
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,AddIdentity_Test)
				{
					
					
				}

				// Method FindAll
				//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,FindAll_Test)
				{
					
					
				}

				// Method FindFirst
				//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,FindFirst_Test)
				{
					
					
				}

				// Method HasClaim
				//		Signature: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,HasClaim_Test)
				{
					
					
				}

				// Method IsInRole
				//		Signature: mscorlib::System::String role
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,IsInRole_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property Claims
				//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,get_Claims_Test)
				{
					
					
				}

				// Property Identities
				//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity>
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,get_Identities_Test)
				{
					
					
				}

				// Property Identity
				//		Return Type: mscorlib::System::Security::Principal::IIdentity
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,get_Identity_Test)
				{
					
					
				}

				// Property ClaimsPrincipalSelector
				//		Return Type: mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()> 
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,get_ClaimsPrincipalSelector_Test)
				{
					
					
				}

				// Property ClaimsPrincipalSelector
				//		Return Type: mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()> 
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,set_ClaimsPrincipalSelector_Test)
				{
					
					
				}

				// Property Current
				//		Return Type: mscorlib::System::Security::Claims::ClaimsPrincipal
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,get_Current_Test)
				{
					
					
				}

				// Property PrimaryIdentitySelector
				//		Return Type: mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )> 
				//			Property Get Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,get_PrimaryIdentitySelector_Test)
				{
					
					
				}

				// Property PrimaryIdentitySelector
				//		Return Type: mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )> 
				//			Property Set Method
				TEST(mscorlib_System_Security_Claims_ClaimsPrincipal_Fixture,set_PrimaryIdentitySelector_Test)
				{
					
					
				}


			}
		}
	}
}
