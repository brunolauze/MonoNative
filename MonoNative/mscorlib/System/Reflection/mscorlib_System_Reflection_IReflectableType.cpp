#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflectableType.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_TypeInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::TypeInfo IReflectableType::GetTypeInfo()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflectableType", 0, NULL, "GetTypeInfo", __mscorlib_System_Reflection_IReflectableType, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::TypeInfo(__result__);
			}


		}
	}
}
