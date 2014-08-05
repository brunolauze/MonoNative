#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_MODULEBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_MODULEBUILDER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Module.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__ModuleBuilder.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodAttributes.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CallingConvention.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CharSet.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeAttributes.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_PackingSize.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceWriter.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ResourceAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PortableExecutableKinds.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ImageFileMachine.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Type;
		class Guid;
		class ModuleHandle;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class FieldBuilder;
				class MethodBuilder;
				class TypeBuilder;
				class EnumBuilder;
				class CustomAttributeBuilder;
				class MethodToken;
				class FieldToken;
				class SignatureToken;
				class SignatureHelper;
				class StringToken;
				class TypeToken;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			class ConstructorInfo;
			class FieldInfo;
			class Assembly;
			class MemberInfo;
			class MethodBase;
			class Binder;
			class ParameterModifier;
			class CustomAttributeData;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolWriter;
				class ISymbolDocumentWriter;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{
				namespace X509Certificates
				{

					class X509Certificate;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class ModuleBuilder
					: public mscorlib::System::Reflection::Module
					, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
					, public virtual mscorlib::System::Runtime::InteropServices::_Module
					, public virtual mscorlib::System::Runtime::InteropServices::_ModuleBuilder
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				{
				public:
					ModuleBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::Module(nativeTypeInfo)
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_Module(NULL)
					, mscorlib::System::Runtime::InteropServices::_ModuleBuilder(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					{
					};
				
					ModuleBuilder(MonoObject *nativeObject)
					: mscorlib::System::Reflection::Module(nativeObject)
					, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Module(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_ModuleBuilder(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					{
					};
				
					~ModuleBuilder()
					{
					};
				

					ModuleBuilder & operator=(ModuleBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Boolean  IsTransient();
					void  CreateGlobalFunctions();
					mscorlib::System::Reflection::Emit::FieldBuilder  DefineInitializedData(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes);
					mscorlib::System::Reflection::Emit::FieldBuilder  DefineInitializedData(const char *name, std::vector<mscorlib::System::Byte*> data, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes);
					mscorlib::System::Reflection::Emit::FieldBuilder  DefineUninitializedData(mscorlib::System::String name, mscorlib::System::Int32 size, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes);
					mscorlib::System::Reflection::Emit::FieldBuilder  DefineUninitializedData(const char *name, mscorlib::System::Int32 size, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefineGlobalMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefineGlobalMethod(const char *name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefineGlobalMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefineGlobalMethod(const char *name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefineGlobalMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefineGlobalMethod(const char *name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefinePInvokeMethod(const char *name, const char *dllName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::String entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet);
					mscorlib::System::Reflection::Emit::MethodBuilder  DefinePInvokeMethod(const char *name, const char *dllName, const char *entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, std::vector<mscorlib::System::Type*> interfaces);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, std::vector<mscorlib::System::Type*> interfaces);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Int32 typesize);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Int32 typesize);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packsize);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packsize);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packingSize, mscorlib::System::Int32 typesize);
					mscorlib::System::Reflection::Emit::TypeBuilder  DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packingSize, mscorlib::System::Int32 typesize);
					mscorlib::System::Reflection::MethodInfo  GetArrayMethod(mscorlib::System::Type arrayClass, mscorlib::System::String methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::MethodInfo  GetArrayMethod(mscorlib::System::Type arrayClass, const char *methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::EnumBuilder  DefineEnum(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ visibility, mscorlib::System::Type underlyingType);
					mscorlib::System::Reflection::Emit::EnumBuilder  DefineEnum(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ visibility, mscorlib::System::Type underlyingType);
					virtual mscorlib::System::Type  GetType(mscorlib::System::String className) override;
					virtual mscorlib::System::Type  GetType(const char *className) override;
					virtual mscorlib::System::Type  GetType(mscorlib::System::String className, mscorlib::System::Boolean ignoreCase) override;
					virtual mscorlib::System::Type  GetType(const char *className, mscorlib::System::Boolean ignoreCase) override;
					virtual mscorlib::System::Type  GetType(mscorlib::System::String className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase) override;
					virtual mscorlib::System::Type  GetType(const char *className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase) override;
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					mscorlib::System::Diagnostics::SymbolStore::ISymbolWriter  GetSymWriter();
					mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter  DefineDocument(mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType);
					mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter  DefineDocument(const char *url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType);
					virtual std::vector<mscorlib::System::Type*>  GetTypes() override;
					mscorlib::System::Resources::IResourceWriter  DefineResource(mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					mscorlib::System::Resources::IResourceWriter  DefineResource(const char *name, const char *description, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					mscorlib::System::Resources::IResourceWriter  DefineResource(mscorlib::System::String name, mscorlib::System::String description);
					mscorlib::System::Resources::IResourceWriter  DefineResource(const char *name, const char *description);
					void  DefineUnmanagedResource(std::vector<mscorlib::System::Byte*> resource);
					void  DefineUnmanagedResource(mscorlib::System::String resourceFileName);
					void  DefineUnmanagedResource(const char *resourceFileName);
					void  DefineManifestResource(mscorlib::System::String name, mscorlib::System::IO::Stream stream, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					void  DefineManifestResource(const char *name, mscorlib::System::IO::Stream stream, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					void  SetSymCustomAttribute(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data);
					void  SetSymCustomAttribute(const char *name, std::vector<mscorlib::System::Byte*> data);
					void  SetUserEntryPoint(mscorlib::System::Reflection::MethodInfo entryPoint);
					mscorlib::System::Reflection::Emit::MethodToken  GetMethodToken(mscorlib::System::Reflection::MethodInfo method);
					mscorlib::System::Reflection::Emit::MethodToken  GetArrayMethodToken(mscorlib::System::Type arrayClass, mscorlib::System::String methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::MethodToken  GetArrayMethodToken(mscorlib::System::Type arrayClass, const char *methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					mscorlib::System::Reflection::Emit::MethodToken  GetConstructorToken(mscorlib::System::Reflection::ConstructorInfo con);
					mscorlib::System::Reflection::Emit::FieldToken  GetFieldToken(mscorlib::System::Reflection::FieldInfo field);
					mscorlib::System::Reflection::Emit::SignatureToken  GetSignatureToken(std::vector<mscorlib::System::Byte*> sigBytes, mscorlib::System::Int32 sigLength);
					mscorlib::System::Reflection::Emit::SignatureToken  GetSignatureToken(mscorlib::System::Reflection::Emit::SignatureHelper sigHelper);
					mscorlib::System::Reflection::Emit::StringToken  GetStringConstant(mscorlib::System::String str);
					mscorlib::System::Reflection::Emit::StringToken  GetStringConstant(const char *str);
					mscorlib::System::Reflection::Emit::TypeToken  GetTypeToken(mscorlib::System::Type type);
					mscorlib::System::Reflection::Emit::TypeToken  GetTypeToken(mscorlib::System::String name);
					mscorlib::System::Reflection::Emit::TypeToken  GetTypeToken(const char *name);
					virtual mscorlib::System::Boolean  IsResource() override;
					virtual mscorlib::System::Reflection::FieldInfo  ResolveField(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments) override;
					virtual mscorlib::System::Reflection::MemberInfo  ResolveMember(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments) override;
					virtual mscorlib::System::Reflection::MethodBase  ResolveMethod(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments) override;
					virtual mscorlib::System::String  ResolveString(mscorlib::System::Int32 metadataToken) override;
					virtual std::vector<mscorlib::System::Byte*>  ResolveSignature(mscorlib::System::Int32 metadataToken) override;
					virtual mscorlib::System::Type  ResolveType(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments) override;
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual mscorlib::System::Reflection::FieldInfo  GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual mscorlib::System::Reflection::FieldInfo  GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr) override;
					virtual std::vector<mscorlib::System::Reflection::FieldInfo*>  GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags) override;
					virtual std::vector<mscorlib::System::Reflection::MethodInfo*>  GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_FullyQualifiedName)) mscorlib::System::String  FullyQualifiedName;
					__declspec(property(get=get_Assembly)) mscorlib::System::Reflection::Assembly  Assembly;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_ScopeName)) mscorlib::System::String  ScopeName;
					__declspec(property(get=get_ModuleVersionId)) mscorlib::System::Guid  ModuleVersionId;
					__declspec(property(get=get_MetadataToken)) mscorlib::System::Int32  MetadataToken;
					__declspec(property(get=get_ModuleHandle)) mscorlib::System::ModuleHandle  ModuleHandle;
					__declspec(property(get=get_MDStreamVersion)) mscorlib::System::Int32  MDStreamVersion;
					__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

					//Get Set Properties Methods
					//	Get:FullyQualifiedName
					mscorlib::System::String  get_FullyQualifiedName() const;

					//	Get:Assembly
					mscorlib::System::Reflection::Assembly  get_Assembly() const;

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:ScopeName
					mscorlib::System::String  get_ScopeName() const;

					//	Get:ModuleVersionId
					mscorlib::System::Guid  get_ModuleVersionId() const;

					//	Get:MetadataToken
					mscorlib::System::Int32  get_MetadataToken() const;

					//	Get:ModuleHandle
					mscorlib::System::ModuleHandle  get_ModuleHandle() const;

					//	Get:MDStreamVersion
					mscorlib::System::Int32  get_MDStreamVersion() const;

					//	Get:CustomAttributes
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  get_CustomAttributes() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
