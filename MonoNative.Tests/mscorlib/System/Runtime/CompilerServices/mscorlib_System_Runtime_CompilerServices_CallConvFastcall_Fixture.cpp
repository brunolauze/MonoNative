// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: CallConvFastcall
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::CallConvFastcall


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CallConvFastcall.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Constructors Tests
				
				//CallConvFastcall()
				TEST(mscorlib_System_Runtime_CompilerServices_CallConvFastcall_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::CallConvFastcall *value = new mscorlib::System::Runtime::CompilerServices::CallConvFastcall();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				

			}
		}
	}
}
