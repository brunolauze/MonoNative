// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.Tracing
// Name: NonEventAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::Tracing::NonEventAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_NonEventAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				//Constructors Tests
				
				//NonEventAttribute()
				TEST(mscorlib_System_Diagnostics_Tracing_NonEventAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::Tracing::NonEventAttribute *value = new mscorlib::System::Diagnostics::Tracing::NonEventAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Tracing_NonEventAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
