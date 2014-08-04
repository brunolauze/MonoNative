#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventAttribute.h>
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
				//Get Set Properties Methods
				//	Get/Set:EventId
				mscorlib::System::Int32  EventAttribute::get_EventId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventAttribute", 0, NULL, "get_EventId", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void EventAttribute::set_EventId(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventAttribute", 0, NULL, "set_EventId", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  EventAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
