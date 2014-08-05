#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
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
			//	Get/Set:Item
			mscorlib::System::Boolean  ParameterModifier::get_Item(mscorlib::System::Int32 index) const
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameters__[0] = &index;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterModifier", 0, NULL, "get_Item", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void ParameterModifier::set_Item(mscorlib::System::Int32 index, mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(index).name());
				__parameter_types__[1] = Global::GetType(typeid(value).name());
				__parameters__[0] = &index;
				__parameters__[1] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterModifier", 0, NULL, "set_Item", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
