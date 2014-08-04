// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Lifetime
// Name: LifetimeServices
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Lifetime
				{

					//Constructors Tests
					
					//LifetimeServices()
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices *value = new mscorlib::System::Runtime::Remoting::Lifetime::LifetimeServices();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Property LeaseManagerPollTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,get_LeaseManagerPollTime_Test)
					{
						
						
					}

					// Property LeaseManagerPollTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,set_LeaseManagerPollTime_Test)
					{
						
						
					}

					// Property LeaseTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,get_LeaseTime_Test)
					{
						
						
					}

					// Property LeaseTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,set_LeaseTime_Test)
					{
						
						
					}

					// Property RenewOnCallTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,get_RenewOnCallTime_Test)
					{
						
						
					}

					// Property RenewOnCallTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,set_RenewOnCallTime_Test)
					{
						
						
					}

					// Property SponsorshipTimeout
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,get_SponsorshipTimeout_Test)
					{
						
						
					}

					// Property SponsorshipTimeout
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_LifetimeServices_Fixture,set_SponsorshipTimeout_Test)
					{
						
						
					}


				}
			}
		}
	}
}
