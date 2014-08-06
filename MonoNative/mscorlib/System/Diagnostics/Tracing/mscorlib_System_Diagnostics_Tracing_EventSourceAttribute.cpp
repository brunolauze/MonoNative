#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_EventSourceAttribute.h>
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
				//Get Set Properties Methods
				//	Get/Set:Guid
				mscorlib::System::String  EventSourceAttribute::get_Guid() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute", 0, NULL, "get_Guid", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void EventSourceAttribute::set_Guid(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute", 0, NULL, "set_Guid", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:LocalizationResources
				mscorlib::System::String  EventSourceAttribute::get_LocalizationResources() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute", 0, NULL, "get_LocalizationResources", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void EventSourceAttribute::set_LocalizationResources(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute", 0, NULL, "set_LocalizationResources", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Name
				mscorlib::System::String  EventSourceAttribute::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void EventSourceAttribute::set_Name(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Tracing", "EventSourceAttribute", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  EventSourceAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
