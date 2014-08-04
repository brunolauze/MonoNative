#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_OpCode.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Int32 OpCode::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean OpCode::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean OpCode::Equals(mscorlib::System::Reflection::Emit::OpCode obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String OpCode::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  OpCode::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Size
				mscorlib::System::Int32  OpCode::get_Size()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_Size", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:OpCodeType
				mscorlib::System::Reflection::Emit::OpCodeType::__ENUM__  OpCode::get_OpCodeType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_OpCodeType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::Emit::OpCodeType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:OperandType
				mscorlib::System::Reflection::Emit::OperandType::__ENUM__  OpCode::get_OperandType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_OperandType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::Emit::OperandType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:FlowControl
				mscorlib::System::Reflection::Emit::FlowControl::__ENUM__  OpCode::get_FlowControl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_FlowControl", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::Emit::FlowControl::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:StackBehaviourPop
				mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__  OpCode::get_StackBehaviourPop()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_StackBehaviourPop", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:StackBehaviourPush
				mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__  OpCode::get_StackBehaviourPush()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_StackBehaviourPush", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Value
				mscorlib::System::Int16  OpCode::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCode", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int16*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
