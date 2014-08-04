// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: TypeLibConverter
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::TypeLibConverter


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TypeLibConverter.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_StrongNameKeyPair.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Constructors Tests
				
				//TypeLibConverter()
				TEST(mscorlib_System_Runtime_InteropServices_TypeLibConverter_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::TypeLibConverter *value = new mscorlib::System::Runtime::InteropServices::TypeLibConverter();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method ConvertAssemblyToTypeLib
				//		Signature: mscorlib::System::Reflection::Assembly assembly, mscorlib::System::String strTypeLibName, mscorlib::System::Runtime::InteropServices::TypeLibExporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibExporterNotifySink notifySink
				TEST(mscorlib_System_Runtime_InteropServices_TypeLibConverter_Fixture,ConvertAssemblyToTypeLib_Test)
				{
					
					
				}

				// Method ConvertTypeLibToAssembly
				//		Signature: mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Int32 flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::Boolean unsafeInterfaces
				TEST(mscorlib_System_Runtime_InteropServices_TypeLibConverter_Fixture,ConvertTypeLibToAssembly_1_Test)
				{
					
					
				}

				// Method ConvertTypeLibToAssembly
				//		Signature: mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Runtime::InteropServices::TypeLibImporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::String asmNamespace, mscorlib::System::Version asmVersion
				TEST(mscorlib_System_Runtime_InteropServices_TypeLibConverter_Fixture,ConvertTypeLibToAssembly_2_Test)
				{
					
					
				}

				// Method GetPrimaryInteropAssembly
				//		Signature: mscorlib::System::Guid g, mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 lcid, mscorlib::System::String asmName, mscorlib::System::String asmCodeBase
				TEST(mscorlib_System_Runtime_InteropServices_TypeLibConverter_Fixture,GetPrimaryInteropAssembly_Test)
				{
					
					
				}


			}
		}
	}
}
