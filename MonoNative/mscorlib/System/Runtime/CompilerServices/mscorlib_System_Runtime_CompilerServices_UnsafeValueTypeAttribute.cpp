#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_UnsafeValueTypeAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:TypeId
				mscorlib::System::Object  UnsafeValueTypeAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
