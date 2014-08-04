// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.ExceptionServices
// Name: HandleProcessCorruptedStateExceptionsAttribute
// C++ Typed Name: mscorlib::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/ExceptionServices/mscorlib_System_Runtime_ExceptionServices_HandleProcessCorruptedStateExceptionsAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ExceptionServices
			{

				//Constructors Tests
				
				//HandleProcessCorruptedStateExceptionsAttribute()
				TEST(mscorlib_System_Runtime_ExceptionServices_HandleProcessCorruptedStateExceptionsAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute *value = new mscorlib::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_ExceptionServices_HandleProcessCorruptedStateExceptionsAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
