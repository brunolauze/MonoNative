#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_OPCODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_OPCODE_H

#include <mscorlib/System/mscorlib_System_ValueType.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_OpCodeType.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_OperandType.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FlowControl.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_StackBehaviour.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class OpCode
					: public mscorlib::System::ValueType
				{
				public:
					OpCode(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::ValueType(nativeTypeInfo)
					{
					};
				
					OpCode(MonoObject *nativeObject)
					: mscorlib::System::ValueType(nativeObject)
					{
					};
				
					~OpCode()
					{
					};
				

					OpCode & operator=(OpCode &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(OpCode &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Reflection::Emit::OpCode obj);
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Size)) mscorlib::System::Int32  Size;
					__declspec(property(get=get_OpCodeType)) mscorlib::System::Reflection::Emit::OpCodeType::__ENUM__  OpCodeType;
					__declspec(property(get=get_OperandType)) mscorlib::System::Reflection::Emit::OperandType::__ENUM__  OperandType;
					__declspec(property(get=get_FlowControl)) mscorlib::System::Reflection::Emit::FlowControl::__ENUM__  FlowControl;
					__declspec(property(get=get_StackBehaviourPop)) mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__  StackBehaviourPop;
					__declspec(property(get=get_StackBehaviourPush)) mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__  StackBehaviourPush;
					__declspec(property(get=get_Value)) mscorlib::System::Int16  Value;

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:Size
					mscorlib::System::Int32  get_Size() const;

					//	Get:OpCodeType
					mscorlib::System::Reflection::Emit::OpCodeType::__ENUM__  get_OpCodeType() const;

					//	Get:OperandType
					mscorlib::System::Reflection::Emit::OperandType::__ENUM__  get_OperandType() const;

					//	Get:FlowControl
					mscorlib::System::Reflection::Emit::FlowControl::__ENUM__  get_FlowControl() const;

					//	Get:StackBehaviourPop
					mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__  get_StackBehaviourPop() const;

					//	Get:StackBehaviourPush
					mscorlib::System::Reflection::Emit::StackBehaviour::__ENUM__  get_StackBehaviourPush() const;

					//	Get:Value
					mscorlib::System::Int16  get_Value() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
