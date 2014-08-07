#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Assembly.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IEvidenceFactory.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityRuleSet.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorithm.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityContextSource.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Module;
			class MethodInfo;
			class AssemblyName;
			class Binder;
			class ManifestResourceInfo;
			class CustomAttributeData;
			class TypeInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class ResolveEventArgs;
		class String;
		class Type;
		class Byte;
		class Version;
		

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

			class Assembly
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Reflection::ICustomAttributeProvider
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::Runtime::InteropServices::_Assembly
				, public virtual mscorlib::System::Security::IEvidenceFactory
			{
			public:
				Assembly(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Reflection::ICustomAttributeProvider(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_Assembly(NULL)
				, mscorlib::System::Security::IEvidenceFactory(NULL)
				{
				};
			
				Assembly(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Reflection::ICustomAttributeProvider(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_Assembly(nativeObject)
				, mscorlib::System::Security::IEvidenceFactory(nativeObject)
				{
				};
			
				~Assembly()
				{
				};
			

				Assembly & operator=(Assembly &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Assembly &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
				virtual std::vector<mscorlib::System::IO::FileStream*>  GetFiles();
				virtual std::vector<mscorlib::System::IO::FileStream*>  GetFiles(mscorlib::System::Boolean getResourceModules);
				virtual mscorlib::System::IO::FileStream  GetFile(mscorlib::System::String name);
				virtual mscorlib::System::IO::FileStream  GetFile(const char *name);
				virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::String name);
				virtual mscorlib::System::IO::Stream  GetManifestResourceStream(const char *name);
				virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::Type type, mscorlib::System::String name);
				virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::Type type, const char *name);
				virtual std::vector<mscorlib::System::Type*>  GetTypes();
				virtual std::vector<mscorlib::System::Type*>  GetExportedTypes();
				virtual mscorlib::System::Type  GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError);
				virtual mscorlib::System::Type  GetType(const char *name, mscorlib::System::Boolean throwOnError);
				virtual mscorlib::System::Type  GetType(mscorlib::System::String name);
				virtual mscorlib::System::Type  GetType(const char *name);
				virtual mscorlib::System::Reflection::AssemblyName  GetName(mscorlib::System::Boolean copiedName);
				virtual mscorlib::System::Reflection::AssemblyName  GetName();
				virtual mscorlib::System::String  ToString() override;
				static mscorlib::System::String  CreateQualifiedName(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
				static mscorlib::System::String  CreateQualifiedName(const char *assemblyName, const char *typeName);
				static mscorlib::System::Reflection::Assembly  GetAssembly(mscorlib::System::Type type);
				static mscorlib::System::Reflection::Assembly  GetEntryAssembly();
				static mscorlib::System::Reflection::Assembly  LoadFrom(mscorlib::System::String assemblyFile);
				static mscorlib::System::Reflection::Assembly  LoadFrom(const char *assemblyFile);
				static mscorlib::System::Reflection::Assembly  LoadFrom(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence);
				static mscorlib::System::Reflection::Assembly  LoadFrom(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence);
				static mscorlib::System::Reflection::Assembly  LoadFrom(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
				static mscorlib::System::Reflection::Assembly  LoadFrom(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence securityEvidence, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
				static mscorlib::System::Reflection::Assembly  LoadFrom(mscorlib::System::String assemblyFile, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
				static mscorlib::System::Reflection::Assembly  LoadFrom(const char *assemblyFile, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
				static mscorlib::System::Reflection::Assembly  UnsafeLoadFrom(mscorlib::System::String assemblyFile);
				static mscorlib::System::Reflection::Assembly  UnsafeLoadFrom(const char *assemblyFile);
				static mscorlib::System::Reflection::Assembly  LoadFile(mscorlib::System::String path, mscorlib::System::Security::Policy::Evidence securityEvidence);
				static mscorlib::System::Reflection::Assembly  LoadFile(const char *path, mscorlib::System::Security::Policy::Evidence securityEvidence);
				static mscorlib::System::Reflection::Assembly  LoadFile(mscorlib::System::String path);
				static mscorlib::System::Reflection::Assembly  LoadFile(const char *path);
				static mscorlib::System::Reflection::Assembly  Load(mscorlib::System::String assemblyString);
				static mscorlib::System::Reflection::Assembly  Load(const char *assemblyString);
				static mscorlib::System::Reflection::Assembly  Load(mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity);
				static mscorlib::System::Reflection::Assembly  Load(const char *assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity);
				static mscorlib::System::Reflection::Assembly  Load(mscorlib::System::Reflection::AssemblyName assemblyRef);
				static mscorlib::System::Reflection::Assembly  Load(mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity);
				static mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly);
				static mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore);
				static mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence);
				static mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::SecurityContextSource::__ENUM__ securityContextSource);
				static mscorlib::System::Reflection::Assembly  ReflectionOnlyLoad(std::vector<mscorlib::System::Byte*> rawAssembly);
				static mscorlib::System::Reflection::Assembly  ReflectionOnlyLoad(mscorlib::System::String assemblyString);
				static mscorlib::System::Reflection::Assembly  ReflectionOnlyLoad(const char *assemblyString);
				static mscorlib::System::Reflection::Assembly  ReflectionOnlyLoadFrom(mscorlib::System::String assemblyFile);
				static mscorlib::System::Reflection::Assembly  ReflectionOnlyLoadFrom(const char *assemblyFile);
				static mscorlib::System::Reflection::Assembly  LoadWithPartialName(mscorlib::System::String partialName);
				static mscorlib::System::Reflection::Assembly  LoadWithPartialName(const char *partialName);
				virtual mscorlib::System::Reflection::Module  LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule);
				virtual mscorlib::System::Reflection::Module  LoadModule(const char *moduleName, std::vector<mscorlib::System::Byte*> rawModule);
				virtual mscorlib::System::Reflection::Module  LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule, std::vector<mscorlib::System::Byte*> rawSymbolStore);
				virtual mscorlib::System::Reflection::Module  LoadModule(const char *moduleName, std::vector<mscorlib::System::Byte*> rawModule, std::vector<mscorlib::System::Byte*> rawSymbolStore);
				static mscorlib::System::Reflection::Assembly  LoadWithPartialName(mscorlib::System::String partialName, mscorlib::System::Security::Policy::Evidence securityEvidence);
				static mscorlib::System::Reflection::Assembly  LoadWithPartialName(const char *partialName, mscorlib::System::Security::Policy::Evidence securityEvidence);
				virtual mscorlib::System::Object  CreateInstance(mscorlib::System::String typeName);
				virtual mscorlib::System::Object  CreateInstance(const char *typeName);
				virtual mscorlib::System::Object  CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Object  CreateInstance(const char *typeName, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Object  CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
				virtual mscorlib::System::Object  CreateInstance(const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
				virtual std::vector<mscorlib::System::Reflection::Module*>  GetLoadedModules();
				virtual std::vector<mscorlib::System::Reflection::Module*>  GetModules();
				virtual std::vector<mscorlib::System::String*>  GetManifestResourceNames();
				static mscorlib::System::Reflection::Assembly  GetExecutingAssembly();
				static mscorlib::System::Reflection::Assembly  GetCallingAssembly();
				virtual mscorlib::System::Reflection::ManifestResourceInfo  GetManifestResourceInfo(mscorlib::System::String resourceName);
				virtual mscorlib::System::Reflection::ManifestResourceInfo  GetManifestResourceInfo(const char *resourceName);
				virtual mscorlib::System::Int32  GetHashCode() override;
				virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
				virtual mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>  GetCustomAttributesData();
				virtual mscorlib::System::Type  GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Type  GetType(const char *name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase);
				virtual mscorlib::System::Reflection::Module  GetModule(mscorlib::System::String name);
				virtual mscorlib::System::Reflection::Module  GetModule(const char *name);
				virtual std::vector<mscorlib::System::Reflection::AssemblyName*>  GetReferencedAssemblies();
				virtual std::vector<mscorlib::System::Reflection::Module*>  GetModules(mscorlib::System::Boolean getResourceModules);
				virtual std::vector<mscorlib::System::Reflection::Module*>  GetLoadedModules(mscorlib::System::Boolean getResourceModules);
				virtual mscorlib::System::Reflection::Assembly  GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture);
				virtual mscorlib::System::Reflection::Assembly  GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_CodeBase)) mscorlib::System::String  CodeBase;
				__declspec(property(get=get_EscapedCodeBase)) mscorlib::System::String  EscapedCodeBase;
				__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
				__declspec(property(get=get_EntryPoint)) mscorlib::System::Reflection::MethodInfo  EntryPoint;
				__declspec(property(get=get_Evidence)) mscorlib::System::Security::Policy::Evidence  Evidence;
				__declspec(property(get=get_Location)) mscorlib::System::String  Location;
				__declspec(property(get=get_ImageRuntimeVersion)) mscorlib::System::String  ImageRuntimeVersion;
				__declspec(property(get=get_HostContext)) mscorlib::System::Int64  HostContext;
				__declspec(property(get=get_ReflectionOnly)) mscorlib::System::Boolean  ReflectionOnly;
				__declspec(property(get=get_PermissionSet)) mscorlib::System::Security::PermissionSet  PermissionSet;
				__declspec(property(get=get_SecurityRuleSet)) mscorlib::System::Security::SecurityRuleSet::__ENUM__  SecurityRuleSet;
				__declspec(property(get=get_IsFullyTrusted)) mscorlib::System::Boolean  IsFullyTrusted;
				__declspec(property(get=get_ManifestModule)) mscorlib::System::Reflection::Module  ManifestModule;
				__declspec(property(get=get_GlobalAssemblyCache)) mscorlib::System::Boolean  GlobalAssemblyCache;
				__declspec(property(get=get_IsDynamic)) mscorlib::System::Boolean  IsDynamic;
				__declspec(property(get=get_DefinedTypes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::TypeInfo>  DefinedTypes;
				__declspec(property(get=get_ExportedTypes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Type>  ExportedTypes;
				__declspec(property(get=get_Modules)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Module>  Modules;
				__declspec(property(get=get_CustomAttributes)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  CustomAttributes;

				//Get Set Properties Methods
				//	Get:CodeBase
				mscorlib::System::String  get_CodeBase() const;

				//	Get:EscapedCodeBase
				mscorlib::System::String  get_EscapedCodeBase() const;

				//	Get:FullName
				mscorlib::System::String  get_FullName() const;

				//	Get:EntryPoint
				mscorlib::System::Reflection::MethodInfo  get_EntryPoint() const;

				//	Get:Evidence
				mscorlib::System::Security::Policy::Evidence  get_Evidence() const;

				//	Get:Location
				mscorlib::System::String  get_Location() const;

				//	Get:ImageRuntimeVersion
				mscorlib::System::String  get_ImageRuntimeVersion() const;

				//	Get:HostContext
				mscorlib::System::Int64  get_HostContext() const;

				//	Get:ReflectionOnly
				mscorlib::System::Boolean  get_ReflectionOnly() const;

				//	Get:PermissionSet
				mscorlib::System::Security::PermissionSet  get_PermissionSet() const;

				//	Get:SecurityRuleSet
				mscorlib::System::Security::SecurityRuleSet::__ENUM__  get_SecurityRuleSet() const;

				//	Get:IsFullyTrusted
				mscorlib::System::Boolean  get_IsFullyTrusted() const;

				//	Get:ManifestModule
				mscorlib::System::Reflection::Module  get_ManifestModule() const;

				//	Get:GlobalAssemblyCache
				mscorlib::System::Boolean  get_GlobalAssemblyCache() const;

				//	Get:IsDynamic
				mscorlib::System::Boolean  get_IsDynamic() const;

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
#endif
