// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting
// Name: InternalRemotingServices
// C++ Typed Name: mscorlib::System::Runtime::Remoting::InternalRemotingServices


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_InternalRemotingServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/Metadata/mscorlib_System_Runtime_Remoting_Metadata_SoapAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_MethodCall.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Constructors Tests
				
				//InternalRemotingServices()
				TEST(mscorlib_System_Runtime_Remoting_InternalRemotingServices_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Remoting::InternalRemotingServices *value = new mscorlib::System::Runtime::Remoting::InternalRemotingServices();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				//Public Static Methods Tests
				
				// Method DebugOutChnl
				//		Signature: mscorlib::System::String s
				TEST(mscorlib_System_Runtime_Remoting_InternalRemotingServices_Fixture,DebugOutChnl_StaticTest)
				{
					
					
				}

				// Method GetCachedSoapAttribute
				//		Signature: mscorlib::System::Object reflectionObject
				TEST(mscorlib_System_Runtime_Remoting_InternalRemotingServices_Fixture,GetCachedSoapAttribute_StaticTest)
				{
					
					
				}

				// Method RemotingAssert
				//		Signature: mscorlib::System::Boolean condition, mscorlib::System::String message
				TEST(mscorlib_System_Runtime_Remoting_InternalRemotingServices_Fixture,RemotingAssert_StaticTest)
				{
					
					
				}

				// Method RemotingTrace
				//		Signature: std::vector<mscorlib::System::Object*> messages
				TEST(mscorlib_System_Runtime_Remoting_InternalRemotingServices_Fixture,RemotingTrace_StaticTest)
				{
					
					
				}

				// Method SetServerIdentity
				//		Signature: mscorlib::System::Runtime::Remoting::Messaging::MethodCall m, mscorlib::System::Object srvID
				TEST(mscorlib_System_Runtime_Remoting_InternalRemotingServices_Fixture,SetServerIdentity_StaticTest)
				{
					
					
				}


			}
		}
	}
}
