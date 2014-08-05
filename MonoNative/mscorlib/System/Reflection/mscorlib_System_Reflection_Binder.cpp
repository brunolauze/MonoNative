#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::FieldInfo Binder::BindToField(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::FieldInfo*> match, mscorlib::System::Object value, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(match).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(value).name());
					__parameter_types__[3] = Global::GetType(typeid(culture).name());
					int __param_bindingAttr__ = bindingAttr;
					__parameters__[0] = &__param_bindingAttr__;
					__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::FieldInfo*>(match, typeid(mscorlib::System::Reflection::FieldInfo).name());
					__parameters__[2] = (MonoObject*)value;
					__parameters__[3] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Binder", 0, NULL, "BindToField", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::MethodBase Binder::BindToMethod(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::MethodBase*> match, mscorlib::System::Object* args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> names, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[7];
					void *__parameters__[7];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(match).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(args).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					__parameter_types__[4] = Global::GetType(typeid(culture).name());
					__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(names).name()))->eklass);
					__parameter_types__[6] = Global::GetType(typeid(state).name());
					int __param_bindingAttr__ = bindingAttr;
					__parameters__[0] = &__param_bindingAttr__;
					__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::MethodBase*>(match, typeid(mscorlib::System::Reflection::MethodBase).name());
					__parameters__[2] = (MonoObject*)args;
					__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					__parameters__[4] = (MonoObject*)culture;
					__parameters__[5] = Global::FromArray<mscorlib::System::String*>(names, typeid(mscorlib::System::String).name());
					__parameters__[6] = (MonoObject*)state;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Binder", 0, NULL, "BindToMethod", __native_object__, 7, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
			}

			mscorlib::System::Object Binder::ChangeType(mscorlib::System::Object value, mscorlib::System::Type type, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameter_types__[1] = Global::GetType(typeid(type).name());
					__parameter_types__[2] = Global::GetType(typeid(culture).name());
					__parameters__[0] = (MonoObject*)value;
					__parameters__[1] = (MonoObject*)type;
					__parameters__[2] = (MonoObject*)culture;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Binder", 0, NULL, "ChangeType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			void Binder::ReorderArgumentArray(mscorlib::System::Object* args, mscorlib::System::Object state)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(args).name());
					__parameter_types__[1] = Global::GetType(typeid(state).name());
					__parameters__[0] = (MonoObject*)args;
					__parameters__[1] = (MonoObject*)state;
					Global::InvokeMethod("mscorlib", "System.Reflection", "Binder", 0, NULL, "ReorderArgumentArray", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Reflection::MethodBase Binder::SelectMethod(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::MethodBase*> match, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(match).name()))->eklass);
					__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					int __param_bindingAttr__ = bindingAttr;
					__parameters__[0] = &__param_bindingAttr__;
					__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::MethodBase*>(match, typeid(mscorlib::System::Reflection::MethodBase).name());
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Binder", 0, NULL, "SelectMethod", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
			}

			mscorlib::System::Reflection::PropertyInfo Binder::SelectProperty(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, std::vector<mscorlib::System::Reflection::PropertyInfo*> match, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> indexes, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(match).name()))->eklass);
					__parameter_types__[2] = Global::GetType(typeid(returnType).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(indexes).name()))->eklass);
					__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					int __param_bindingAttr__ = bindingAttr;
					__parameters__[0] = &__param_bindingAttr__;
					__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::PropertyInfo*>(match, typeid(mscorlib::System::Reflection::PropertyInfo).name());
					__parameters__[2] = (MonoObject*)returnType;
					__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(indexes, typeid(mscorlib::System::Type).name());
					__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Binder", 0, NULL, "SelectProperty", __native_object__, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::PropertyInfo(__result__);
			}


		}
	}
}
