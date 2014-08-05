#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__ASSEMBLY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES__ASSEMBLY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class Version;
		class Byte;
		class ResolveEventArgs;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class AssemblyName;
			class MethodInfo;
			class ManifestResourceInfo;
			class Assembly;
			class Module;
			class Binder;
			

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
			class FileStream;
			

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
		namespace Runtime
		{
			namespace InteropServices
			{

				class _Assembly
				{
				public:
					_Assembly(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices__Assembly = nativeObject;
					};
				
					~_Assembly()
					{
					};
				

					_Assembly & operator=(_Assembly &value) { __mscorlib_System_Runtime_InteropServices__Assembly = value.__mscorlib_System_Runtime_InteropServices__Assembly; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices__Assembly; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices__Assembly = value; return value; };


					virtual mscorlib::System::String  ToString();
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
					virtual mscorlib::System::Int32  GetHashCode();
					virtual mscorlib::System::Type  GetType();
					virtual mscorlib::System::Reflection::AssemblyName  GetName();
					virtual mscorlib::System::Reflection::AssemblyName  GetName(mscorlib::System::Boolean copiedName);
					virtual mscorlib::System::Type  GetType(mscorlib::System::String name);
					virtual mscorlib::System::Type  GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError);
					virtual std::vector<mscorlib::System::Type*>  GetExportedTypes();
					virtual std::vector<mscorlib::System::Type*>  GetTypes();
					virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::Type type, mscorlib::System::String name);
					virtual mscorlib::System::IO::Stream  GetManifestResourceStream(mscorlib::System::String name);
					virtual mscorlib::System::IO::FileStream  GetFile(mscorlib::System::String name);
					virtual std::vector<mscorlib::System::IO::FileStream*>  GetFiles();
					virtual std::vector<mscorlib::System::IO::FileStream*>  GetFiles(mscorlib::System::Boolean getResourceModules);
					virtual std::vector<mscorlib::System::String*>  GetManifestResourceNames();
					virtual mscorlib::System::Reflection::ManifestResourceInfo  GetManifestResourceInfo(mscorlib::System::String resourceName);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual std::vector<mscorlib::System::Object*>  GetCustomAttributes(mscorlib::System::Boolean inherit);
					virtual mscorlib::System::Boolean  IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit);
					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
					virtual mscorlib::System::Type  GetType(mscorlib::System::String name, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase);
					virtual mscorlib::System::Reflection::Assembly  GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture);
					virtual mscorlib::System::Reflection::Assembly  GetSatelliteAssembly(mscorlib::System::Globalization::CultureInfo culture, mscorlib::System::Version version);
					virtual mscorlib::System::Reflection::Module  LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule);
					virtual mscorlib::System::Reflection::Module  LoadModule(mscorlib::System::String moduleName, std::vector<mscorlib::System::Byte*> rawModule, std::vector<mscorlib::System::Byte*> rawSymbolStore);
					virtual mscorlib::System::Object  CreateInstance(mscorlib::System::String typeName);
					virtual mscorlib::System::Object  CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase);
					virtual mscorlib::System::Object  CreateInstance(mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
					virtual std::vector<mscorlib::System::Reflection::Module*>  GetLoadedModules();
					virtual std::vector<mscorlib::System::Reflection::Module*>  GetLoadedModules(mscorlib::System::Boolean getResourceModules);
					virtual std::vector<mscorlib::System::Reflection::Module*>  GetModules();
					virtual std::vector<mscorlib::System::Reflection::Module*>  GetModules(mscorlib::System::Boolean getResourceModules);
					virtual mscorlib::System::Reflection::Module  GetModule(mscorlib::System::String name);
					virtual std::vector<mscorlib::System::Reflection::AssemblyName*>  GetReferencedAssemblies();


					//Public Properties
					__declspec(property(get=get_CodeBase)) mscorlib::System::String  CodeBase;
					__declspec(property(get=get_EscapedCodeBase)) mscorlib::System::String  EscapedCodeBase;
					__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
					__declspec(property(get=get_EntryPoint)) mscorlib::System::Reflection::MethodInfo  EntryPoint;
					__declspec(property(get=get_Location)) mscorlib::System::String  Location;
					__declspec(property(get=get_Evidence)) mscorlib::System::Security::Policy::Evidence  Evidence;
					__declspec(property(get=get_GlobalAssemblyCache)) mscorlib::System::Boolean  GlobalAssemblyCache;

					//Get Set Properties Methods
					//	Get:CodeBase
					mscorlib::System::String  get_CodeBase() const;

					//	Get:EscapedCodeBase
					mscorlib::System::String  get_EscapedCodeBase() const;

					//	Get:FullName
					mscorlib::System::String  get_FullName() const;

					//	Get:EntryPoint
					mscorlib::System::Reflection::MethodInfo  get_EntryPoint() const;

					//	Get:Location
					mscorlib::System::String  get_Location() const;

					//	Get:Evidence
					mscorlib::System::Security::Policy::Evidence  get_Evidence() const;

					//	Get:GlobalAssemblyCache
					mscorlib::System::Boolean  get_GlobalAssemblyCache() const;

				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices__Assembly;
				
				private:
				
				};

			}
		}
	}
}
#endif
