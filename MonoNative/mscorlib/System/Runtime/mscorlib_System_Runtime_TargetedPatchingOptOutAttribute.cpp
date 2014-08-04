#include <mscorlib/System/Runtime/mscorlib_System_Runtime_TargetedPatchingOptOutAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Reason
			mscorlib::System::String  TargetedPatchingOptOutAttribute::get_Reason()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime", "TargetedPatchingOptOutAttribute", 0, NULL, "get_Reason", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  TargetedPatchingOptOutAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
