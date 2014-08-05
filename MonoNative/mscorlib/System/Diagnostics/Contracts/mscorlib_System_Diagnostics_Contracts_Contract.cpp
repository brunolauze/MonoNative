#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_Contract.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractFailedEventArgs.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Contracts
			{

				//Public Methods
				void Contract::Assert(mscorlib::System::Boolean condition)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Assert", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Assert(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Assert", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Assert(mscorlib::System::Boolean condition, const char *userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Assert", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Assume(mscorlib::System::Boolean condition)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Assume", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Assume(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Assume", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Assume(mscorlib::System::Boolean condition, const char *userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Assume", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::EndContractBlock()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "EndContractBlock", NullMonoObject, 0, NULL, NULL, NULL);
				}

				void Contract::Ensures(mscorlib::System::Boolean condition)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Ensures", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Ensures(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Ensures", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Ensures(mscorlib::System::Boolean condition, const char *userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Ensures", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean Contract::Exists(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Int32 )> predicate)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(predicate).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &predicate;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Exists", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean Contract::ForAll(mscorlib::System::Int32 fromInclusive, mscorlib::System::Int32 toExclusive, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Int32 )> predicate)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(fromInclusive).name());
						__parameter_types__[1] = Global::GetType(typeid(toExclusive).name());
						__parameter_types__[2] = Global::GetType(typeid(predicate).name());
						__parameters__[0] = &fromInclusive;
						__parameters__[1] = &toExclusive;
						__parameters__[2] = &predicate;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "ForAll", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void Contract::Invariant(mscorlib::System::Boolean condition)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Invariant", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Invariant(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Invariant", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Invariant(mscorlib::System::Boolean condition, const char *userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Invariant", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Requires(mscorlib::System::Boolean condition)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Requires", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Requires(mscorlib::System::Boolean condition, mscorlib::System::String userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Requires", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void Contract::Requires(mscorlib::System::Boolean condition, const char *userMessage)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(condition).name());
						__parameter_types__[1] = Global::GetType(typeid(userMessage).name());
						__parameters__[0] = reinterpret_cast<void*>(condition);
						__parameters__[1] = mono_string_new(Global::GetDomain(), userMessage);
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "Contract", 0, NULL, "Requires", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
