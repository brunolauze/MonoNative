// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Contexts
// Name: SynchronizationAttribute
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					//Constructors Tests
					
					//SynchronizationAttribute()
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute *value = new mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//SynchronizationAttribute(mscorlib::System::Boolean reEntrant)
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,Constructor_2)
					{
						
						mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute *value = new mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//SynchronizationAttribute(mscorlib::System::Int32 flag)
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,Constructor_3)
					{
						
						mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute *value = new mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//SynchronizationAttribute(mscorlib::System::Int32 flag, mscorlib::System::Boolean reEntrant)
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,Constructor_4)
					{
						
						mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute *value = new mscorlib::System::Runtime::Remoting::Contexts::SynchronizationAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					// Method GetPropertiesForNewContext
					//		Signature: mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,GetPropertiesForNewContext_Test)
					{
						
						
					}

					// Method GetClientContextSink
					//		Signature: mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,GetClientContextSink_Test)
					{
						
						
					}

					// Method GetServerContextSink
					//		Signature: mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,GetServerContextSink_Test)
					{
						
						
					}

					// Method IsContextOK
					//		Signature: mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,IsContextOK_Test)
					{
						
						
					}

					//Public Properties Tests
					
					// Property IsReEntrant
					//		Return Type: mscorlib::System::Boolean
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,get_IsReEntrant_Test)
					{
						
						
					}

					// Property Locked
					//		Return Type: mscorlib::System::Boolean
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,get_Locked_Test)
					{
						
						
					}

					// Property Locked
					//		Return Type: mscorlib::System::Boolean
					//			Property Set Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,set_Locked_Test)
					{
						
						
					}

					// Property Name
					//		Return Type: mscorlib::System::String
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,get_Name_Test)
					{
						
						
					}

					// Property TypeId
					//		Return Type: mscorlib::System::Object
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute_Fixture,get_TypeId_Test)
					{
						
						
					}


				}
			}
		}
	}
}
