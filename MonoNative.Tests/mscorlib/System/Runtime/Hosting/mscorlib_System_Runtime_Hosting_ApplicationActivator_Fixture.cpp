// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Hosting
// Name: ApplicationActivator
// C++ Typed Name: mscorlib::System::Runtime::Hosting::ApplicationActivator


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Hosting/mscorlib_System_Runtime_Hosting_ApplicationActivator.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjectHandle.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Hosting
			{

				//Constructors Tests
				
				//ApplicationActivator()
				TEST(mscorlib_System_Runtime_Hosting_ApplicationActivator_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Hosting::ApplicationActivator *value = new mscorlib::System::Runtime::Hosting::ApplicationActivator();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method CreateInstance
				//		Signature: mscorlib::System::ActivationContext activationContext
				TEST(mscorlib_System_Runtime_Hosting_ApplicationActivator_Fixture,CreateInstance_1_Test)
				{
					
					
				}

				// Method CreateInstance
				//		Signature: mscorlib::System::ActivationContext activationContext, std::vector<mscorlib::System::String*> activationCustomData
				TEST(mscorlib_System_Runtime_Hosting_ApplicationActivator_Fixture,CreateInstance_2_Test)
				{
					
					
				}


			}
		}
	}
}
