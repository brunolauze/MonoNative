#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractPublicPropertyNameAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Contracts
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  ContractPublicPropertyNameAttribute::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractPublicPropertyNameAttribute", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ContractPublicPropertyNameAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
