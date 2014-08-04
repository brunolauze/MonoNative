#include <mscorlib/System/mscorlib_System_CLSCompliantAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get:IsCompliant
		mscorlib::System::Boolean  CLSCompliantAttribute::get_IsCompliant()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "CLSCompliantAttribute", 0, NULL, "get_IsCompliant", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:TypeId
		mscorlib::System::Object  CLSCompliantAttribute::get_TypeId()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
