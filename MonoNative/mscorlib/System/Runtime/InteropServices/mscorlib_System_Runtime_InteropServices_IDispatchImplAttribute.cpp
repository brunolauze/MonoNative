#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_IDispatchImplAttribute.h>
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
				mscorlib::System::Runtime::InteropServices::IDispatchImplType::__ENUM__  IDispatchImplAttribute::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IDispatchImplAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::InteropServices::IDispatchImplType::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  IDispatchImplAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
