#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventCommandEventArgs.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				//Public Methods
				mscorlib::System::Boolean EventCommandEventArgs::DisableEvent(mscorlib::System::Int32 eventId)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(eventId).name());
						__parameters__[0] = &eventId;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventCommandEventArgs", 0, NULL, "DisableEvent", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean EventCommandEventArgs::EnableEvent(mscorlib::System::Int32 eventId)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(eventId).name());
						__parameters__[0] = &eventId;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventCommandEventArgs", 0, NULL, "EnableEvent", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Arguments
				mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  EventCommandEventArgs::get_Arguments() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventCommandEventArgs", 0, NULL, "get_Arguments", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>(__result__);
				}


				//	Get:Command
				mscorlib::System::Diagnostics::Tracing::EventCommand::__ENUM__  EventCommandEventArgs::get_Command() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventCommandEventArgs", 0, NULL, "get_Command", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Diagnostics::Tracing::EventCommand::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
