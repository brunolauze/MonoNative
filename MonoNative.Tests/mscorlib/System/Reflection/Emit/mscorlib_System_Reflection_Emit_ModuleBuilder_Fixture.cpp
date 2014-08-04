// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System.Reflection.Emit
// Name: ModuleBuilder
// C++ Typed Name: mscorlib::System::Reflection::Emit::ModuleBuilder


#include <gtest/gtest.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ModuleBuilder.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodBuilder.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_EnumBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldToken.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_SignatureToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_SignatureHelper.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_StringToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeToken.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_ModuleHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509Certificate.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods Tests
				
				// Method IsTransient
				//		Signature: 
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,IsTransient_Test)
				{
					
					
				}

				// Method CreateGlobalFunctions
				//		Signature: 
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,CreateGlobalFunctions_Test)
				{
					
					
				}

				// Method DefineInitializedData
				//		Signature: mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineInitializedData_Test)
				{
					
					
				}

				// Method DefineUninitializedData
				//		Signature: mscorlib::System::String name, mscorlib::System::Int32 size, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineUninitializedData_Test)
				{
					
					
				}

				// Method DefineGlobalMethod
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineGlobalMethod_1_Test)
				{
					
					
				}

				// Method DefineGlobalMethod
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineGlobalMethod_2_Test)
				{
					
					
				}

				// Method DefineGlobalMethod
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineGlobalMethod_3_Test)
				{
					
					
				}

				// Method DefinePInvokeMethod
				//		Signature: mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefinePInvokeMethod_1_Test)
				{
					
					
				}

				// Method DefinePInvokeMethod
				//		Signature: mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::String entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefinePInvokeMethod_2_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_1_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_2_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_3_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, std::vector<mscorlib::System::Type*> interfaces
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_4_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Int32 typesize
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_5_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packsize
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_6_Test)
				{
					
					
				}

				// Method DefineType
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packingSize, mscorlib::System::Int32 typesize
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineType_7_Test)
				{
					
					
				}

				// Method GetArrayMethod
				//		Signature: mscorlib::System::Type arrayClass, mscorlib::System::String methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetArrayMethod_Test)
				{
					
					
				}

				// Method DefineEnum
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ visibility, mscorlib::System::Type underlyingType
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineEnum_Test)
				{
					
					
				}

				// Method GetType
				//		Signature: mscorlib::System::String className
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetType_1_Test)
				{
					
					
				}

				// Method GetType
				//		Signature: mscorlib::System::String className, mscorlib::System::Boolean ignoreCase
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetType_2_Test)
				{
					
					
				}

				// Method GetType
				//		Signature: mscorlib::System::String className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetType_3_Test)
				{
					
					
				}

				// Method SetCustomAttribute
				//		Signature: mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,SetCustomAttribute_1_Test)
				{
					
					
				}

				// Method SetCustomAttribute
				//		Signature: mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,SetCustomAttribute_2_Test)
				{
					
					
				}

				// Method GetSymWriter
				//		Signature: 
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetSymWriter_Test)
				{
					
					
				}

				// Method DefineDocument
				//		Signature: mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineDocument_Test)
				{
					
					
				}

				// Method GetTypes
				//		Signature: 
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetTypes_Test)
				{
					
					
				}

				// Method DefineResource
				//		Signature: mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineResource_1_Test)
				{
					
					
				}

				// Method DefineResource
				//		Signature: mscorlib::System::String name, mscorlib::System::String description
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineResource_2_Test)
				{
					
					
				}

				// Method DefineUnmanagedResource
				//		Signature: std::vector<mscorlib::System::Byte*> resource
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineUnmanagedResource_1_Test)
				{
					
					
				}

				// Method DefineUnmanagedResource
				//		Signature: mscorlib::System::String resourceFileName
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineUnmanagedResource_2_Test)
				{
					
					
				}

				// Method DefineManifestResource
				//		Signature: mscorlib::System::String name, mscorlib::System::IO::Stream stream, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,DefineManifestResource_Test)
				{
					
					
				}

				// Method SetSymCustomAttribute
				//		Signature: mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,SetSymCustomAttribute_Test)
				{
					
					
				}

				// Method SetUserEntryPoint
				//		Signature: mscorlib::System::Reflection::MethodInfo entryPoint
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,SetUserEntryPoint_Test)
				{
					
					
				}

				// Method GetMethodToken
				//		Signature: mscorlib::System::Reflection::MethodInfo method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetMethodToken_Test)
				{
					
					
				}

				// Method GetArrayMethodToken
				//		Signature: mscorlib::System::Type arrayClass, mscorlib::System::String methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetArrayMethodToken_Test)
				{
					
					
				}

				// Method GetConstructorToken
				//		Signature: mscorlib::System::Reflection::ConstructorInfo con
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetConstructorToken_Test)
				{
					
					
				}

				// Method GetFieldToken
				//		Signature: mscorlib::System::Reflection::FieldInfo field
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetFieldToken_Test)
				{
					
					
				}

				// Method GetSignatureToken
				//		Signature: std::vector<mscorlib::System::Byte*> sigBytes, mscorlib::System::Int32 sigLength
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetSignatureToken_1_Test)
				{
					
					
				}

				// Method GetSignatureToken
				//		Signature: mscorlib::System::Reflection::Emit::SignatureHelper sigHelper
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetSignatureToken_2_Test)
				{
					
					
				}

				// Method GetStringConstant
				//		Signature: mscorlib::System::String str
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetStringConstant_Test)
				{
					
					
				}

				// Method GetTypeToken
				//		Signature: mscorlib::System::Type type
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetTypeToken_1_Test)
				{
					
					
				}

				// Method GetTypeToken
				//		Signature: mscorlib::System::String name
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetTypeToken_2_Test)
				{
					
					
				}

				// Method IsResource
				//		Signature: 
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,IsResource_Test)
				{
					
					
				}

				// Method ResolveField
				//		Signature: mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,ResolveField_Test)
				{
					
					
				}

				// Method ResolveMember
				//		Signature: mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,ResolveMember_Test)
				{
					
					
				}

				// Method ResolveMethod
				//		Signature: mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,ResolveMethod_Test)
				{
					
					
				}

				// Method ResolveString
				//		Signature: mscorlib::System::Int32 metadataToken
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,ResolveString_Test)
				{
					
					
				}

				// Method ResolveSignature
				//		Signature: mscorlib::System::Int32 metadataToken
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,ResolveSignature_Test)
				{
					
					
				}

				// Method ResolveType
				//		Signature: mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,ResolveType_Test)
				{
					
					
				}

				// Method Equals
				//		Signature: mscorlib::System::Object obj
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,Equals_Test)
				{
					
					
				}

				// Method GetHashCode
				//		Signature: 
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetHashCode_Test)
				{
					
					
				}

				// Method IsDefined
				//		Signature: mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,IsDefined_Test)
				{
					
					
				}

				// Method GetCustomAttributes
				//		Signature: mscorlib::System::Boolean inherit
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetCustomAttributes_1_Test)
				{
					
					
				}

				// Method GetCustomAttributes
				//		Signature: mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetCustomAttributes_2_Test)
				{
					
					
				}

				// Method GetField
				//		Signature: mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetField_Test)
				{
					
					
				}

				// Method GetFields
				//		Signature: mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetFields_Test)
				{
					
					
				}

				// Method GetMethods
				//		Signature: mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,GetMethods_Test)
				{
					
					
				}

				//Public Properties Tests
				
				// Property FullyQualifiedName
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_FullyQualifiedName_Test)
				{
					
					
				}

				// Property Assembly
				//		Return Type: mscorlib::System::Reflection::Assembly
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_Assembly_Test)
				{
					
					
				}

				// Property Name
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_Name_Test)
				{
					
					
				}

				// Property ScopeName
				//		Return Type: mscorlib::System::String
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_ScopeName_Test)
				{
					
					
				}

				// Property ModuleVersionId
				//		Return Type: mscorlib::System::Guid
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_ModuleVersionId_Test)
				{
					
					
				}

				// Property MetadataToken
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_MetadataToken_Test)
				{
					
					
				}

				// Property ModuleHandle
				//		Return Type: mscorlib::System::ModuleHandle
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_ModuleHandle_Test)
				{
					
					
				}

				// Property MDStreamVersion
				//		Return Type: mscorlib::System::Int32
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_MDStreamVersion_Test)
				{
					
					
				}

				// Property CustomAttributes
				//		Return Type: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>
				//			Property Get Method
				TEST(mscorlib_System_Reflection_Emit_ModuleBuilder_Fixture,get_CustomAttributes_Test)
				{
					
					
				}


			}
		}
	}
}
