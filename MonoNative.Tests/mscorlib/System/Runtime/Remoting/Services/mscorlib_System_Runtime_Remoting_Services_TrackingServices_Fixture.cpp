// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Services
// Name: TrackingServices
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Services::TrackingServices


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Services/mscorlib_System_Runtime_Remoting_Services_TrackingServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Services
				{

					//Constructors Tests
					
					//TrackingServices()
					TEST(mscorlib_System_Runtime_Remoting_Services_TrackingServices_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Services::TrackingServices *value = new mscorlib::System::Runtime::Remoting::Services::TrackingServices();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					//Public Static Methods Tests
					
					// Method RegisterTrackingHandler
					//		Signature: mscorlib::System::Runtime::Remoting::Services::ITrackingHandler handler
					TEST(mscorlib_System_Runtime_Remoting_Services_TrackingServices_Fixture,RegisterTrackingHandler_StaticTest)
					{
						
						
					}

					// Method UnregisterTrackingHandler
					//		Signature: mscorlib::System::Runtime::Remoting::Services::ITrackingHandler handler
					TEST(mscorlib_System_Runtime_Remoting_Services_TrackingServices_Fixture,UnregisterTrackingHandler_StaticTest)
					{
						
						
					}

					// Property RegisteredHandlers
					//		Return Type: mscorlib::System::Runtime::Remoting::Services::ITrackingHandler*
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Services_TrackingServices_Fixture,get_RegisteredHandlers_Test)
					{
						
						
					}


				}
			}
		}
	}
}
