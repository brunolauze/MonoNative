// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Reflection
// Name: AssemblyName
// C++ Typed Name: mscorlib::System::Reflection::AssemblyName


#include <gtest/gtest.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_StrongNameKeyPair.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Constructors Tests
			
			//AssemblyName()
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,DefaultConstructor)
			{
				
				mscorlib::System::Reflection::AssemblyName *value = new mscorlib::System::Reflection::AssemblyName();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//AssemblyName(mscorlib::System::String assemblyName)
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,Constructor_2)
			{
				
				mscorlib::System::Reflection::AssemblyName *value = new mscorlib::System::Reflection::AssemblyName();
				EXPECT_NE(NULL, value->GetNativeObject());
				
				
			}
			
			//Public Methods Tests
			
			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,ToString_Test)
			{
				
				
			}

			// Method GetPublicKey
			//		Signature: 
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,GetPublicKey_Test)
			{
				
				
			}

			// Method GetPublicKeyToken
			//		Signature: 
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,GetPublicKeyToken_Test)
			{
				
				
			}

			// Method SetPublicKey
			//		Signature: std::vector<mscorlib::System::Byte*> publicKey
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,SetPublicKey_Test)
			{
				
				
			}

			// Method SetPublicKeyToken
			//		Signature: std::vector<mscorlib::System::Byte*> publicKeyToken
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,SetPublicKeyToken_Test)
			{
				
				
			}

			// Method GetObjectData
			//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,GetObjectData_Test)
			{
				
				
			}

			// Method Clone
			//		Signature: 
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,Clone_Test)
			{
				
				
			}

			// Method OnDeserialization
			//		Signature: mscorlib::System::Object sender
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,OnDeserialization_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method ReferenceMatchesDefinition
			//		Signature: mscorlib::System::Reflection::AssemblyName reference, mscorlib::System::Reflection::AssemblyName definition
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,ReferenceMatchesDefinition_StaticTest)
			{
				
				
			}

			// Method GetAssemblyName
			//		Signature: mscorlib::System::String assemblyFile
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,GetAssemblyName_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property ProcessorArchitecture
			//		Return Type: mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_ProcessorArchitecture_Test)
			{
				
				
			}

			// Property ProcessorArchitecture
			//		Return Type: mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_ProcessorArchitecture_Test)
			{
				
				
			}

			// Property Name
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_Name_Test)
			{
				
				
			}

			// Property Name
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_Name_Test)
			{
				
				
			}

			// Property CodeBase
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_CodeBase_Test)
			{
				
				
			}

			// Property CodeBase
			//		Return Type: mscorlib::System::String
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_CodeBase_Test)
			{
				
				
			}

			// Property EscapedCodeBase
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_EscapedCodeBase_Test)
			{
				
				
			}

			// Property CultureInfo
			//		Return Type: mscorlib::System::Globalization::CultureInfo
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_CultureInfo_Test)
			{
				
				
			}

			// Property CultureInfo
			//		Return Type: mscorlib::System::Globalization::CultureInfo
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_CultureInfo_Test)
			{
				
				
			}

			// Property Flags
			//		Return Type: mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_Flags_Test)
			{
				
				
			}

			// Property Flags
			//		Return Type: mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_Flags_Test)
			{
				
				
			}

			// Property FullName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_FullName_Test)
			{
				
				
			}

			// Property HashAlgorithm
			//		Return Type: mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_HashAlgorithm_Test)
			{
				
				
			}

			// Property HashAlgorithm
			//		Return Type: mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_HashAlgorithm_Test)
			{
				
				
			}

			// Property KeyPair
			//		Return Type: mscorlib::System::Reflection::StrongNameKeyPair
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_KeyPair_Test)
			{
				
				
			}

			// Property KeyPair
			//		Return Type: mscorlib::System::Reflection::StrongNameKeyPair
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_KeyPair_Test)
			{
				
				
			}

			// Property Version
			//		Return Type: mscorlib::System::Version
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_Version_Test)
			{
				
				
			}

			// Property Version
			//		Return Type: mscorlib::System::Version
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_Version_Test)
			{
				
				
			}

			// Property VersionCompatibility
			//		Return Type: mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_VersionCompatibility_Test)
			{
				
				
			}

			// Property VersionCompatibility
			//		Return Type: mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_VersionCompatibility_Test)
			{
				
				
			}

			// Property CultureName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_CultureName_Test)
			{
				
				
			}

			// Property ContentType
			//		Return Type: mscorlib::System::Reflection::AssemblyContentType::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,get_ContentType_Test)
			{
				
				
			}

			// Property ContentType
			//		Return Type: mscorlib::System::Reflection::AssemblyContentType::__ENUM__
			//			Property Set Method
			TEST(mscorlib_System_Reflection_AssemblyName_Fixture,set_ContentType_Test)
			{
				
				
			}


		}
	}
}
