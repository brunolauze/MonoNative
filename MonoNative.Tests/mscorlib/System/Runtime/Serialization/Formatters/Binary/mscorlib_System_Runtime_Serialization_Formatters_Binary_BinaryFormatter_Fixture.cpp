// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization.Formatters.Binary
// Name: BinaryFormatter
// C++ Typed Name: mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/Formatters/Binary/mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationBinder.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{
					namespace Binary
					{

						//Constructors Tests
						
						//BinaryFormatter()
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,DefaultConstructor)
						{
							
							mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter *value = new mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();
							EXPECT_NE(NULL, value->GetNativeObject());
							
							
						}
						
						//BinaryFormatter(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector, mscorlib::System::Runtime::Serialization::StreamingContext context)
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,Constructor_2)
						{
							
							mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter *value = new mscorlib::System::Runtime::Serialization::Formatters::Binary::BinaryFormatter();
							EXPECT_NE(NULL, value->GetNativeObject());
							
							
						}
						
						//Public Methods Tests
						
						// Method Deserialize
						//		Signature: mscorlib::System::IO::Stream serializationStream
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,Deserialize_1_Test)
						{
							
							
						}

						// Method Deserialize
						//		Signature: mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,Deserialize_2_Test)
						{
							
							
						}

						// Method DeserializeMethodResponse
						//		Signature: mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage methodCallMessage
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,DeserializeMethodResponse_Test)
						{
							
							
						}

						// Method Serialize
						//		Signature: mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,Serialize_1_Test)
						{
							
							
						}

						// Method Serialize
						//		Signature: mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph, std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,Serialize_2_Test)
						{
							
							
						}

						// Method UnsafeDeserialize
						//		Signature: mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,UnsafeDeserialize_Test)
						{
							
							
						}

						// Method UnsafeDeserializeMethodResponse
						//		Signature: mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage methodCallMessage
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,UnsafeDeserializeMethodResponse_Test)
						{
							
							
						}

						//Public Properties Tests
						
						// Property AssemblyFormat
						//		Return Type: mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__
						//			Property Get Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,get_AssemblyFormat_Test)
						{
							
							
						}

						// Property AssemblyFormat
						//		Return Type: mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__
						//			Property Set Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,set_AssemblyFormat_Test)
						{
							
							
						}

						// Property Binder
						//		Return Type: mscorlib::System::Runtime::Serialization::SerializationBinder
						//			Property Get Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,get_Binder_Test)
						{
							
							
						}

						// Property Binder
						//		Return Type: mscorlib::System::Runtime::Serialization::SerializationBinder
						//			Property Set Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,set_Binder_Test)
						{
							
							
						}

						// Property Context
						//		Return Type: mscorlib::System::Runtime::Serialization::StreamingContext
						//			Property Get Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,get_Context_Test)
						{
							
							
						}

						// Property Context
						//		Return Type: mscorlib::System::Runtime::Serialization::StreamingContext
						//			Property Set Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,set_Context_Test)
						{
							
							
						}

						// Property SurrogateSelector
						//		Return Type: mscorlib::System::Runtime::Serialization::ISurrogateSelector
						//			Property Get Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,get_SurrogateSelector_Test)
						{
							
							
						}

						// Property SurrogateSelector
						//		Return Type: mscorlib::System::Runtime::Serialization::ISurrogateSelector
						//			Property Set Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,set_SurrogateSelector_Test)
						{
							
							
						}

						// Property TypeFormat
						//		Return Type: mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__
						//			Property Get Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,get_TypeFormat_Test)
						{
							
							
						}

						// Property TypeFormat
						//		Return Type: mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__
						//			Property Set Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,set_TypeFormat_Test)
						{
							
							
						}

						// Property FilterLevel
						//		Return Type: mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__
						//			Property Get Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,get_FilterLevel_Test)
						{
							
							
						}

						// Property FilterLevel
						//		Return Type: mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__
						//			Property Set Method
						TEST(mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Fixture,set_FilterLevel_Test)
						{
							
							
						}


					}
				}
			}
		}
	}
}
