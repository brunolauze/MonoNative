#include <mscorlib/System/Reflection/mscorlib_System_Reflection_DefaultMemberAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:MemberName
			mscorlib::System::String  DefaultMemberAttribute::get_MemberName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "DefaultMemberAttribute", 0, NULL, "get_MemberName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  DefaultMemberAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
