#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ComSourceInterfacesAttribute.h>



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
				//	Get:Value
				mscorlib::System::String  ComSourceInterfacesAttribute::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComSourceInterfacesAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ComSourceInterfacesAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
