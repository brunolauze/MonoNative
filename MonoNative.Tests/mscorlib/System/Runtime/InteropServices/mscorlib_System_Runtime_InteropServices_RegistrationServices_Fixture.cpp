// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Runtime.InteropServices
// Name: RegistrationServices
// C++ Typed Name: mscorlib::System::Runtime::InteropServices::RegistrationServices


#include <gtest/gtest.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_RegistrationServices.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Constructors Tests
				
				//RegistrationServices()
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,DefaultConstructor)
				{
					
					mscorlib::System::Runtime::InteropServices::RegistrationServices *value = new mscorlib::System::Runtime::InteropServices::RegistrationServices();
					EXPECT_NE(NULL, value->GetNativeObject());
					
					
				}
				
				//Public Methods Tests
				
				// Method GetManagedCategoryGuid
				//		Signature: 
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,GetManagedCategoryGuid_Test)
				{
					
					
				}

				// Method GetProgIdForType
				//		Signature: mscorlib::System::Type type
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,GetProgIdForType_Test)
				{
					
					
				}

				// Method GetRegistrableTypesInAssembly
				//		Signature: mscorlib::System::Reflection::Assembly assembly
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,GetRegistrableTypesInAssembly_Test)
				{
					
					
				}

				// Method RegisterAssembly
				//		Signature: mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Runtime::InteropServices::AssemblyRegistrationFlags::__ENUM__ flags
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,RegisterAssembly_Test)
				{
					
					
				}

				// Method RegisterTypeForComClients
				//		Signature: mscorlib::System::Type type, mscorlib::System::Guid g
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,RegisterTypeForComClients_1_Test)
				{
					
					
				}

				// Method TypeRepresentsComType
				//		Signature: mscorlib::System::Type type
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,TypeRepresentsComType_Test)
				{
					
					
				}

				// Method TypeRequiresRegistration
				//		Signature: mscorlib::System::Type type
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,TypeRequiresRegistration_Test)
				{
					
					
				}

				// Method UnregisterAssembly
				//		Signature: mscorlib::System::Reflection::Assembly assembly
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,UnregisterAssembly_Test)
				{
					
					
				}

				// Method RegisterTypeForComClients
				//		Signature: mscorlib::System::Type type, mscorlib::System::Runtime::InteropServices::RegistrationClassContext::__ENUM__ classContext, mscorlib::System::Runtime::InteropServices::RegistrationConnectionType::__ENUM__ flags
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,RegisterTypeForComClients_2_Test)
				{
					
					
				}

				// Method UnregisterTypeForComClients
				//		Signature: mscorlib::System::Int32 cookie
				TEST(mscorlib_System_Runtime_InteropServices_RegistrationServices_Fixture,UnregisterTypeForComClients_Test)
				{
					
					
				}


			}
		}
	}
}
