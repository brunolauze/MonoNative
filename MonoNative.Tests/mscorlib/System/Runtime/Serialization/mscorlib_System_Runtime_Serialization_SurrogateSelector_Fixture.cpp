// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.Serialization
// Name: SurrogateSelector
// C++ Typed Name: mscorlib::System::Runtime::Serialization::SurrogateSelector


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SurrogateSelector.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Constructors Tests
				
				//SurrogateSelector()
				TEST(mscorlib_System_Runtime_Serialization_SurrogateSelector_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::Serialization::SurrogateSelector *value = new mscorlib::System::Runtime::Serialization::SurrogateSelector();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method AddSurrogate
				//		Signature: mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISerializationSurrogate surrogate
				TEST(mscorlib_System_Runtime_Serialization_SurrogateSelector_Fixture,AddSurrogate_Test)
				{
					
					
				}

				// Method ChainSelector
				//		Signature: mscorlib::System::Runtime::Serialization::ISurrogateSelector selector
				TEST(mscorlib_System_Runtime_Serialization_SurrogateSelector_Fixture,ChainSelector_Test)
				{
					
					
				}

				// Method GetNextSelector
				//		Signature: 
				TEST(mscorlib_System_Runtime_Serialization_SurrogateSelector_Fixture,GetNextSelector_Test)
				{
					
					
				}

				// Method GetSurrogate
				//		Signature: mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector
				TEST(mscorlib_System_Runtime_Serialization_SurrogateSelector_Fixture,GetSurrogate_Test)
				{
					
					
				}

				// Method RemoveSurrogate
				//		Signature: mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context
				TEST(mscorlib_System_Runtime_Serialization_SurrogateSelector_Fixture,RemoveSurrogate_Test)
				{
					
					
				}


			}
		}
	}
}
