#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBEXPORTERNOTIFYSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBEXPORTERNOTIFYSINK_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ExporterEventKind.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Reflection
		{

			class Assembly;
			

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

				class ITypeLibExporterNotifySink
				{
				public:
					ITypeLibExporterNotifySink(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink = nativeObject;
					};
				
					~ITypeLibExporterNotifySink()
					{
					};
				

					ITypeLibExporterNotifySink & operator=(ITypeLibExporterNotifySink &value) { __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink = value.__mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink = value; return value; };


					virtual void  ReportEvent(mscorlib::System::Runtime::InteropServices::ExporterEventKind::__ENUM__ eventKind, mscorlib::System::Int32 eventCode, mscorlib::System::String eventMsg);
					virtual mscorlib::System::Object  ResolveRef(mscorlib::System::Reflection::Assembly assembly);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink;
				
				private:
				
				};

			}
		}
	}
}
#endif
