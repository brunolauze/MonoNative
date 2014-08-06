#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_EventBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_EventToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				void EventBuilder::AddOtherMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "AddOtherMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::EventToken EventBuilder::GetEventToken()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "GetEventToken", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::EventToken(__result__);
				}

				void EventBuilder::SetAddOnMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "SetAddOnMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void EventBuilder::SetRaiseMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "SetRaiseMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void EventBuilder::SetRemoveOnMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "SetRemoveOnMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void EventBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void EventBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "EventBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
