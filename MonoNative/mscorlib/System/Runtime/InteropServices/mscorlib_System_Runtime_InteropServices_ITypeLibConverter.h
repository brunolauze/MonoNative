#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBCONVERTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBCONVERTER_H

#include <mscorlib/System/mscorlib_System_Object.h>
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

				class ITypeLibConverter
				{
				public:
					ITypeLibConverter(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ITypeLibConverter = nativeObject;
					};
				
					~ITypeLibConverter()
					{
					};
				

					ITypeLibConverter & operator=(ITypeLibConverter &value) { __mscorlib_System_Runtime_InteropServices_ITypeLibConverter = value.__mscorlib_System_Runtime_InteropServices_ITypeLibConverter; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ITypeLibConverter; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ITypeLibConverter = value; return value; };


					virtual mscorlib::System::Object  ConvertAssemblyToTypeLib(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::String typeLibName, mscorlib::System::Runtime::InteropServices::TypeLibExporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibExporterNotifySink notifySink);
					virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Int32 flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::Boolean unsafeInterfaces);
					virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  ConvertTypeLibToAssembly(mscorlib::System::Object typeLib, mscorlib::System::String asmFileName, mscorlib::System::Runtime::InteropServices::TypeLibImporterFlags::__ENUM__ flags, mscorlib::System::Runtime::InteropServices::ITypeLibImporterNotifySink notifySink, std::vector<mscorlib::System::Byte*> publicKey, mscorlib::System::Reflection::StrongNameKeyPair keyPair, mscorlib::System::String asmNamespace, mscorlib::System::Version asmVersion);
					virtual mscorlib::System::Boolean  GetPrimaryInteropAssembly(mscorlib::System::Guid g, mscorlib::System::Int32 major, mscorlib::System::Int32 minor, mscorlib::System::Int32 lcid, mscorlib::System::String asmName, mscorlib::System::String asmCodeBase);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ITypeLibConverter;
				
				private:
				
				};

			}
		}
	}
}
#endif
