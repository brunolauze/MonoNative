// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: AllowPartiallyTrustedCallersAttribute
// C++ Typed Name: mscorlib::System::Security::AllowPartiallyTrustedCallersAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_AllowPartiallyTrustedCallersAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//AllowPartiallyTrustedCallersAttribute()
			TEST(mscorlib_System_Security_AllowPartiallyTrustedCallersAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::AllowPartiallyTrustedCallersAttribute *value = new mscorlib::System::Security::AllowPartiallyTrustedCallersAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_AllowPartiallyTrustedCallersAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
