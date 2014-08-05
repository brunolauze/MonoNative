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
						int __param_level__ = level;
						__parameters__[0] = &__param_level__;
						int __param_keywords__ = keywords;
						__parameters__[1] = &__param_keywords__;
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
