#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyInformationalVersionAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:InformationalVersion
			mscorlib::System::String  AssemblyInformationalVersionAttribute::get_InformationalVersion()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyInformationalVersionAttribute", 0, NULL, "get_InformationalVersion", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyInformationalVersionAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
