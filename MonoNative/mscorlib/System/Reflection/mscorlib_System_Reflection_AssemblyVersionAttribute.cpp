#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyVersionAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Version
			mscorlib::System::String  AssemblyVersionAttribute::get_Version()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyVersionAttribute", 0, NULL, "get_Version", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyVersionAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
