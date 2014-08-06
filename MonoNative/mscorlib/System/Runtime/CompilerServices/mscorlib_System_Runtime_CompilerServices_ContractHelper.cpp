#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_ContractHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Exception.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
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
						mscorlib::System::Int32 __param_failureKind__ = failureKind;
						__parameters__[0] = &__param_failureKind__;
						__parameters__[1] = (MonoObject*)userMessage;
						__parameters__[2] = (MonoObject*)conditionText;
						__parameters__[3] = (MonoObject*)innerException;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ContractHelper", 0, NULL, "RaiseContractFailedEvent", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::String ContractHelper::RaiseContractFailedEvent(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ failureKind, const char *userMessage, const char *conditionText, mscorlib::System::Exception innerException)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(failureKind).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType(typeid(innerException).name());
						mscorlib::System::Int32 __param_failureKind__ = failureKind;
						__parameters__[0] = &__param_failureKind__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						__parameters__[2] = mono_string_new(Global::GetDomain(), conditionText);
						__parameters__[3] = (MonoObject*)innerException;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ContractHelper", 0, NULL, "RaiseContractFailedEvent", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
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
						mscorlib::System::Int32 __param_kind__ = kind;
						__parameters__[0] = &__param_kind__;
						__parameters__[1] = (MonoObject*)displayMessage;
						__parameters__[2] = (MonoObject*)userMessage;
						__parameters__[3] = (MonoObject*)conditionText;
						__parameters__[4] = (MonoObject*)innerException;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ContractHelper", 0, NULL, "TriggerFailure", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}

				void ContractHelper::TriggerFailure(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__ kind, const char *displayMessage, const char *userMessage, const char *conditionText, mscorlib::System::Exception innerException)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(kind).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[4] = Global::GetType(typeid(innerException).name());
						mscorlib::System::Int32 __param_kind__ = kind;
						__parameters__[0] = &__param_kind__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), displayMessage);
						__parameters__[2] = mono_string_new(Global::GetDomain(), userMessage);
						__parameters__[3] = mono_string_new(Global::GetDomain(), conditionText);
						__parameters__[4] = (MonoObject*)innerException;
						Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "ContractHelper", 0, NULL, "TriggerFailure", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
