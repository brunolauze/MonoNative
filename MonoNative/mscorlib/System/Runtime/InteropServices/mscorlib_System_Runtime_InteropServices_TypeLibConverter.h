#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBCONVERTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBCONVERTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibConverter.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TypeLibExporterFlags.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_TypeLibImporterFlags.h>

namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Assembly;
			class StrongNameKeyPair;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Version;
		class Guid;
		class Type;
		

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

				class AssemblyBuilder;
				

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
			namespace InteropServices
			{

				class TypeLibConverter
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::ITypeLibConverter
				{
				public:
					TypeLibConverter()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.TypeLibConverter"))
					, mscorlib::System::Runtime::InteropServices::ITypeLibConverter(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "TypeLibConverter");
					};
				
					TypeLibConverter(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::ITypeLibConverter(NULL)
					{
					};
				
					TypeLibConverter(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::ITypeLibConverter(nativeObject)
					{
					};
				
					~TypeLibConverter()
					{
					};
				

					TypeLibConverter & operator=(TypeLibConverter &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Object  ConvertAssemblyToTypeLib(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::String strTypeLibName, mscorlib::System::Runtime::InteropServices::TypeLibExporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibExporterNotifySink notifySink);
					virtual mscorlib::System::Object  ConvertAssemblyToTypeLib(mscorlib::System::Reflection::Assembly assembly, const char *strTypeLibName, mscorlib::System::Runtime::InteropServices::TypeLibExporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibExporterNotifySink notifySink);
					virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Int32 flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::Boolean unsafeInterfaces);
					virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, const char *asmFileName, mscorlib::System::Int32 flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::Boolean unsafeInterfaces);
					virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Runtime::InteropServices::TypeLibImporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::String asmNamespace, mscorlib::System::Version asmVersion);
					virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, const char *asmFileName, mscorlib::System::Runtime::InteropServices::TypeLibImporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, const char *asmNamespace, mscorlib::System::Version asmVersion);
					virtual mscorlib::System::Boolean  GetPrimaryInteropAssembly(mscorlib::System::Guid g, mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 lcid, mscorlib::System::String asmName, mscorlib::System::String asmCodeBase);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
