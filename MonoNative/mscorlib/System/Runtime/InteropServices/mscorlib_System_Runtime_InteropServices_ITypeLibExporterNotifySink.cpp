#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink.h>
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
				void ITypeLibExporterNotifySink::ReportEvent(mscorlib::System::Runtime::InteropServices::ExporterEventKind::__ENUM__ eventKind, mscorlib::System::Int32 eventCode, mscorlib::System::String eventMsg)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(eventKind).name());
						__parameter_types__[1] = Global::GetType(typeid(eventCode).name());
						__parameter_types__[2] = Global::GetType(typeid(eventMsg).name());
						int __param_eventKind__ = eventKind;
						__parameters__[0] = &__param_eventKind__;
						__parameters__[1] = &eventCode;
						__parameters__[2] = mono_string_new(Global::GetDomain(), eventMsg);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibExporterNotifySink", 0, NULL, "ReportEvent", __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink, 3, __parameter_types__, __parameters__, NULL);
				}

				void ITypeLibExporterNotifySink::ReportEvent(mscorlib::System::Runtime::InteropServices::ExporterEventKind::__ENUM__ eventKind, mscorlib::System::Int32 eventCode, const char *eventMsg)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(eventKind).name());
						__parameter_types__[1] = Global::GetType(typeid(eventCode).name());
						__parameter_types__[2] = Global::GetType(typeid(eventMsg).name());
						int __param_eventKind__ = eventKind;
						__parameters__[0] = &__param_eventKind__;
						__parameters__[1] = &eventCode;
						__parameters__[2] = mono_string_new(Global::GetDomain(), eventMsg);
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibExporterNotifySink", 0, NULL, "ReportEvent", __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object ITypeLibExporterNotifySink::ResolveRef(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ITypeLibExporterNotifySink", 0, NULL, "ResolveRef", __mscorlib_System_Runtime_InteropServices_ITypeLibExporterNotifySink, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
