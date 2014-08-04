#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_AccessedThroughPropertyAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
				//	Get:PropertyName
				mscorlib::System::String  AccessedThroughPropertyAttribute::get_PropertyName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "AccessedThroughPropertyAttribute", 0, NULL, "get_PropertyName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  AccessedThroughPropertyAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
