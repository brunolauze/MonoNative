// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting
// Name: ObjRef
// C++ Typed Name: mscorlib::System::Runtime::Remoting::ObjRef


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Constructors Tests
				
				//ObjRef()
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Remoting::ObjRef *value = new mscorlib::System::Runtime::Remoting::ObjRef();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//ObjRef(mscorlib::System::MarshalByRefObject o, mscorlib::System::Type requestedType)
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,Constructor_2)
				{
					
					mscorlib::System::Runtime::Remoting::ObjRef *value = new mscorlib::System::Runtime::Remoting::ObjRef();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method GetObjectData
				//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,GetObjectData_Test)
				{
					
					
				}

				// Method GetRealObject
				//		Signature: mscorlib::System::Runtime::Serialization::StreamingContext context
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,GetRealObject_Test)
				{
					
					
				}

				// Method IsFromThisAppDomain
				//		Signature: 
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,IsFromThisAppDomain_Test)
				{
					
					
				}

				// Method IsFromThisProcess
				//		Signature: 
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,IsFromThisProcess_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property ChannelInfo
				//		Return Type: mscorlib::System::Runtime::Remoting::IChannelInfo
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,get_ChannelInfo_Test)
				{
					
					
				}

				// Property ChannelInfo
				//		Return Type: mscorlib::System::Runtime::Remoting::IChannelInfo
				//			Property Set Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,set_ChannelInfo_Test)
				{
					
					
				}

				// Property EnvoyInfo
				//		Return Type: mscorlib::System::Runtime::Remoting::IEnvoyInfo
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,get_EnvoyInfo_Test)
				{
					
					
				}

				// Property EnvoyInfo
				//		Return Type: mscorlib::System::Runtime::Remoting::IEnvoyInfo
				//			Property Set Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,set_EnvoyInfo_Test)
				{
					
					
				}

				// Property TypeInfo
				//		Return Type: mscorlib::System::Runtime::Remoting::IRemotingTypeInfo
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,get_TypeInfo_Test)
				{
					
					
				}

				// Property TypeInfo
				//		Return Type: mscorlib::System::Runtime::Remoting::IRemotingTypeInfo
				//			Property Set Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,set_TypeInfo_Test)
				{
					
					
				}

				// Property URI
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,get_URI_Test)
				{
					
					
				}

				// Property URI
				//		Return Type: mscorlib::System::String
				//			Property Set Method
				TEST(mscorlib_System_Runtime_Remoting_ObjRef_Fixture,set_URI_Test)
				{
					
					
				}


			}
		}
	}
}
