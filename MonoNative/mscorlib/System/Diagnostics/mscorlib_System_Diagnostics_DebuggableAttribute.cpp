#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggableAttribute.h>
#include <mscorlib/System/mscorlib_System_Enum.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:DebuggingFlags
			mscorlib::System::Diagnostics::DebuggableAttribute::DebuggingModes::__ENUM__  DebuggableAttribute::get_DebuggingFlags() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggableAttribute", 0, NULL, "get_DebuggingFlags", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Diagnostics::DebuggableAttribute::DebuggingModes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:IsJITTrackingEnabled
			mscorlib::System::Boolean  DebuggableAttribute::get_IsJITTrackingEnabled() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggableAttribute", 0, NULL, "get_IsJITTrackingEnabled", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsJITOptimizerDisabled
			mscorlib::System::Boolean  DebuggableAttribute::get_IsJITOptimizerDisabled() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggableAttribute", 0, NULL, "get_IsJITOptimizerDisabled", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  DebuggableAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
