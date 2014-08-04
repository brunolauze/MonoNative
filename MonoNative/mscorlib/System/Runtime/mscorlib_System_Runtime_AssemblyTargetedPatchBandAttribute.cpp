#include <mscorlib/System/Runtime/mscorlib_System_Runtime_AssemblyTargetedPatchBandAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get/Set:TargetedPatchBand
			mscorlib::System::String  AssemblyTargetedPatchBandAttribute::get_TargetedPatchBand()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime", "AssemblyTargetedPatchBandAttribute", 0, NULL, "get_TargetedPatchBand", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblyTargetedPatchBandAttribute::set_TargetedPatchBand(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Runtime", "AssemblyTargetedPatchBandAttribute", 0, NULL, "set_TargetedPatchBand", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyTargetedPatchBandAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
