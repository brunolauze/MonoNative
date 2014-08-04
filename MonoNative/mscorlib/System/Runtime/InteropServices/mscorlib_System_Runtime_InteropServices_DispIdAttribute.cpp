#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_DispIdAttribute.h>
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
				mscorlib::System::Int32  DispIdAttribute::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "DispIdAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  DispIdAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
