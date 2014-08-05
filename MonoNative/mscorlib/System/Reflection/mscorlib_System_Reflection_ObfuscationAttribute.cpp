#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ObfuscationAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:Exclude
			mscorlib::System::Boolean  ObfuscationAttribute::get_Exclude() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "get_Exclude", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ObfuscationAttribute::set_Exclude(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "set_Exclude", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:StripAfterObfuscation
			mscorlib::System::Boolean  ObfuscationAttribute::get_StripAfterObfuscation() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "get_StripAfterObfuscation", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ObfuscationAttribute::set_StripAfterObfuscation(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "set_StripAfterObfuscation", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:ApplyToMembers
			mscorlib::System::Boolean  ObfuscationAttribute::get_ApplyToMembers() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "get_ApplyToMembers", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ObfuscationAttribute::set_ApplyToMembers(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "set_ApplyToMembers", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Feature
			mscorlib::System::String  ObfuscationAttribute::get_Feature() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "get_Feature", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void ObfuscationAttribute::set_Feature(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "ObfuscationAttribute", 0, NULL, "set_Feature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  ObfuscationAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
