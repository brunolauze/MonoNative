#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyDelaySignAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:DelaySign
			mscorlib::System::Boolean  AssemblyDelaySignAttribute::get_DelaySign()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyDelaySignAttribute", 0, NULL, "get_DelaySign", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyDelaySignAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
