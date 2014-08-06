#include <mscorlib/System/Diagnostics/Contracts/mscorlib_System_Diagnostics_Contracts_ContractFailedEventArgs.h>
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
				void ContractFailedEventArgs::SetHandled()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "SetHandled", __native_object__, 0, NULL, NULL, NULL);
				}

				void ContractFailedEventArgs::SetUnwind()
				{
						Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "SetUnwind", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:Condition
				mscorlib::System::String  ContractFailedEventArgs::get_Condition() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "get_Condition", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void ContractFailedEventArgs::set_Condition(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "set_Condition", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:FailureKind
				mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__  ContractFailedEventArgs::get_FailureKind() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "get_FailureKind", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void ContractFailedEventArgs::set_FailureKind(mscorlib::System::Diagnostics::Contracts::ContractFailureKind::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "set_FailureKind", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Handled
				mscorlib::System::Boolean  ContractFailedEventArgs::get_Handled() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "get_Handled", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ContractFailedEventArgs::set_Handled(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "set_Handled", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unwind
				mscorlib::System::Boolean  ContractFailedEventArgs::get_Unwind() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "get_Unwind", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ContractFailedEventArgs::set_Unwind(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "set_Unwind", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Message
				mscorlib::System::String  ContractFailedEventArgs::get_Message() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "get_Message", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void ContractFailedEventArgs::set_Message(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "set_Message", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:OriginalException
				mscorlib::System::Exception  ContractFailedEventArgs::get_OriginalException() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "get_OriginalException", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Exception(__result__);
				}

				void ContractFailedEventArgs::set_OriginalException(mscorlib::System::Exception  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Diagnostics.Contracts", "ContractFailedEventArgs", 0, NULL, "set_OriginalException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
