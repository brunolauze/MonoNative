#include <mscorlib/System/Diagnostics/Contracts/Internal/mscorlib_System_Diagnostics_Contracts_Internal_ContractHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Contracts
			{
				namespace Internal
				{

					//Public Methods
					mscorlib::System::String ContractHelper::RaiseContractFailedEvent(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ failureKind, mscorlib::System::String userMessage, mscorlib::System::String conditionText, mscorlib::System::Exception innerException)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(failureKind).name());
							__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
							__parameter_types__[2] = Global::GetType(typeid(conditionText).name());
							__parameter_types__[3] = Global::GetType(typeid(innerException).name());
							__parameters__[0] = reinterpret_cast<void*>(failureKind);
							__parameters__[1] = (MonoObject*)userMessage;
							__parameters__[2] = (MonoObject*)conditionText;
							__parameters__[3] = (MonoObject*)innerException;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts.Internal", "ContractHelper", 0, NULL, "RaiseContractFailedEvent", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					void ContractHelper::TriggerFailure(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ kind, mscorlib::System::String displayMessage, mscorlib::System::String userMessage, mscorlib::System::String conditionText, mscorlib::System::Exception innerException)
					{
							MonoType *__parameter_types__[5];
							void *__parameters__[5];
							__parameter_types__[0] = Global::GetType(typeid(kind).name());
							__parameter_types__[1] = Global::GetType(typeid(displayMessage).name());
							__parameter_types__[2] = Global::GetType(typeid(userMessage).name());
							__parameter_types__[3] = Global::GetType(typeid(conditionText).name());
							__parameter_types__[4] = Global::GetType(typeid(innerException).name());
							__parameters__[0] = reinterpret_cast<void*>(kind);
							__parameters__[1] = (MonoObject*)displayMessage;
							__parameters__[2] = (MonoObject*)userMessage;
							__parameters__[3] = (MonoObject*)conditionText;
							__parameters__[4] = (MonoObject*)innerException;
							Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts.Internal", "ContractHelper", 0, NULL, "TriggerFailure", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
