// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.CompilerServices
// Name: CallConvStdcall
// C++ Typed Name: mscorlib::System::Runtime::CompilerServices::CallConvStdcall


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CallConvStdcall.h>
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
				
				//CallConvStdcall()
				TEST(mscorlib_System_Runtime_CompilerServices_CallConvStdcall_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::CompilerServices::CallConvStdcall *value = new mscorlib::System::Runtime::CompilerServices::CallConvStdcall();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				

			}
		}
	}
}
