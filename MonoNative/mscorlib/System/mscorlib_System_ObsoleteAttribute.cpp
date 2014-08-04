#include <mscorlib/System/mscorlib_System_ObsoleteAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get:Message
		mscorlib::System::String  ObsoleteAttribute::get_Message()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ObsoleteAttribute", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:IsError
		mscorlib::System::Boolean  ObsoleteAttribute::get_IsError()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ObsoleteAttribute", 0, NULL, "get_IsError", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:TypeId
		mscorlib::System::Object  ObsoleteAttribute::get_TypeId()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
