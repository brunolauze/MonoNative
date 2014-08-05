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

				void OpCodes::set_Nop(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Break
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Break()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Break");
				}

				void OpCodes::set_Break(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarg_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_0");
				}

				void OpCodes::set_Ldarg_0(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarg_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_1");
				}

				void OpCodes::set_Ldarg_1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarg_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_2");
				}

				void OpCodes::set_Ldarg_2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarg_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_3");
				}

				void OpCodes::set_Ldarg_3(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloc_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_0");
				}

				void OpCodes::set_Ldloc_0(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloc_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_1");
				}

				void OpCodes::set_Ldloc_1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloc_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_2");
				}

				void OpCodes::set_Ldloc_2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloc_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_3");
				}

				void OpCodes::set_Ldloc_3(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stloc_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_0");
				}

				void OpCodes::set_Stloc_0(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stloc_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_1");
				}

				void OpCodes::set_Stloc_1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stloc_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_2");
				}

				void OpCodes::set_Stloc_2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stloc_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_3");
				}

				void OpCodes::set_Stloc_3(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarg_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg_S");
				}

				void OpCodes::set_Ldarg_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarga_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarga_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarga_S");
				}

				void OpCodes::set_Ldarga_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Starg_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Starg_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Starg_S");
				}

				void OpCodes::set_Starg_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloc_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc_S");
				}

				void OpCodes::set_Ldloc_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloca_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloca_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloca_S");
				}

				void OpCodes::set_Ldloca_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stloc_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc_S");
				}

				void OpCodes::set_Stloc_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldnull
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldnull()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldnull");
				}

				void OpCodes::set_Ldnull(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_M1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_M1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_M1");
				}

				void OpCodes::set_Ldc_I4_M1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_0
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_0()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_0");
				}

				void OpCodes::set_Ldc_I4_0(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_1");
				}

				void OpCodes::set_Ldc_I4_1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_2");
				}

				void OpCodes::set_Ldc_I4_2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_3");
				}

				void OpCodes::set_Ldc_I4_3(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_4");
				}

				void OpCodes::set_Ldc_I4_4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_5
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_5()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_5");
				}

				void OpCodes::set_Ldc_I4_5(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_6
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_6()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_6");
				}

				void OpCodes::set_Ldc_I4_6(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_7
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_7()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_7");
				}

				void OpCodes::set_Ldc_I4_7(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_8");
				}

				void OpCodes::set_Ldc_I4_8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4_S");
				}

				void OpCodes::set_Ldc_I4_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I4");
				}

				void OpCodes::set_Ldc_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_I8");
				}

				void OpCodes::set_Ldc_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_R4");
				}

				void OpCodes::set_Ldc_R4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldc_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldc_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldc_R8");
				}

				void OpCodes::set_Ldc_R8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Dup
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Dup()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Dup");
				}

				void OpCodes::set_Dup(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Pop
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Pop()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Pop");
				}

				void OpCodes::set_Pop(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Jmp
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Jmp()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Jmp");
				}

				void OpCodes::set_Jmp(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Call
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Call()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Call");
				}

				void OpCodes::set_Call(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Calli
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Calli()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Calli");
				}

				void OpCodes::set_Calli(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ret
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ret()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ret");
				}

				void OpCodes::set_Ret(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Br_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Br_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Br_S");
				}

				void OpCodes::set_Br_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Brfalse_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brfalse_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brfalse_S");
				}

				void OpCodes::set_Brfalse_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Brtrue_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brtrue_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brtrue_S");
				}

				void OpCodes::set_Brtrue_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Beq_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Beq_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Beq_S");
				}

				void OpCodes::set_Beq_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bge_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge_S");
				}

				void OpCodes::set_Bge_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bgt_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt_S");
				}

				void OpCodes::set_Bgt_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ble_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble_S");
				}

				void OpCodes::set_Ble_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Blt_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt_S");
				}

				void OpCodes::set_Blt_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bne_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bne_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bne_Un_S");
				}

				void OpCodes::set_Bne_Un_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bge_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge_Un_S");
				}

				void OpCodes::set_Bge_Un_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bgt_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt_Un_S");
				}

				void OpCodes::set_Bgt_Un_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ble_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble_Un_S");
				}

				void OpCodes::set_Ble_Un_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Blt_Un_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt_Un_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt_Un_S");
				}

				void OpCodes::set_Blt_Un_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Br
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Br()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Br");
				}

				void OpCodes::set_Br(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Brfalse
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brfalse()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brfalse");
				}

				void OpCodes::set_Brfalse(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Brtrue
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Brtrue()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Brtrue");
				}

				void OpCodes::set_Brtrue(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Beq
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Beq()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Beq");
				}

				void OpCodes::set_Beq(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bge
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge");
				}

				void OpCodes::set_Bge(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bgt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt");
				}

				void OpCodes::set_Bgt(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ble
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble");
				}

				void OpCodes::set_Ble(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Blt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt");
				}

				void OpCodes::set_Blt(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bne_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bne_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bne_Un");
				}

				void OpCodes::set_Bne_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bge_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bge_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bge_Un");
				}

				void OpCodes::set_Bge_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Bgt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Bgt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Bgt_Un");
				}

				void OpCodes::set_Bgt_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ble_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ble_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ble_Un");
				}

				void OpCodes::set_Ble_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Blt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Blt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Blt_Un");
				}

				void OpCodes::set_Blt_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Switch
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Switch()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Switch");
				}

				void OpCodes::set_Switch(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I1");
				}

				void OpCodes::set_Ldind_I1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_U1");
				}

				void OpCodes::set_Ldind_U1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I2");
				}

				void OpCodes::set_Ldind_I2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_U2");
				}

				void OpCodes::set_Ldind_U2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I4");
				}

				void OpCodes::set_Ldind_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_U4");
				}

				void OpCodes::set_Ldind_U4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I8");
				}

				void OpCodes::set_Ldind_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_I");
				}

				void OpCodes::set_Ldind_I(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_R4");
				}

				void OpCodes::set_Ldind_R4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_R8");
				}

				void OpCodes::set_Ldind_R8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldind_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldind_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldind_Ref");
				}

				void OpCodes::set_Ldind_Ref(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_Ref");
				}

				void OpCodes::set_Stind_Ref(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I1");
				}

				void OpCodes::set_Stind_I1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I2");
				}

				void OpCodes::set_Stind_I2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I4");
				}

				void OpCodes::set_Stind_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I8");
				}

				void OpCodes::set_Stind_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_R4");
				}

				void OpCodes::set_Stind_R4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_R8");
				}

				void OpCodes::set_Stind_R8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Add
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Add()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Add");
				}

				void OpCodes::set_Add(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Sub
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sub()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sub");
				}

				void OpCodes::set_Sub(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Mul
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mul()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mul");
				}

				void OpCodes::set_Mul(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Div
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Div()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Div");
				}

				void OpCodes::set_Div(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Div_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Div_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Div_Un");
				}

				void OpCodes::set_Div_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Rem
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Rem()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Rem");
				}

				void OpCodes::set_Rem(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Rem_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Rem_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Rem_Un");
				}

				void OpCodes::set_Rem_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:And
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_And()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "And");
				}

				void OpCodes::set_And(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Or
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Or()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Or");
				}

				void OpCodes::set_Or(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Xor
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Xor()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Xor");
				}

				void OpCodes::set_Xor(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Shl
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Shl()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Shl");
				}

				void OpCodes::set_Shl(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Shr
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Shr()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Shr");
				}

				void OpCodes::set_Shr(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Shr_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Shr_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Shr_Un");
				}

				void OpCodes::set_Shr_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Neg
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Neg()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Neg");
				}

				void OpCodes::set_Neg(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Not
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Not()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Not");
				}

				void OpCodes::set_Not(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I1");
				}

				void OpCodes::set_Conv_I1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I2");
				}

				void OpCodes::set_Conv_I2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I4");
				}

				void OpCodes::set_Conv_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I8");
				}

				void OpCodes::set_Conv_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_R4");
				}

				void OpCodes::set_Conv_R4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_R8");
				}

				void OpCodes::set_Conv_R8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U4");
				}

				void OpCodes::set_Conv_U4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_U8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U8");
				}

				void OpCodes::set_Conv_U8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Callvirt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Callvirt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Callvirt");
				}

				void OpCodes::set_Callvirt(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Cpobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cpobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cpobj");
				}

				void OpCodes::set_Cpobj(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldobj");
				}

				void OpCodes::set_Ldobj(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldstr
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldstr()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldstr");
				}

				void OpCodes::set_Ldstr(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Newobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Newobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Newobj");
				}

				void OpCodes::set_Newobj(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Castclass
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Castclass()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Castclass");
				}

				void OpCodes::set_Castclass(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Isinst
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Isinst()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Isinst");
				}

				void OpCodes::set_Isinst(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_R_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_R_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_R_Un");
				}

				void OpCodes::set_Conv_R_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Unbox
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Unbox()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Unbox");
				}

				void OpCodes::set_Unbox(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Throw
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Throw()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Throw");
				}

				void OpCodes::set_Throw(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldfld");
				}

				void OpCodes::set_Ldfld(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldflda
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldflda()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldflda");
				}

				void OpCodes::set_Ldflda(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stfld");
				}

				void OpCodes::set_Stfld(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldsfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldsfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldsfld");
				}

				void OpCodes::set_Ldsfld(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldsflda
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldsflda()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldsflda");
				}

				void OpCodes::set_Ldsflda(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stsfld
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stsfld()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stsfld");
				}

				void OpCodes::set_Stsfld(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stobj");
				}

				void OpCodes::set_Stobj(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I1_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I1_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I1_Un");
				}

				void OpCodes::set_Conv_Ovf_I1_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I2_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I2_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I2_Un");
				}

				void OpCodes::set_Conv_Ovf_I2_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I4_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I4_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I4_Un");
				}

				void OpCodes::set_Conv_Ovf_I4_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I8_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I8_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I8_Un");
				}

				void OpCodes::set_Conv_Ovf_I8_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U1_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U1_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U1_Un");
				}

				void OpCodes::set_Conv_Ovf_U1_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U2_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U2_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U2_Un");
				}

				void OpCodes::set_Conv_Ovf_U2_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U4_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U4_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U4_Un");
				}

				void OpCodes::set_Conv_Ovf_U4_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U8_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U8_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U8_Un");
				}

				void OpCodes::set_Conv_Ovf_U8_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I_Un");
				}

				void OpCodes::set_Conv_Ovf_I_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U_Un");
				}

				void OpCodes::set_Conv_Ovf_U_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Box
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Box()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Box");
				}

				void OpCodes::set_Box(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Newarr
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Newarr()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Newarr");
				}

				void OpCodes::set_Newarr(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldlen
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldlen()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldlen");
				}

				void OpCodes::set_Ldlen(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelema
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelema()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelema");
				}

				void OpCodes::set_Ldelema(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I1");
				}

				void OpCodes::set_Ldelem_I1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_U1");
				}

				void OpCodes::set_Ldelem_U1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I2");
				}

				void OpCodes::set_Ldelem_I2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_U2");
				}

				void OpCodes::set_Ldelem_U2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I4");
				}

				void OpCodes::set_Ldelem_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_U4");
				}

				void OpCodes::set_Ldelem_U4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I8");
				}

				void OpCodes::set_Ldelem_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_I");
				}

				void OpCodes::set_Ldelem_I(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_R4");
				}

				void OpCodes::set_Ldelem_R4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_R8");
				}

				void OpCodes::set_Ldelem_R8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem_Ref");
				}

				void OpCodes::set_Ldelem_Ref(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I");
				}

				void OpCodes::set_Stelem_I(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I1");
				}

				void OpCodes::set_Stelem_I1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I2");
				}

				void OpCodes::set_Stelem_I2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I4");
				}

				void OpCodes::set_Stelem_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_I8");
				}

				void OpCodes::set_Stelem_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_R4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_R4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_R4");
				}

				void OpCodes::set_Stelem_R4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_R8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_R8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_R8");
				}

				void OpCodes::set_Stelem_R8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem_Ref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem_Ref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem_Ref");
				}

				void OpCodes::set_Stelem_Ref(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldelem
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldelem()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldelem");
				}

				void OpCodes::set_Ldelem(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stelem
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stelem()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stelem");
				}

				void OpCodes::set_Stelem(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Unbox_Any
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Unbox_Any()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Unbox_Any");
				}

				void OpCodes::set_Unbox_Any(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I1");
				}

				void OpCodes::set_Conv_Ovf_I1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U1");
				}

				void OpCodes::set_Conv_Ovf_U1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I2");
				}

				void OpCodes::set_Conv_Ovf_I2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U2");
				}

				void OpCodes::set_Conv_Ovf_U2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I4");
				}

				void OpCodes::set_Conv_Ovf_I4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U4");
				}

				void OpCodes::set_Conv_Ovf_U4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I8");
				}

				void OpCodes::set_Conv_Ovf_I8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U8
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U8()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U8");
				}

				void OpCodes::set_Conv_Ovf_U8(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Refanyval
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Refanyval()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Refanyval");
				}

				void OpCodes::set_Refanyval(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ckfinite
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ckfinite()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ckfinite");
				}

				void OpCodes::set_Ckfinite(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Mkrefany
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mkrefany()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mkrefany");
				}

				void OpCodes::set_Mkrefany(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldtoken
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldtoken()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldtoken");
				}

				void OpCodes::set_Ldtoken(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_U2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U2");
				}

				void OpCodes::set_Conv_U2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_U1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U1");
				}

				void OpCodes::set_Conv_U1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_I");
				}

				void OpCodes::set_Conv_I(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_I");
				}

				void OpCodes::set_Conv_Ovf_I(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_Ovf_U
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_Ovf_U()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_Ovf_U");
				}

				void OpCodes::set_Conv_Ovf_U(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Add_Ovf
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Add_Ovf()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Add_Ovf");
				}

				void OpCodes::set_Add_Ovf(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Add_Ovf_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Add_Ovf_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Add_Ovf_Un");
				}

				void OpCodes::set_Add_Ovf_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Mul_Ovf
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mul_Ovf()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mul_Ovf");
				}

				void OpCodes::set_Mul_Ovf(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Mul_Ovf_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Mul_Ovf_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Mul_Ovf_Un");
				}

				void OpCodes::set_Mul_Ovf_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Sub_Ovf
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sub_Ovf()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sub_Ovf");
				}

				void OpCodes::set_Sub_Ovf(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Sub_Ovf_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sub_Ovf_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sub_Ovf_Un");
				}

				void OpCodes::set_Sub_Ovf_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Endfinally
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Endfinally()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Endfinally");
				}

				void OpCodes::set_Endfinally(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Leave
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Leave()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Leave");
				}

				void OpCodes::set_Leave(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Leave_S
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Leave_S()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Leave_S");
				}

				void OpCodes::set_Leave_S(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stind_I
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stind_I()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stind_I");
				}

				void OpCodes::set_Stind_I(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Conv_U
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Conv_U()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Conv_U");
				}

				void OpCodes::set_Conv_U(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix7
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix7()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix7");
				}

				void OpCodes::set_Prefix7(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix6
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix6()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix6");
				}

				void OpCodes::set_Prefix6(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix5
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix5()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix5");
				}

				void OpCodes::set_Prefix5(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix4
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix4()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix4");
				}

				void OpCodes::set_Prefix4(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix3
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix3()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix3");
				}

				void OpCodes::set_Prefix3(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix2
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix2()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix2");
				}

				void OpCodes::set_Prefix2(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefix1
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefix1()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefix1");
				}

				void OpCodes::set_Prefix1(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Prefixref
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Prefixref()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Prefixref");
				}

				void OpCodes::set_Prefixref(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Arglist
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Arglist()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Arglist");
				}

				void OpCodes::set_Arglist(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ceq
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ceq()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ceq");
				}

				void OpCodes::set_Ceq(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Cgt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cgt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cgt");
				}

				void OpCodes::set_Cgt(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Cgt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cgt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cgt_Un");
				}

				void OpCodes::set_Cgt_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Clt
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Clt()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Clt");
				}

				void OpCodes::set_Clt(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Clt_Un
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Clt_Un()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Clt_Un");
				}

				void OpCodes::set_Clt_Un(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldftn
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldftn()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldftn");
				}

				void OpCodes::set_Ldftn(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldvirtftn
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldvirtftn()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldvirtftn");
				}

				void OpCodes::set_Ldvirtftn(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarg
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarg()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarg");
				}

				void OpCodes::set_Ldarg(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldarga
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldarga()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldarga");
				}

				void OpCodes::set_Ldarga(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Starg
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Starg()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Starg");
				}

				void OpCodes::set_Starg(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloc
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloc()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloc");
				}

				void OpCodes::set_Ldloc(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Ldloca
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Ldloca()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Ldloca");
				}

				void OpCodes::set_Ldloca(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Stloc
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Stloc()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Stloc");
				}

				void OpCodes::set_Stloc(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Localloc
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Localloc()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Localloc");
				}

				void OpCodes::set_Localloc(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Endfilter
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Endfilter()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Endfilter");
				}

				void OpCodes::set_Endfilter(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Unaligned
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Unaligned()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Unaligned");
				}

				void OpCodes::set_Unaligned(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Volatile
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Volatile()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Volatile");
				}

				void OpCodes::set_Volatile(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Tailcall
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Tailcall()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Tailcall");
				}

				void OpCodes::set_Tailcall(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Initobj
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Initobj()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Initobj");
				}

				void OpCodes::set_Initobj(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Constrained
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Constrained()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Constrained");
				}

				void OpCodes::set_Constrained(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Cpblk
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Cpblk()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Cpblk");
				}

				void OpCodes::set_Cpblk(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Initblk
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Initblk()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Initblk");
				}

				void OpCodes::set_Initblk(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Rethrow
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Rethrow()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Rethrow");
				}

				void OpCodes::set_Rethrow(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Sizeof
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Sizeof()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Sizeof");
				}

				void OpCodes::set_Sizeof(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Refanytype
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Refanytype()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Refanytype");
				}

				void OpCodes::set_Refanytype(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}

					//	Get/Set:Readonly
				mscorlib::System::Reflection::Emit::OpCode OpCodes::get_Readonly()
				{
					return Global::GetFieldValue("mscorlib", "System.Reflection.Emit", "OpCodes", 0, NULL, "Readonly");
				}

				void OpCodes::set_Readonly(mscorlib::System::Reflection::Emit::OpCode  value)
				{
					throw;
				}


			}
		}
	}
}
