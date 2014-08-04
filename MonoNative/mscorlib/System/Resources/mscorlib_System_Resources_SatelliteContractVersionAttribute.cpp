#include <mscorlib/System/Resources/mscorlib_System_Resources_SatelliteContractVersionAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Version
			mscorlib::System::String  SatelliteContractVersionAttribute::get_Version()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "SatelliteContractVersionAttribute", 0, NULL, "get_Version", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  SatelliteContractVersionAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
