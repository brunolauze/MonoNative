#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_DecimalConstantAttribute.h>
#include <mscorlib/System/mscorlib_System_Decimal.h>
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
				//	Get:Value
				mscorlib::System::Decimal  DecimalConstantAttribute::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "DecimalConstantAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Decimal(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  DecimalConstantAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
