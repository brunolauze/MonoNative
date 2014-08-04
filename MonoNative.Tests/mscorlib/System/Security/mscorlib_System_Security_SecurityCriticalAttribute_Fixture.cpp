// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: SecurityCriticalAttribute
// C++ Typed Name: mscorlib::System::Security::SecurityCriticalAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityCriticalAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//SecurityCriticalAttribute()
			TEST(mscorlib_System_Security_SecurityCriticalAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::SecurityCriticalAttribute *value = new mscorlib::System::Security::SecurityCriticalAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//SecurityCriticalAttribute(mscorlib::System::Security::SecurityCriticalScope::__ENUM__ scope)
			TEST(mscorlib_System_Security_SecurityCriticalAttribute_Fixture,Constructor_2)
			{
				
				mscorlib::System::Security::SecurityCriticalAttribute *value = new mscorlib::System::Security::SecurityCriticalAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property Scope
			//		Return Type: mscorlib::System::Security::SecurityCriticalScope::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityCriticalAttribute_Fixture,get_Scope_Test)
			{
				
				
			}

			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_SecurityCriticalAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
