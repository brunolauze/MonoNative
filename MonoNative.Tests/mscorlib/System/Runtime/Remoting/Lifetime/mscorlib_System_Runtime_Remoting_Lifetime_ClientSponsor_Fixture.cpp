// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Lifetime
// Name: ClientSponsor
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Lifetime::ClientSponsor


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Lifetime/mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
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
				namespace Lifetime
				{

					//Constructors Tests
					
					//ClientSponsor()
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Lifetime::ClientSponsor *value = new mscorlib::System::Runtime::Remoting::Lifetime::ClientSponsor();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//ClientSponsor(mscorlib::System::TimeSpan renewalTime)
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,Constructor_2)
					{
						
						mscorlib::System::Runtime::Remoting::Lifetime::ClientSponsor *value = new mscorlib::System::Runtime::Remoting::Lifetime::ClientSponsor();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method Close
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,Close_Test)
					{
						
						
					}

					// Method InitializeLifetimeService
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,InitializeLifetimeService_Test)
					{
						
						
					}

					// Method Register
					//		Signature: mscorlib::System::MarshalByRefObject obj
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,Register_Test)
					{
						
						
					}

					// Method Renewal
					//		Signature: mscorlib::System::Runtime::Remoting::Lifetime::ILease lease
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,Renewal_Test)
					{
						
						
					}

					// Method Unregister
					//		Signature: mscorlib::System::MarshalByRefObject obj
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,Unregister_Test)
					{
						
						
					}

					//Public Properties Tests
					
					// Property RenewalTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,get_RenewalTime_Test)
					{
						
						
					}

					// Property RenewalTime
					//		Return Type: mscorlib::System::TimeSpan
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Lifetime_ClientSponsor_Fixture,set_RenewalTime_Test)
					{
						
						
					}


				}
			}
		}
	}
}
