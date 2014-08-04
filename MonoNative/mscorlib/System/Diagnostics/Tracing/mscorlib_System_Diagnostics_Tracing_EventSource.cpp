#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventSource.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				//Public Methods
				mscorlib::System::Boolean EventSource::IsEnabled()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSource", 0, NULL, "IsEnabled", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean EventSource::IsEnabled(mscorlib::System::Diagnostics::Tracing::EventLevel::__ENUM__ level, mscorlib::System::Diagnostics::Tracing::EventKeywords::__ENUM__ keywords)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(level).name());
						__parameter_types__[1] = Global::GetType(typeid(keywords).name());
						__parameters__[0] = reinterpret_cast<void*>(level);
						__parameters__[1] = reinterpret_cast<void*>(keywords);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSource", 0, NULL, "IsEnabled", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void EventSource::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSource", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}


			}
		}
	}
}
