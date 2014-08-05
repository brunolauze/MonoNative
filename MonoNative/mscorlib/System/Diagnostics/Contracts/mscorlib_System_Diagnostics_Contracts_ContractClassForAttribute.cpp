#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractClassForAttribute.h>
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
				//	Get:TypeContractsAreFor
				mscorlib::System::Type  ContractClassForAttribute::get_TypeContractsAreFor() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractClassForAttribute", 0, NULL, "get_TypeContractsAreFor", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ContractClassForAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
