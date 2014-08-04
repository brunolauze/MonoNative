// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Reflection
// Name: AssemblyNameProxy
// C++ Typed Name: mscorlib::System::Reflection::AssemblyNameProxy


#include <gtest/gtest.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyNameProxy.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Constructors Tests
			
			//AssemblyNameProxy()
			TEST(mscorlib_System_Reflection_AssemblyNameProxy_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Reflection::AssemblyNameProxy *value = new mscorlib::System::Reflection::AssemblyNameProxy();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method GetAssemblyName
			//		Signature: mscorlib::System::String assemblyFile
			TEST(mscorlib_System_Reflection_AssemblyNameProxy_Fixture,GetAssemblyName_Test)
			{
				
				
			}


		}
	}
}
