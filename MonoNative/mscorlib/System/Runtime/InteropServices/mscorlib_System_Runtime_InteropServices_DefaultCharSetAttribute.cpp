#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_DefaultCharSetAttribute.h>
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
				//	Get:CharSet
				mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  DefaultCharSetAttribute::get_CharSet() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "DefaultCharSetAttribute", 0, NULL, "get_CharSet", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__>(*(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  DefaultCharSetAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
