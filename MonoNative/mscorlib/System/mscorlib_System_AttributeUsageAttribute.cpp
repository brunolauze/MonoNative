#include <mscorlib/System/mscorlib_System_AttributeUsageAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get/Set:AllowMultiple
		mscorlib::System::Boolean  AttributeUsageAttribute::get_AllowMultiple() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AttributeUsageAttribute", 0, NULL, "get_AllowMultiple", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AttributeUsageAttribute::set_AllowMultiple(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AttributeUsageAttribute", 0, NULL, "set_AllowMultiple", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:Inherited
		mscorlib::System::Boolean  AttributeUsageAttribute::get_Inherited() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AttributeUsageAttribute", 0, NULL, "get_Inherited", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AttributeUsageAttribute::set_Inherited(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AttributeUsageAttribute", 0, NULL, "set_Inherited", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:ValidOn
		mscorlib::System::AttributeTargets::__ENUM__  AttributeUsageAttribute::get_ValidOn() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AttributeUsageAttribute", 0, NULL, "get_ValidOn", __native_object__, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::AttributeTargets::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}


		//	Get:TypeId
		mscorlib::System::Object  AttributeUsageAttribute::get_TypeId() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
