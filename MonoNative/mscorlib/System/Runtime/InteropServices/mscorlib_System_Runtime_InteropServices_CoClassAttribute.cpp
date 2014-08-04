#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CoClassAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:CoClass
				mscorlib::System::Type  CoClassAttribute::get_CoClass()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "CoClassAttribute", 0, NULL, "get_CoClass", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  CoClassAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
