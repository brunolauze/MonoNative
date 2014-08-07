#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_H

#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__AssemblyBuilder.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Assembly.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IEvidenceFactory.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ResourceAttributes.h>
#include <mscorlib/System/Resources/mscorlib_System_Resources_IResourceWriter.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PortableExecutableKinds.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ImageFileMachine.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_PEFileKinds.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityRuleSet.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Type;
		class Version;
		class ResolveEventArgs;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodInfo;
			class ManifestResourceInfo;
			class ConstructorInfo;
			class Module;
			class AssemblyName;
			class Binder;
			class CustomAttributeData;
			class TypeInfo;
			

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

				class ModuleBuilder;
				class CustomAttributeBuilder;
				

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

			class FileStream;
			class Stream;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class Evidence;
				

			}
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

			class PermissionSet;
			

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

				class AssemblyBuilder
					: public mscorlib::System::Reflection::Assembly
					, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
					, public virtual mscorlib::System::Runtime::InteropServices::_AssemblyBuilder
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::Runtime::InteropServices::_Assembly
					, public virtual mscorlib::System::Security::IEvidenceFactory
				{
				public:
					AssemblyBuilder(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Reflection::Assembly(nativeTypeInfo)
					, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
					, mscorlib::System::Runtime::InteropServices::_AssemblyBuilder(NULL)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::Runtime::InteropServices::_Assembly(NULL)
					, mscorlib::System::Security::IEvidenceFactory(NULL)
					{
					};
				
					AssemblyBuilder(MonoObject *nativeObject)
					: mscorlib::System::Reflection::Assembly(nativeObject)
					, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_AssemblyBuilder(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Assembly(nativeObject)
					, mscorlib::System::Security::IEvidenceFactory(nativeObject)
					{
					};
				
					~AssemblyBuilder()
					{
					};
				

					AssemblyBuilder & operator=(AssemblyBuilder &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(AssemblyBuilder &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddResourceFile(mscorlib::System::String name, mscorlib::System::String fileName);
					void  AddResourceFile(const char *name, const char *fileName);
					void  AddResourceFile(mscorlib::System::String name, mscorlib::System::String fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					void  AddResourceFile(const char *name, const char *fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(mscorlib::System::String name);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(const char *name);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(mscorlib::System::String name, mscorlib::System::Boolean emitSymbolInfo);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(const char *name, mscorlib::System::Boolean emitSymbolInfo);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(mscorlib::System::String name, mscorlib::System::String fileName);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(const char *name, const char *fileName);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(mscorlib::System::String name, mscorlib::System::String fileName, mscorlib::System::Boolean emitSymbolInfo);
					mscorlib::System::Reflection::Emit::ModuleBuilder  DefineDynamicModule(const char *name, const char *fileName, mscorlib::System::Boolean emitSymbolInfo);
					mscorlib::System::Resources::IResourceWriter  DefineResource(mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::String fileName);
					mscorlib::System::Resources::IResourceWriter  DefineResource(const char *name, const char *description, const char *fileName);
					mscorlib::System::Resources::IResourceWriter  DefineResource(mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::String fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					mscorlib::System::Resources::IResourceWriter  DefineResource(const char *name, const char *description, const char *fileName, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute);
					void  DefineUnmanagedResource(std::vector<mscorlib::System::Byte*> resource);
					void  DefineUnmanagedResource(mscorlib::System::String resourceFileName);
					void  DefineUnmanagedResource(const char *resourceFileName);
					void  DefineVersionInfoResource();
					void  DefineVersionInfoResource(mscorlib::System::String product, mscorlib::System::String productVersion, mscorlib::System::String company, mscorlib::System::String copyright, mscorlib::System::String trademark);
					void  DefineVersionInfoResource(const char *product, const char *productVersion, const char *company, const char *copyright, const char *trademark);
					mscorlib::System::Reflection::Emit::ModuleBuilder  GetDynamicModule(mscorlib::System::String name);
					mscorlib::System::Reflection::Emit::ModuleBuilder  GetDynamicModule(const char *name);
					virtual std::vector<mscorlib::System::Type*>  GetExportedTypes() override;
					virtual mscorlib::System::IO::FileStream  GetFile(mscorlib::System::String name) override;
					virtual mscorlib::System::IO::FileStream  GetFile(const char *name) override;
					virtual std::vector<mscorlib::System::IO::FileStream*>  GetFiles(mscorlib::System::Boolean getResourceModules) override;
					virtual mscorlib::System::Reflection::ManifestResourceInfo  GetManifestResourceInfo(mscorlib::System::String resourceName) override;
					virtual mscorlib::System::Reflection::ManifestResourceInfo  GetManifestResourceInfo(const char *resourceName) override;
					virtual std::vector<mscorlib::System::String*>  GetManifestResourceNames() override;
					virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::String name) override;
					virtual mscorlib::System::IO::Stream  GetManifestResourceStream(const char *name) override;
					virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::Type type, mscorlib::System::String name) override;
					virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::Type type, const char *name) override;
					void  Save(mscorlib::System::String assemblyFileName, mscorlib::System::Reflection::PortableExecutableKinds::__ENUM__ portableExecutableKind, mscorlib::System::Reflection::ImageFileMachine::__ENUM__ imageFileMachine);
					void  Save(const char *assemblyFileName, mscorlib::System::Reflection::PortableExecutableKinds::__ENUM__ portableExecutableKind, mscorlib::System::Reflection::ImageFileMachine::__ENUM__ imageFileMachine);
					void  Save(mscorlib::System::String assemblyFileName);
					void  Save(const char *assemblyFileName);
					void  SetEntryPoint(mscorlib::System::Reflection::MethodInfo entryMethod);
					void  SetEntryPoint(mscorlib::System::Reflection::MethodInfo entryMethod, mscorlib::System::Reflection::Emit::PEFileKinds::__ENUM__ fileKind);
					void  SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder);
					void  SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute);
					virtual mscorlib::System::Type  GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase) override;
					virtual mscorlib::System::Type  GetType(const char *name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase) override;
					virtual mscorlib::System::Reflection::Module  GetModule(mscorlib::System::String name) override;
					virtual mscorlib::System::Reflection::Module  GetModule(const char *name) override;
					virtual std::vector<mscorlib::System::Reflection::Module*>  GetModules(mscorlib::System::Boolean getResourceModules) override;
					virtual mscorlib::System::Reflection::AssemblyName  GetName(mscorlib::System::Boolean copiedName) override;
					virtual std::vector<mscorlib::System::Reflection::AssemblyName*>  GetReferencedAssemblies() override;
					virtual std::vector<mscorlib::System::Reflection::Module*>  GetLoadedModules(mscorlib::System::Boolean getResourceModules) override;
					virtual mscorlib::System::Reflection::Assembly  GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture) override;
					virtual mscorlib::System::Reflection::Assembly  GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version) override;
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit) override;
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CodeBase)) mscorlib::System::String  CodeBase;
					__declspec(property(get=get_EntryPoint)) mscorlib::System::Reflection::MethodInfo  EntryPoint;
					__declspec(property(get=get_Location)) mscorlib::System::String  Location;
					__declspec(property(get=get_ImageRuntimeVersion)) mscorlib::System::String  ImageRuntimeVersion;
					__declspec(property(get=get_ReflectionOnly)) mscorlib::System::Boolean  ReflectionOnly;
					__declspec(property(get=get_ManifestModule)) mscorlib::System::Reflection::Module  ManifestModule;
					__declspec(property(get=get_GlobalAssemblyCache)) mscorlib::System::Boolean  GlobalAssemblyCache;
					__declspec(property(get=get_IsDynamic)) mscorlib::System::Boolean  IsDynamic;
					__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
					__declspec(property(get=get_EscapedCodeBase)) mscorlib::System::String  EscapedCodeBase;
					__declspec(property(get=get_Evidence)) mscorlib::System::Security::Policy::Evidence  Evidence;
					__declspec(property(get=get_HostContext)) mscorlib::System::Int64  HostContext;
					__declspec(property(get=get_PermissionSet)) mscorlib::System::Security::PermissionSet  PermissionSet;
					__declspec(property(get=get_SecurityRuleSet)) mscorlib::System::Security::SecurityRuleSet::__ENUM__  SecurityRuleSet;
					__declspec(property(get=get_IsFullyTrusted)) mscorlib::System::Boolean  IsFullyTrusted;
					__declspec(property(get=get_DefinedTypes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  DefinedTypes;
					__declspec(property(get=get_ExportedTypes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  ExportedTypes;
					__declspec(property(get=get_Modules)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>  Modules;
					__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

					//Get Set Properties Methods
					//	Get:CodeBase
					mscorlib::System::String  get_CodeBase() const;

					//	Get:EntryPoint
					mscorlib::System::Reflection::MethodInfo  get_EntryPoint() const;

					//	Get:Location
					mscorlib::System::String  get_Location() const;

					//	Get:ImageRuntimeVersion
					mscorlib::System::String  get_ImageRuntimeVersion() const;

					//	Get:ReflectionOnly
					mscorlib::System::Boolean  get_ReflectionOnly() const;

					//	Get:ManifestModule
					mscorlib::System::Reflection::Module  get_ManifestModule() const;

					//	Get:GlobalAssemblyCache
					mscorlib::System::Boolean  get_GlobalAssemblyCache() const;

					//	Get:IsDynamic
					mscorlib::System::Boolean  get_IsDynamic() const;

					//	Get:FullName
					mscorlib::System::String  get_FullName() const;

					//	Get:EscapedCodeBase
					mscorlib::System::String  get_EscapedCodeBase() const;

					//	Get:Evidence
					mscorlib::System::Security::Policy::Evidence  get_Evidence() const;

					//	Get:HostContext
					mscorlib::System::Int64  get_HostContext() const;

					//	Get:PermissionSet
					mscorlib::System::Security::PermissionSet  get_PermissionSet() const;

					//	Get:SecurityRuleSet
					mscorlib::System::Security::SecurityRuleSet::__ENUM__  get_SecurityRuleSet() const;

					//	Get:IsFullyTrusted
					mscorlib::System::Boolean  get_IsFullyTrusted() const;

					//	Get:DefinedTypes
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  get_DefinedTypes() const;

					//	Get:ExportedTypes
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  get_ExportedTypes() const;

					//	Get:Modules
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>  get_Modules() const;

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
