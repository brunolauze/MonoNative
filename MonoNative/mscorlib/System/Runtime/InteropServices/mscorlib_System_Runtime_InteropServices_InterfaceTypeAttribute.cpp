#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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
				//	Get:Value
				mscorlib::System::Runtime::InteropServices::ComInterfaceType::__ENUM__  InterfaceTypeAttribute::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "InterfaceTypeAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::InteropServices::ComInterfaceType::__ENUM__>(*(mscorlib::System::Runtime::InteropServices::ComInterfaceType::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  InterfaceTypeAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
