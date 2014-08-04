// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: CallConvThiscall
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::CallConvThiscall


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CallConvThiscall.h>
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
				
				//CallConvThiscall()
				TEST(mscorlib_System_Runtime_CompilerServices_CallConvThiscall_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::CallConvThiscall *value = new mscorlib::System::Runtime::CompilerServices::CallConvThiscall();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				

			}
		}
	}
}
