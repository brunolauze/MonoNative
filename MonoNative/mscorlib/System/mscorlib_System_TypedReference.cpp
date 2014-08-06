#include <mscorlib/System/mscorlib_System_TypedReference.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Boolean TypedReference::Equals(mscorlib::System::Object o)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(o).name());
				__parameters__[0] = (MonoObject*)o;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 TypedReference::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Type TypedReference::GetTargetType(mscorlib::System::TypedReference value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "GetTargetType", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::TypedReference TypedReference::MakeTypedReference(mscorlib::System::Object target, std::vector<mscorlib::System::Reflection::FieldInfo*> flds)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "FieldInfo")), 1));
				__parameters__[0] = (MonoObject*)target;
				__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::FieldInfo*>(flds, typeid(mscorlib::System::Reflection::FieldInfo).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "MakeTypedReference", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::TypedReference(__result__);
		}

		void TypedReference::SetTypedReference(mscorlib::System::TypedReference target, mscorlib::System::Object value)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(target).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)target;
				__parameters__[1] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "SetTypedReference", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::RuntimeTypeHandle TypedReference::TargetTypeToken(mscorlib::System::TypedReference value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "TargetTypeToken", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::RuntimeTypeHandle(__result__);
		}

		mscorlib::System::Object TypedReference::ToObject(mscorlib::System::TypedReference value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "TypedReference", 0, NULL, "ToObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}


	}
}
