// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Reflection
// Name: Assembly
// C++ Typed Name: mscorlib::System::Reflection::Assembly


#include <gtest/gtest.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ManifestResourceInfo.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods Tests
			
			// Method GetObjectData
			//		Signature: mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetObjectData_Test)
			{
				
				
			}

			// Method IsDefined
			//		Signature: mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit
			TEST(mscorlib_System_Reflection_Assembly_Fixture,IsDefined_Test)
			{
				
				
			}

			// Method GetCustomAttributes
			//		Signature: mscorlib::System::Boolean inherit
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetCustomAttributes_1_Test)
			{
				
				
			}

			// Method GetCustomAttributes
			//		Signature: mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetCustomAttributes_2_Test)
			{
				
				
			}

			// Method GetFiles
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetFiles_1_Test)
			{
				
				
			}

			// Method GetFiles
			//		Signature: mscorlib::System::Boolean getResourceModules
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetFiles_2_Test)
			{
				
				
			}

			// Method GetFile
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetFile_Test)
			{
				
				
			}

			// Method GetManifestResourceStream
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetManifestResourceStream_1_Test)
			{
				
				
			}

			// Method GetManifestResourceStream
			//		Signature: mscorlib::System::Type type, mscorlib::System::String name
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetManifestResourceStream_2_Test)
			{
				
				
			}

			// Method GetTypes
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetTypes_Test)
			{
				
				
			}

			// Method GetExportedTypes
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetExportedTypes_Test)
			{
				
				
			}

			// Method GetType
			//		Signature: mscorlib::System::String name, mscorlib::System::Boolean throwOnError
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetType_1_Test)
			{
				
				
			}

			// Method GetType
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetType_2_Test)
			{
				
				
			}

			// Method GetName
			//		Signature: mscorlib::System::Boolean copiedName
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetName_1_Test)
			{
				
				
			}

			// Method GetName
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetName_2_Test)
			{
				
				
			}

			// Method ToString
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,ToString_Test)
			{
				
				
			}

			// Method LoadModule
			//		Signature: mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadModule_1_Test)
			{
				
				
			}

			// Method LoadModule
			//		Signature: mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule, std::vector<mscorlib::System::Byte*> rawSymbolStore
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadModule_2_Test)
			{
				
				
			}

			// Method CreateInstance
			//		Signature: mscorlib::System::String typeName
			TEST(mscorlib_System_Reflection_Assembly_Fixture,CreateInstance_1_Test)
			{
				
				
			}

			// Method CreateInstance
			//		Signature: mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase
			TEST(mscorlib_System_Reflection_Assembly_Fixture,CreateInstance_2_Test)
			{
				
				
			}

			// Method CreateInstance
			//		Signature: mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes
			TEST(mscorlib_System_Reflection_Assembly_Fixture,CreateInstance_3_Test)
			{
				
				
			}

			// Method GetLoadedModules
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetLoadedModules_1_Test)
			{
				
				
			}

			// Method GetModules
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetModules_1_Test)
			{
				
				
			}

			// Method GetManifestResourceNames
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetManifestResourceNames_Test)
			{
				
				
			}

			// Method GetManifestResourceInfo
			//		Signature: mscorlib::System::String resourceName
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetManifestResourceInfo_Test)
			{
				
				
			}

			// Method GetHashCode
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetHashCode_Test)
			{
				
				
			}

			// Method Equals
			//		Signature: mscorlib::System::Object o
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Equals_Test)
			{
				
				
			}

			// Method GetCustomAttributesData
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetCustomAttributesData_Test)
			{
				
				
			}

			// Method GetType
			//		Signature: mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetType_3_Test)
			{
				
				
			}

			// Method GetModule
			//		Signature: mscorlib::System::String name
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetModule_Test)
			{
				
				
			}

			// Method GetReferencedAssemblies
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetReferencedAssemblies_Test)
			{
				
				
			}

			// Method GetModules
			//		Signature: mscorlib::System::Boolean getResourceModules
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetModules_2_Test)
			{
				
				
			}

			// Method GetLoadedModules
			//		Signature: mscorlib::System::Boolean getResourceModules
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetLoadedModules_2_Test)
			{
				
				
			}

			// Method GetSatelliteAssembly
			//		Signature: mscorlib::System::Globalization::CultureInfo culture
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetSatelliteAssembly_1_Test)
			{
				
				
			}

			// Method GetSatelliteAssembly
			//		Signature: mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetSatelliteAssembly_2_Test)
			{
				
				
			}

			//Public Static Methods Tests
			
			// Method CreateQualifiedName
			//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName
			TEST(mscorlib_System_Reflection_Assembly_Fixture,CreateQualifiedName_StaticTest)
			{
				
				
			}

			// Method GetAssembly
			//		Signature: mscorlib::System::Type type
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetAssembly_StaticTest)
			{
				
				
			}

			// Method GetEntryAssembly
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetEntryAssembly_StaticTest)
			{
				
				
			}

			// Method LoadFrom
			//		Signature: mscorlib::System::String assemblyFile
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadFrom_1_StaticTest)
			{
				
				
			}

			// Method LoadFrom
			//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadFrom_2_StaticTest)
			{
				
				
			}

			// Method LoadFrom
			//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadFrom_3_StaticTest)
			{
				
				
			}

			// Method LoadFrom
			//		Signature: mscorlib::System::String assemblyFile, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadFrom_4_StaticTest)
			{
				
				
			}

			// Method UnsafeLoadFrom
			//		Signature: mscorlib::System::String assemblyFile
			TEST(mscorlib_System_Reflection_Assembly_Fixture,UnsafeLoadFrom_StaticTest)
			{
				
				
			}

			// Method LoadFile
			//		Signature: mscorlib::System::String path, mscorlib::System::Security::Policy::Evidence securityEvidence
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadFile_1_StaticTest)
			{
				
				
			}

			// Method LoadFile
			//		Signature: mscorlib::System::String path
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadFile_2_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: mscorlib::System::String assemblyString
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_1_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_2_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: mscorlib::System::Reflection::AssemblyName assemblyRef
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_3_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_4_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_5_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_6_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_7_StaticTest)
			{
				
				
			}

			// Method Load
			//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::SecurityContextSource::__ENUM__ securityContextSource
			TEST(mscorlib_System_Reflection_Assembly_Fixture,Load_8_StaticTest)
			{
				
				
			}

			// Method ReflectionOnlyLoad
			//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly
			TEST(mscorlib_System_Reflection_Assembly_Fixture,ReflectionOnlyLoad_1_StaticTest)
			{
				
				
			}

			// Method ReflectionOnlyLoad
			//		Signature: mscorlib::System::String assemblyString
			TEST(mscorlib_System_Reflection_Assembly_Fixture,ReflectionOnlyLoad_2_StaticTest)
			{
				
				
			}

			// Method ReflectionOnlyLoadFrom
			//		Signature: mscorlib::System::String assemblyFile
			TEST(mscorlib_System_Reflection_Assembly_Fixture,ReflectionOnlyLoadFrom_StaticTest)
			{
				
				
			}

			// Method LoadWithPartialName
			//		Signature: mscorlib::System::String partialName
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadWithPartialName_1_StaticTest)
			{
				
				
			}

			// Method LoadWithPartialName
			//		Signature: mscorlib::System::String partialName, mscorlib::System::Security::Policy::Evidence securityEvidence
			TEST(mscorlib_System_Reflection_Assembly_Fixture,LoadWithPartialName_2_StaticTest)
			{
				
				
			}

			// Method GetExecutingAssembly
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetExecutingAssembly_StaticTest)
			{
				
				
			}

			// Method GetCallingAssembly
			//		Signature: 
			TEST(mscorlib_System_Reflection_Assembly_Fixture,GetCallingAssembly_StaticTest)
			{
				
				
			}

			//Public Properties Tests
			
			// Property CodeBase
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_CodeBase_Test)
			{
				
				
			}

			// Property EscapedCodeBase
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_EscapedCodeBase_Test)
			{
				
				
			}

			// Property FullName
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_FullName_Test)
			{
				
				
			}

			// Property EntryPoint
			//		Return Type: mscorlib::System::Reflection::MethodInfo
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_EntryPoint_Test)
			{
				
				
			}

			// Property Evidence
			//		Return Type: mscorlib::System::Security::Policy::Evidence
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_Evidence_Test)
			{
				
				
			}

			// Property Location
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_Location_Test)
			{
				
				
			}

			// Property ImageRuntimeVersion
			//		Return Type: mscorlib::System::String
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_ImageRuntimeVersion_Test)
			{
				
				
			}

			// Property HostContext
			//		Return Type: mscorlib::System::Int64
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_HostContext_Test)
			{
				
				
			}

			// Property ReflectionOnly
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_ReflectionOnly_Test)
			{
				
				
			}

			// Property PermissionSet
			//		Return Type: mscorlib::System::Security::PermissionSet
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_PermissionSet_Test)
			{
				
				
			}

			// Property SecurityRuleSet
			//		Return Type: mscorlib::System::Security::SecurityRuleSet::__ENUM__
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_SecurityRuleSet_Test)
			{
				
				
			}

			// Property IsFullyTrusted
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_IsFullyTrusted_Test)
			{
				
				
			}

			// Property ManifestModule
			//		Return Type: mscorlib::System::Reflection::Module
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_ManifestModule_Test)
			{
				
				
			}

			// Property GlobalAssemblyCache
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_GlobalAssemblyCache_Test)
			{
				
				
			}

			// Property IsDynamic
			//		Return Type: mscorlib::System::Boolean
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_IsDynamic_Test)
			{
				
				
			}

			// Property DefinedTypes
			//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_DefinedTypes_Test)
			{
				
				
			}

			// Property ExportedTypes
			//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_ExportedTypes_Test)
			{
				
				
			}

			// Property Modules
			//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_Modules_Test)
			{
				
				
			}

			// Property CustomAttributes
			//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>
			//			Property Get Method
			TEST(mscorlib_System_Reflection_Assembly_Fixture,get_CustomAttributes_Test)
			{
				
				
			}


		}
	}
}
