// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: RuntimeEnvironment
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::RuntimeEnvironment


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_RuntimeEnvironment.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Constructors Tests
				
				//RuntimeEnvironment()
				TEST(mscorlib_System_Runtime_InteropServices_RuntimeEnvironment_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::RuntimeEnvironment *value = new mscorlib::System::Runtime::InteropServices::RuntimeEnvironment();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Static Methods Tests
				
				// Method FromGlobalAccessCache
				//		Signature: mscorlib::System::Reflection::Assembly a
				TEST(mscorlib_System_Runtime_InteropServices_RuntimeEnvironment_Fixture,FromGlobalAccessCache_StaticTest)
				{
					
					
				}

				// Method GetRuntimeDirectory
				//		Signature: 
				TEST(mscorlib_System_Runtime_InteropServices_RuntimeEnvironment_Fixture,GetRuntimeDirectory_StaticTest)
				{
					
					
				}

				// Method GetSystemVersion
				//		Signature: 
				TEST(mscorlib_System_Runtime_InteropServices_RuntimeEnvironment_Fixture,GetSystemVersion_StaticTest)
				{
					
					
				}

				// Property SystemConfigurationFile
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Runtime_InteropServices_RuntimeEnvironment_Fixture,get_SystemConfigurationFile_Test)
				{
					
					
				}


			}
		}
	}
}
