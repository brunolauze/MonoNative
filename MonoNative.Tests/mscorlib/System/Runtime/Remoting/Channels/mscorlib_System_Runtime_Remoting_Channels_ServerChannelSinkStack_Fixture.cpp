// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Channels
// Name: ServerChannelSinkStack
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Channels::ServerChannelSinkStack


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
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
				namespace Channels
				{

					//Constructors Tests
					
					//ServerChannelSinkStack()
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Channels::ServerChannelSinkStack *value = new mscorlib::System::Runtime::Remoting::Channels::ServerChannelSinkStack();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method GetResponseStream
					//		Signature: mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,GetResponseStream_Test)
					{
						
						
					}

					// Method Pop
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,Pop_Test)
					{
						
						
					}

					// Method Push
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,Push_Test)
					{
						
						
					}

					// Method ServerCallback
					//		Signature: mscorlib::System::IAsyncResult ar
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,ServerCallback_Test)
					{
						
						
					}

					// Method Store
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,Store_Test)
					{
						
						
					}

					// Method StoreAndDispatch
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::IServerChannelSink sink, mscorlib::System::Object state
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,StoreAndDispatch_Test)
					{
						
						
					}

					// Method AsyncProcessResponse
					//		Signature: mscorlib::System::Runtime::Remoting::Messaging::IMessage msg, mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream
					TEST(mscorlib_System_Runtime_Remoting_Channels_ServerChannelSinkStack_Fixture,AsyncProcessResponse_Test)
					{
						
						
					}


				}
			}
		}
	}
}
