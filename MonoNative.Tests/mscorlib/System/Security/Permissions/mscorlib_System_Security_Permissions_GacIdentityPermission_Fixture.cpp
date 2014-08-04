// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security.Permissions
// Name: GacIdentityPermission
// C++ Typed Name: mscorlib::System::Security::Permissions::GacIdentityPermission


#include <gtest/gtest.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_GacIdentityPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Constructors Tests
				
				//GacIdentityPermission()
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Security::Permissions::GacIdentityPermission *value = new mscorlib::System::Security::Permissions::GacIdentityPermission();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//GacIdentityPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,Constructor_2)
				{
					
					mscorlib::System::Security::Permissions::GacIdentityPermission *value = new mscorlib::System::Security::Permissions::GacIdentityPermission();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method Copy
				//		Signature: 
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,Copy_Test)
				{
					
					
				}

				// Method Intersect
				//		Signature: mscorlib::System::Security::IPermission target
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,Intersect_Test)
				{
					
					
				}

				// Method IsSubsetOf
				//		Signature: mscorlib::System::Security::IPermission target
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,IsSubsetOf_Test)
				{
					
					
				}

				// Method Union
				//		Signature: mscorlib::System::Security::IPermission target
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,Union_Test)
				{
					
					
				}

				// Method FromXml
				//		Signature: mscorlib::System::Security::SecurityElement securityElement
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,FromXml_Test)
				{
					
					
				}

				// Method ToXml
				//		Signature: 
				TEST(mscorlib_System_Security_Permissions_GacIdentityPermission_Fixture,ToXml_Test)
				{
					
					
				}


			}
		}
	}
}
