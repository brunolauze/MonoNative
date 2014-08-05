#include <mscorlib/System/Diagnostics/Tracing/mscorlib_System_Diagnostics_Tracing_NonEventAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:TypeId
				mscorlib::System::Object  NonEventAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
