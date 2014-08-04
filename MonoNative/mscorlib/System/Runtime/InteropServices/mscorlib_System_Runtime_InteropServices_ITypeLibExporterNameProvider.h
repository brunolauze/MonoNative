#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBEXPORTERNAMEPROVIDER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBEXPORTERNAMEPROVIDER_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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

				class ITypeLibExporterNameProvider
				{
				public:
					ITypeLibExporterNameProvider(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider = nativeObject;
					};
				
					~ITypeLibExporterNameProvider()
					{
					};
				

					ITypeLibExporterNameProvider & operator=(ITypeLibExporterNameProvider &value) { __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider = value.__mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider = value; return value; };


					virtual std::vector<mscorlib::System::String*>  GetNames();


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ITypeLibExporterNameProvider;
				
				private:
				
				};

			}
		}
	}
}
#endif
