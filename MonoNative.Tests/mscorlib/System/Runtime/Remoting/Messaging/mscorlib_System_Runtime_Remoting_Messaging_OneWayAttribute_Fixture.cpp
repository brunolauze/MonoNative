// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Remoting.Messaging
// Name: OneWayAttribute
// C++ Typed Name: mscorlib::System::Runtime::Remoting::Messaging::OneWayAttribute


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute.h>
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
				namespace Messaging
				{

					//Constructors Tests
					
					//OneWayAttribute()
					TEST(mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute_Fixture,DefaultConstructor)
					{
						
						mscorlib::System::Runtime::Remoting::Messaging::OneWayAttribute *value = new mscorlib::System::Runtime::Remoting::Messaging::OneWayAttribute();
						EXPECT_NE(NULL, value->GetNativeObject());
						
						
					}
					
					//Public Methods Tests
					
					//Public Properties Tests
					
					// Property TypeId
					//		Return Type: mscorlib::System::Object
					//			Property Get Method
					TEST(mscorlib_System_Runtime_Remoting_Messaging_OneWayAttribute_Fixture,get_TypeId_Test)
					{
						
						
					}


				}
			}
		}
	}
}
