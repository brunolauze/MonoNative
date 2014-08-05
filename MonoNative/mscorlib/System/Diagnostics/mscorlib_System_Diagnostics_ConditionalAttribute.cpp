#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_ConditionalAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:ConditionString
			mscorlib::System::String  ConditionalAttribute::get_ConditionString() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "ConditionalAttribute", 0, NULL, "get_ConditionString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  ConditionalAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
