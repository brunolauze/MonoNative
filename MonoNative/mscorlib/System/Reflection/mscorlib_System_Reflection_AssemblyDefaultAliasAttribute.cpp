#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:DefaultAlias
			mscorlib::System::String  AssemblyDefaultAliasAttribute::get_DefaultAlias()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyDefaultAliasAttribute", 0, NULL, "get_DefaultAlias", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyDefaultAliasAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
