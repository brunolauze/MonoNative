// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Diagnostics.Tracing
// Name: EventSourceAttribute
// C++ Typed Name: mscorlib::System::Diagnostics::Tracing::EventSourceAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventSourceAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				//Constructors Tests
				
				//EventSourceAttribute()
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Diagnostics::Tracing::EventSourceAttribute *value = new mscorlib::System::Diagnostics::Tracing::EventSourceAttribute();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Properties Tests
				
				// Property Guid
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,get_Guid_Test)
				{
					
					
				}

				// Property Guid
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,set_Guid_Test)
				{
					
					
				}

				// Property LocalizationResources
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,get_LocalizationResources_Test)
				{
					
					
				}

				// Property LocalizationResources
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,set_LocalizationResources_Test)
				{
					
					
				}

				// Property Name
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,get_Name_Test)
				{
					
					
				}

				// Property Name
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,set_Name_Test)
				{
					
					
				}

				// Property TypeId
				//		Return Type: mscorlib::System::Object
				//			Property Get Method
				TEST(mscorlib_System_Diagnostics_Tracing_EventSourceAttribute_Fixture,get_TypeId_Test)
				{
					
					
				}


			}
		}
	}
}
