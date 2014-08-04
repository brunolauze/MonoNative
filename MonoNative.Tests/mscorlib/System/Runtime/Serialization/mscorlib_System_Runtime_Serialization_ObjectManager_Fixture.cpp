// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization
// Name: ObjectManager
// C++ Typed Name: mscorlib::System::Runtime::Serialization::ObjectManager


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ObjectManager.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Constructors Tests
				
				//ObjectManager(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector, mscorlib::System::Runtime::Serialization::StreamingContext context)
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,Constructor_1)
				{
					
					
					
				}
				
				//Public Methods Tests
				
				// Method DoFixups
				//		Signature: 
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,DoFixups_Test)
				{
					
					
				}

				// Method GetObject
				//		Signature: mscorlib::System::Int64 objectID
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,GetObject_Test)
				{
					
					
				}

				// Method RaiseDeserializationEvent
				//		Signature: 
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RaiseDeserializationEvent_Test)
				{
					
					
				}

				// Method RaiseOnDeserializingEvent
				//		Signature: mscorlib::System::Object obj
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RaiseOnDeserializingEvent_Test)
				{
					
					
				}

				// Method RecordArrayElementFixup
				//		Signature: mscorlib::System::Int64 arrayToBeFixed, mscorlib::System::Int32 index, mscorlib::System::Int64 objectRequired
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RecordArrayElementFixup_1_Test)
				{
					
					
				}

				// Method RecordArrayElementFixup
				//		Signature: mscorlib::System::Int64 arrayToBeFixed, std::vector<mscorlib::System::Int32*> indices, mscorlib::System::Int64 objectRequired
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RecordArrayElementFixup_2_Test)
				{
					
					
				}

				// Method RecordDelayedFixup
				//		Signature: mscorlib::System::Int64 objectToBeFixed, mscorlib::System::String memberName, mscorlib::System::Int64 objectRequired
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RecordDelayedFixup_Test)
				{
					
					
				}

				// Method RecordFixup
				//		Signature: mscorlib::System::Int64 objectToBeFixed, mscorlib::System::Reflection::MemberInfo member, mscorlib::System::Int64 objectRequired
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RecordFixup_Test)
				{
					
					
				}

				// Method RegisterObject
				//		Signature: mscorlib::System::Object obj, mscorlib::System::Int64 objectID
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RegisterObject_1_Test)
				{
					
					
				}

				// Method RegisterObject
				//		Signature: mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RegisterObject_2_Test)
				{
					
					
				}

				// Method RegisterObject
				//		Signature: mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Int64 idOfContainingObj, mscorlib::System::Reflection::MemberInfo member
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RegisterObject_3_Test)
				{
					
					
				}

				// Method RegisterObject
				//		Signature: mscorlib::System::Object obj, mscorlib::System::Int64 objectID, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Int64 idOfContainingObj, mscorlib::System::Reflection::MemberInfo member, std::vector<mscorlib::System::Int32*> arrayIndex
				TEST(mscorlib_System_Runtime_Serialization_ObjectManager_Fixture,RegisterObject_4_Test)
				{
					
					
				}


			}
		}
	}
}
