// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.ConstrainedExecution
// Name: PrePrepareMethodAttribute
// C++ Typed Name: mscorlib::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/ConstrainedExecution/mscorlib_System_Runtime_ConstrainedExecution_PrePrepareMethodAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ConstrainedExecution
			{

				//Constructors Tests
				
				//PrePrepareMethodAttribute()
				TEST(mscorlib_System_Runtime_ConstrainedExecution_PrePrepareMethodAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute *value = new mscorlib::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Runtime_ConstrainedExecution_PrePrepareMethodAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
