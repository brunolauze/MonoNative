// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: SecuritySafeCriticalAttribute
// C++ Typed Name: mscorlib::System::Security::SecuritySafeCriticalAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecuritySafeCriticalAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//SecuritySafeCriticalAttribute()
			TEST(mscorlib_System_Security_SecuritySafeCriticalAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::SecuritySafeCriticalAttribute *value = new mscorlib::System::Security::SecuritySafeCriticalAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_SecuritySafeCriticalAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
