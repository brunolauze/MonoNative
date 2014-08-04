// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Channels
// Name: ClientChannelSinkStack
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Channels::ClientChannelSinkStack


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Channels/mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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
					
					//ClientChannelSinkStack()
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Channels::ClientChannelSinkStack *value = new mscorlib::System::Runtime::Remoting::Channels::ClientChannelSinkStack();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//ClientChannelSinkStack(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink replySink)
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,Constructor_2)
					{
						
						mscorlib::System::Runtime::Remoting::Channels::ClientChannelSinkStack *value = new mscorlib::System::Runtime::Remoting::Channels::ClientChannelSinkStack();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method AsyncProcessResponse
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::ITransportHeaders headers, mscorlib::System::IO::Stream stream
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,AsyncProcessResponse_Test)
					{
						
						
					}

					// Method DispatchException
					//		Signature: mscorlib::System::Exception e
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,DispatchException_Test)
					{
						
						
					}

					// Method DispatchReplyMessage
					//		Signature: mscorlib::System::Runtime::Remoting::Messaging::IMessage msg
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,DispatchReplyMessage_Test)
					{
						
						
					}

					// Method Pop
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,Pop_Test)
					{
						
						
					}

					// Method Push
					//		Signature: mscorlib::System::Runtime::Remoting::Channels::IClientChannelSink sink, mscorlib::System::Object state
					TEST(mscorlib_System_Runtime_Remoting_Channels_ClientChannelSinkStack_Fixture,Push_Test)
					{
						
						
					}


				}
			}
		}
	}
}
