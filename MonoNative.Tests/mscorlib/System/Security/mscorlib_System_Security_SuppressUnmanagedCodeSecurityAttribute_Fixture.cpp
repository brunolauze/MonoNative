// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Security
// Name: SuppressUnmanagedCodeSecurityAttribute
// C++ Typed Name: mscorlib::System::Security::SuppressUnmanagedCodeSecurityAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SuppressUnmanagedCodeSecurityAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Constructors Tests
			
			//SuppressUnmanagedCodeSecurityAttribute()
			TEST(mscorlib_System_Security_SuppressUnmanagedCodeSecurityAttribute_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Security::SuppressUnmanagedCodeSecurityAttribute *value = new mscorlib::System::Security::SuppressUnmanagedCodeSecurityAttribute();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			//Public Properties Tests
			
			// Property TypeId
			//		Return Type: mscorlib::System::Object
			//			Property Get Method
			TEST(mscorlib_System_Security_SuppressUnmanagedCodeSecurityAttribute_Fixture,get_TypeId_Test)
			{
				
				
			}


		}
	}
}
