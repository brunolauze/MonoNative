#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void ITypeLibImporterNotifySink::ReportEvent(mscorlib::System::Runtime::InteropServices::ImporterEventKind::__ENUM__ eventKind, mscorlib::System::Int32 eventCode, mscorlib::System::String eventMsg)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(eventKind).name());
						__parameter_types__[1] = Global::GetType(typeid(eventCode).name());
						__parameter_types__[2] = Global::GetType(typeid(eventMsg).name());
						__parameters__[0] = reinterpret_cast<void*>(eventKind);
						__parameters__[1] = &eventCode;
						__parameters__[2] = (MonoObject*)eventMsg;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibImporterNotifySink", 0, NULL, "ReportEvent", __mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Assembly ITypeLibImporterNotifySink::ResolveRef(mscorlib::System::Object typeLib)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(typeLib).name());
						__parameters__[0] = (MonoObject*)typeLib;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibImporterNotifySink", 0, NULL, "ResolveRef", __mscorlib_System_Runtime_InteropServices_ITypeLibImporterNotifySink, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Assembly(__result__);
				}


			}
		}
	}
}
