#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractClassAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
				//	Get:TypeContainingContracts
				mscorlib::System::Type  ContractClassAttribute::get_TypeContainingContracts()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractClassAttribute", 0, NULL, "get_TypeContainingContracts", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ContractClassAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
