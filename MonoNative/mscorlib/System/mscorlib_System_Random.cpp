#include <mscorlib/System/mscorlib_System_Random.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Int32 Random::Next(mscorlib::System::Int32 minValue, mscorlib::System::Int32 maxValue)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(minValue).name());
				__parameter_types__[1] = Global::GetType(typeid(maxValue).name());
				__parameters__[0] = &minValue;
				__parameters__[1] = &maxValue;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Random", 0, NULL, "Next", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Random::Next(mscorlib::System::Int32 maxValue)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(maxValue).name());
				__parameters__[0] = &maxValue;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Random", 0, NULL, "Next", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 Random::Next()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Random", 0, NULL, "Next", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		void Random::NextBytes(std::vector<mscorlib::System::Byte*> buffer)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
				Global::InvokeMethod("mscorlib", "System", "Random", 0, NULL, "NextBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Double Random::NextDouble()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Random", 0, NULL, "NextDouble", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Double*)mono_object_unbox(__result__);
		}


	}
}
