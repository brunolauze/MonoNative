// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: UnverifiableCodeAttribute
// C++ Typed Name: mscorlib::System::Security::UnverifiableCodeAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_UnverifiableCodeAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//UnverifiableCodeAttribute()
			TEST(mscorlib_System_Security_UnverifiableCodeAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::UnverifiableCodeAttribute *value = new mscorlib::System::Security::UnverifiableCodeAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_UnverifiableCodeAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
