// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Messaging
// Name: RemotingSurrogateSelector
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					//Constructors Tests
					
					//RemotingSurrogateSelector()
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector *value = new mscorlib::System::Runtime::Remoting::Messaging::RemotingSurrogateSelector();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method ChainSelector
					//		Signature: mscorlib::System::Runtime::Serialization::ISurrogateSelector selector
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,ChainSelector_Test)
					{
						
						
					}

					// Method GetNextSelector
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,GetNextSelector_Test)
					{
						
						
					}

					// Method GetRootObject
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,GetRootObject_Test)
					{
						
						
					}

					// Method GetSurrogate
					//		Signature: mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector ssout
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,GetSurrogate_Test)
					{
						
						
					}

					// Method SetRootObject
					//		Signature: mscorlib::System::Object obj
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,SetRootObject_Test)
					{
						
						
					}

					// Method UseSoapFormat
					//		Signature: 
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,UseSoapFormat_Test)
					{
						
						
					}

					//Public Properties Tests
					
					// Property Filter
					//		Return Type: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )> 
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,get_Filter_Test)
					{
						
						
					}

					// Property Filter
					//		Return Type: mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )> 
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector_Fixture,set_Filter_Test)
					{
						
						
					}


				}
			}
		}
	}
}
