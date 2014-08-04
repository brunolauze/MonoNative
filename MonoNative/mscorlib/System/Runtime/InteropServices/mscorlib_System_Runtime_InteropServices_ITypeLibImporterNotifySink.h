#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBIMPORTERNOTIFYSINK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ITYPELIBIMPORTERNOTIFYSINK_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ImporterEventKind.h>
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

				class ITypeLibImporterNotifySink
				{
				public:
					ITypeLibImporterNotifySink(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink = nativeObject;
					};
				
					~ITypeLibImporterNotifySink()
					{
					};
				

					ITypeLibImporterNotifySink & operator=(ITypeLibImporterNotifySink &value) { __mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink = value.__mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink = value; return value; };


					virtual void  ReportEvent(mscorlib::System::Runtime::InteropServices::ImporterEventKind::__ENUM__ eventKind, mscorlib::System::Int32 eventCode, mscorlib::System::String eventMsg);
					virtual mscorlib::System::Reflection::Assembly  ResolveRef(mscorlib::System::Object typeLib);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink;
				
				private:
				
				};

			}
		}
	}
}
#endif
