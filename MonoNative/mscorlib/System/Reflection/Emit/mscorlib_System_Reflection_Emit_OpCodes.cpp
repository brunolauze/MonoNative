#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_OpCodes.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_OpCode.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Boolean OpCodes::TakesSingleByteArgument(mscorlib::System::Reflection::Emit::OpCode inst)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inst).name());
						__parameters__[0] = (MonoObject*)inst;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "TakesSingleByteArgument", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

					//	Get/Set:Nop
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Nop()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Nop");
				}


					//	Get/Set:Break
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Break()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Break");
				}


					//	Get/Set:Ldarg_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_0");
				}


					//	Get/Set:Ldarg_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_1");
				}


					//	Get/Set:Ldarg_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_2");
				}


					//	Get/Set:Ldarg_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_3");
				}


					//	Get/Set:Ldloc_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_0");
				}


					//	Get/Set:Ldloc_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_1");
				}


					//	Get/Set:Ldloc_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_2");
				}


					//	Get/Set:Ldloc_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_3");
				}


					//	Get/Set:Stloc_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_0");
				}


					//	Get/Set:Stloc_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_1");
				}


					//	Get/Set:Stloc_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_2");
				}


					//	Get/Set:Stloc_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_3");
				}


					//	Get/Set:Ldarg_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_S");
				}


					//	Get/Set:Ldarga_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarga_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarga_S");
				}


					//	Get/Set:Starg_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Starg_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Starg_S");
				}


					//	Get/Set:Ldloc_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_S");
				}


					//	Get/Set:Ldloca_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloca_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloca_S");
				}


					//	Get/Set:Stloc_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_S");
				}


					//	Get/Set:Ldnull
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldnull()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldnull");
				}


					//	Get/Set:Ldc_I4_M1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_M1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_M1");
				}


					//	Get/Set:Ldc_I4_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_0");
				}


					//	Get/Set:Ldc_I4_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_1");
				}


					//	Get/Set:Ldc_I4_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_2");
				}


					//	Get/Set:Ldc_I4_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_3");
				}


					//	Get/Set:Ldc_I4_4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_4");
				}


					//	Get/Set:Ldc_I4_5
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_5()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_5");
				}


					//	Get/Set:Ldc_I4_6
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_6()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_6");
				}


					//	Get/Set:Ldc_I4_7
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_7()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_7");
				}


					//	Get/Set:Ldc_I4_8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_8");
				}


					//	Get/Set:Ldc_I4_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_S");
				}


					//	Get/Set:Ldc_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4");
				}


					//	Get/Set:Ldc_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I8");
				}


					//	Get/Set:Ldc_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_R4");
				}


					//	Get/Set:Ldc_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_R8");
				}


					//	Get/Set:Dup
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Dup()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Dup");
				}


					//	Get/Set:Pop
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Pop()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Pop");
				}


					//	Get/Set:Jmp
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Jmp()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Jmp");
				}


					//	Get/Set:Call
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Call()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Call");
				}


					//	Get/Set:Calli
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Calli()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Calli");
				}


					//	Get/Set:Ret
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ret()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ret");
				}


					//	Get/Set:Br_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Br_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Br_S");
				}


					//	Get/Set:Brfalse_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brfalse_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brfalse_S");
				}


					//	Get/Set:Brtrue_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brtrue_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brtrue_S");
				}


					//	Get/Set:Beq_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Beq_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Beq_S");
				}


					//	Get/Set:Bge_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge_S");
				}


					//	Get/Set:Bgt_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt_S");
				}


					//	Get/Set:Ble_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble_S");
				}


					//	Get/Set:Blt_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt_S");
				}


					//	Get/Set:Bne_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bne_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bne_Un_S");
				}


					//	Get/Set:Bge_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge_Un_S");
				}


					//	Get/Set:Bgt_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt_Un_S");
				}


					//	Get/Set:Ble_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble_Un_S");
				}


					//	Get/Set:Blt_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt_Un_S");
				}


					//	Get/Set:Br
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Br()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Br");
				}


					//	Get/Set:Brfalse
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brfalse()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brfalse");
				}


					//	Get/Set:Brtrue
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brtrue()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brtrue");
				}


					//	Get/Set:Beq
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Beq()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Beq");
				}


					//	Get/Set:Bge
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge");
				}


					//	Get/Set:Bgt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt");
				}


					//	Get/Set:Ble
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble");
				}


					//	Get/Set:Blt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt");
				}


					//	Get/Set:Bne_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bne_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bne_Un");
				}


					//	Get/Set:Bge_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge_Un");
				}


					//	Get/Set:Bgt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt_Un");
				}


					//	Get/Set:Ble_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble_Un");
				}


					//	Get/Set:Blt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt_Un");
				}


					//	Get/Set:Switch
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Switch()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Switch");
				}


					//	Get/Set:Ldind_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I1");
				}


					//	Get/Set:Ldind_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_U1");
				}


					//	Get/Set:Ldind_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I2");
				}


					//	Get/Set:Ldind_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_U2");
				}


					//	Get/Set:Ldind_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I4");
				}


					//	Get/Set:Ldind_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_U4");
				}


					//	Get/Set:Ldind_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I8");
				}


					//	Get/Set:Ldind_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I");
				}


					//	Get/Set:Ldind_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_R4");
				}


					//	Get/Set:Ldind_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_R8");
				}


					//	Get/Set:Ldind_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_Ref");
				}


					//	Get/Set:Stind_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_Ref");
				}


					//	Get/Set:Stind_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I1");
				}


					//	Get/Set:Stind_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I2");
				}


					//	Get/Set:Stind_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I4");
				}


					//	Get/Set:Stind_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I8");
				}


					//	Get/Set:Stind_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_R4");
				}


					//	Get/Set:Stind_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_R8");
				}


					//	Get/Set:Add
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Add()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Add");
				}


					//	Get/Set:Sub
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sub()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sub");
				}


					//	Get/Set:Mul
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mul()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mul");
				}


					//	Get/Set:Div
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Div()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Div");
				}


					//	Get/Set:Div_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Div_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Div_Un");
				}


					//	Get/Set:Rem
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Rem()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Rem");
				}


					//	Get/Set:Rem_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Rem_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Rem_Un");
				}


					//	Get/Set:And
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_And()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "And");
				}


					//	Get/Set:Or
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Or()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Or");
				}


					//	Get/Set:Xor
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Xor()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Xor");
				}


					//	Get/Set:Shl
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Shl()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Shl");
				}


					//	Get/Set:Shr
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Shr()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Shr");
				}


					//	Get/Set:Shr_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Shr_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Shr_Un");
				}


					//	Get/Set:Neg
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Neg()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Neg");
				}


					//	Get/Set:Not
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Not()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Not");
				}


					//	Get/Set:Conv_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I1");
				}


					//	Get/Set:Conv_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I2");
				}


					//	Get/Set:Conv_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I4");
				}


					//	Get/Set:Conv_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I8");
				}


					//	Get/Set:Conv_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_R4");
				}


					//	Get/Set:Conv_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_R8");
				}


					//	Get/Set:Conv_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U4");
				}


					//	Get/Set:Conv_U8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U8");
				}


					//	Get/Set:Callvirt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Callvirt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Callvirt");
				}


					//	Get/Set:Cpobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cpobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cpobj");
				}


					//	Get/Set:Ldobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldobj");
				}


					//	Get/Set:Ldstr
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldstr()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldstr");
				}


					//	Get/Set:Newobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Newobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Newobj");
				}


					//	Get/Set:Castclass
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Castclass()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Castclass");
				}


					//	Get/Set:Isinst
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Isinst()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Isinst");
				}


					//	Get/Set:Conv_R_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_R_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_R_Un");
				}


					//	Get/Set:Unbox
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Unbox()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Unbox");
				}


					//	Get/Set:Throw
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Throw()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Throw");
				}


					//	Get/Set:Ldfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldfld");
				}


					//	Get/Set:Ldflda
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldflda()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldflda");
				}


					//	Get/Set:Stfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stfld");
				}


					//	Get/Set:Ldsfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldsfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldsfld");
				}


					//	Get/Set:Ldsflda
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldsflda()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldsflda");
				}


					//	Get/Set:Stsfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stsfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stsfld");
				}


					//	Get/Set:Stobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stobj");
				}


					//	Get/Set:Conv_Ovf_I1_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I1_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I1_Un");
				}


					//	Get/Set:Conv_Ovf_I2_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I2_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I2_Un");
				}


					//	Get/Set:Conv_Ovf_I4_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I4_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I4_Un");
				}


					//	Get/Set:Conv_Ovf_I8_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I8_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I8_Un");
				}


					//	Get/Set:Conv_Ovf_U1_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U1_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U1_Un");
				}


					//	Get/Set:Conv_Ovf_U2_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U2_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U2_Un");
				}


					//	Get/Set:Conv_Ovf_U4_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U4_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U4_Un");
				}


					//	Get/Set:Conv_Ovf_U8_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U8_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U8_Un");
				}


					//	Get/Set:Conv_Ovf_I_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I_Un");
				}


					//	Get/Set:Conv_Ovf_U_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U_Un");
				}


					//	Get/Set:Box
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Box()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Box");
				}


					//	Get/Set:Newarr
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Newarr()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Newarr");
				}


					//	Get/Set:Ldlen
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldlen()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldlen");
				}


					//	Get/Set:Ldelema
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelema()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelema");
				}


					//	Get/Set:Ldelem_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I1");
				}


					//	Get/Set:Ldelem_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_U1");
				}


					//	Get/Set:Ldelem_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I2");
				}


					//	Get/Set:Ldelem_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_U2");
				}


					//	Get/Set:Ldelem_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I4");
				}


					//	Get/Set:Ldelem_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_U4");
				}


					//	Get/Set:Ldelem_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I8");
				}


					//	Get/Set:Ldelem_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I");
				}


					//	Get/Set:Ldelem_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_R4");
				}


					//	Get/Set:Ldelem_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_R8");
				}


					//	Get/Set:Ldelem_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_Ref");
				}


					//	Get/Set:Stelem_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I");
				}


					//	Get/Set:Stelem_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I1");
				}


					//	Get/Set:Stelem_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I2");
				}


					//	Get/Set:Stelem_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I4");
				}


					//	Get/Set:Stelem_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I8");
				}


					//	Get/Set:Stelem_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_R4");
				}


					//	Get/Set:Stelem_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_R8");
				}


					//	Get/Set:Stelem_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_Ref");
				}


					//	Get/Set:Ldelem
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem");
				}


					//	Get/Set:Stelem
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem");
				}


					//	Get/Set:Unbox_Any
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Unbox_Any()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Unbox_Any");
				}


					//	Get/Set:Conv_Ovf_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I1");
				}


					//	Get/Set:Conv_Ovf_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U1");
				}


					//	Get/Set:Conv_Ovf_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I2");
				}


					//	Get/Set:Conv_Ovf_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U2");
				}


					//	Get/Set:Conv_Ovf_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I4");
				}


					//	Get/Set:Conv_Ovf_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U4");
				}


					//	Get/Set:Conv_Ovf_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I8");
				}


					//	Get/Set:Conv_Ovf_U8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U8");
				}


					//	Get/Set:Refanyval
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Refanyval()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Refanyval");
				}


					//	Get/Set:Ckfinite
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ckfinite()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ckfinite");
				}


					//	Get/Set:Mkrefany
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mkrefany()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mkrefany");
				}


					//	Get/Set:Ldtoken
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldtoken()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldtoken");
				}


					//	Get/Set:Conv_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U2");
				}


					//	Get/Set:Conv_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U1");
				}


					//	Get/Set:Conv_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I");
				}


					//	Get/Set:Conv_Ovf_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I");
				}


					//	Get/Set:Conv_Ovf_U
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U");
				}


					//	Get/Set:Add_Ovf
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Add_Ovf()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Add_Ovf");
				}


					//	Get/Set:Add_Ovf_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Add_Ovf_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Add_Ovf_Un");
				}


					//	Get/Set:Mul_Ovf
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mul_Ovf()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mul_Ovf");
				}


					//	Get/Set:Mul_Ovf_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mul_Ovf_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mul_Ovf_Un");
				}


					//	Get/Set:Sub_Ovf
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sub_Ovf()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sub_Ovf");
				}


					//	Get/Set:Sub_Ovf_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sub_Ovf_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sub_Ovf_Un");
				}


					//	Get/Set:Endfinally
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Endfinally()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Endfinally");
				}


					//	Get/Set:Leave
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Leave()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Leave");
				}


					//	Get/Set:Leave_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Leave_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Leave_S");
				}


					//	Get/Set:Stind_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I");
				}


					//	Get/Set:Conv_U
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U");
				}


					//	Get/Set:Prefix7
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix7()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix7");
				}


					//	Get/Set:Prefix6
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix6()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix6");
				}


					//	Get/Set:Prefix5
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix5()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix5");
				}


					//	Get/Set:Prefix4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix4");
				}


					//	Get/Set:Prefix3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix3");
				}


					//	Get/Set:Prefix2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix2");
				}


					//	Get/Set:Prefix1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix1");
				}


					//	Get/Set:Prefixref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefixref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefixref");
				}


					//	Get/Set:Arglist
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Arglist()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Arglist");
				}


					//	Get/Set:Ceq
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ceq()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ceq");
				}


					//	Get/Set:Cgt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cgt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cgt");
				}


					//	Get/Set:Cgt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cgt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cgt_Un");
				}


					//	Get/Set:Clt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Clt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Clt");
				}


					//	Get/Set:Clt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Clt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Clt_Un");
				}


					//	Get/Set:Ldftn
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldftn()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldftn");
				}


					//	Get/Set:Ldvirtftn
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldvirtftn()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldvirtftn");
				}


					//	Get/Set:Ldarg
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg");
				}


					//	Get/Set:Ldarga
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarga()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarga");
				}


					//	Get/Set:Starg
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Starg()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Starg");
				}


					//	Get/Set:Ldloc
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc");
				}


					//	Get/Set:Ldloca
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloca()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloca");
				}


					//	Get/Set:Stloc
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc");
				}


					//	Get/Set:Localloc
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Localloc()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Localloc");
				}


					//	Get/Set:Endfilter
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Endfilter()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Endfilter");
				}


					//	Get/Set:Unaligned
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Unaligned()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Unaligned");
				}


					//	Get/Set:Volatile
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Volatile()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Volatile");
				}


					//	Get/Set:Tailcall
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Tailcall()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Tailcall");
				}


					//	Get/Set:Initobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Initobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Initobj");
				}


					//	Get/Set:Constrained
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Constrained()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Constrained");
				}


					//	Get/Set:Cpblk
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cpblk()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cpblk");
				}


					//	Get/Set:Initblk
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Initblk()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Initblk");
				}


					//	Get/Set:Rethrow
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Rethrow()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Rethrow");
				}


					//	Get/Set:Sizeof
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sizeof()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sizeof");
				}


					//	Get/Set:Refanytype
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Refanytype()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Refanytype");
				}


					//	Get/Set:Readonly
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Readonly()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Readonly");
				}



			}
		}
	}
}
