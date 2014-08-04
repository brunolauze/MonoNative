#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_OPCODES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_OPCODES_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

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

				class OpCode;
				

			}
		}
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

				class OpCodes
					: public mscorlib::System::Object
				{
				public:
					OpCodes(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					OpCodes(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~OpCodes()
					{
					};
				

					OpCodes & operator=(OpCodes &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Boolean  TakesSingleByteArgument(mscorlib::System::Reflection::Emit::OpCode inst);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::Reflection::Emit::OpCode> Nop;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Break;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarg_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarg_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarg_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarg_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloc_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloc_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloc_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloc_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stloc_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stloc_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stloc_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stloc_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarg_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarga_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Starg_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloc_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloca_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stloc_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldnull;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_M1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_5;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_6;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_7;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldc_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Dup;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Pop;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Jmp;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Call;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Calli;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ret;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Br_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Brfalse_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Brtrue_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Beq_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bge_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bgt_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ble_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Blt_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bne_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bge_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bgt_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ble_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Blt_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Br;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Brfalse;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Brtrue;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Beq;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bge;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bgt;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ble;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Blt;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bne_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bge_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Bgt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ble_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Blt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Switch;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldind_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Add;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Sub;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Mul;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Div;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Div_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Rem;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Rem_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> And;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Or;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Xor;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Shl;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Shr;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Shr_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Neg;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Not;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_U8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Callvirt;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Cpobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldstr;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Newobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Castclass;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Isinst;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_R_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Unbox;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Throw;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldflda;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldsfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldsflda;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stsfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I1_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I2_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I4_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I8_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U1_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U2_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U4_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U8_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Box;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Newarr;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldlen;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelema;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldelem;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stelem;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Unbox_Any;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U8;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Refanyval;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ckfinite;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Mkrefany;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldtoken;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_Ovf_U;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Add_Ovf;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Add_Ovf_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Mul_Ovf;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Mul_Ovf_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Sub_Ovf;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Sub_Ovf_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Endfinally;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Leave;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Leave_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stind_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Conv_U;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix7;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix6;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix5;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix4;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix3;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix2;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefix1;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Prefixref;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Arglist;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ceq;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Cgt;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Cgt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Clt;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Clt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldftn;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldvirtftn;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarg;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldarga;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Starg;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloc;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Ldloca;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Stloc;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Localloc;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Endfilter;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Unaligned;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Volatile;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Tailcall;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Initobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Constrained;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Cpblk;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Initblk;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Rethrow;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Sizeof;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Refanytype;
					static Property<mscorlib::System::Reflection::Emit::OpCode> Readonly;

					//	Get/Set:Nop
					static mscorlib::System::Reflection::Emit::OpCode  get_Nop();

					//	Get/Set:Break
					static mscorlib::System::Reflection::Emit::OpCode  get_Break();

					//	Get/Set:Ldarg_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_0();

					//	Get/Set:Ldarg_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_1();

					//	Get/Set:Ldarg_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_2();

					//	Get/Set:Ldarg_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_3();

					//	Get/Set:Ldloc_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_0();

					//	Get/Set:Ldloc_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_1();

					//	Get/Set:Ldloc_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_2();

					//	Get/Set:Ldloc_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_3();

					//	Get/Set:Stloc_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_0();

					//	Get/Set:Stloc_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_1();

					//	Get/Set:Stloc_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_2();

					//	Get/Set:Stloc_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_3();

					//	Get/Set:Ldarg_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_S();

					//	Get/Set:Ldarga_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarga_S();

					//	Get/Set:Starg_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Starg_S();

					//	Get/Set:Ldloc_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_S();

					//	Get/Set:Ldloca_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloca_S();

					//	Get/Set:Stloc_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_S();

					//	Get/Set:Ldnull
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldnull();

					//	Get/Set:Ldc_I4_M1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_M1();

					//	Get/Set:Ldc_I4_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_0();

					//	Get/Set:Ldc_I4_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_1();

					//	Get/Set:Ldc_I4_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_2();

					//	Get/Set:Ldc_I4_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_3();

					//	Get/Set:Ldc_I4_4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_4();

					//	Get/Set:Ldc_I4_5
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_5();

					//	Get/Set:Ldc_I4_6
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_6();

					//	Get/Set:Ldc_I4_7
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_7();

					//	Get/Set:Ldc_I4_8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_8();

					//	Get/Set:Ldc_I4_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_S();

					//	Get/Set:Ldc_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4();

					//	Get/Set:Ldc_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I8();

					//	Get/Set:Ldc_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_R4();

					//	Get/Set:Ldc_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_R8();

					//	Get/Set:Dup
					static mscorlib::System::Reflection::Emit::OpCode  get_Dup();

					//	Get/Set:Pop
					static mscorlib::System::Reflection::Emit::OpCode  get_Pop();

					//	Get/Set:Jmp
					static mscorlib::System::Reflection::Emit::OpCode  get_Jmp();

					//	Get/Set:Call
					static mscorlib::System::Reflection::Emit::OpCode  get_Call();

					//	Get/Set:Calli
					static mscorlib::System::Reflection::Emit::OpCode  get_Calli();

					//	Get/Set:Ret
					static mscorlib::System::Reflection::Emit::OpCode  get_Ret();

					//	Get/Set:Br_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Br_S();

					//	Get/Set:Brfalse_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Brfalse_S();

					//	Get/Set:Brtrue_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Brtrue_S();

					//	Get/Set:Beq_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Beq_S();

					//	Get/Set:Bge_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge_S();

					//	Get/Set:Bgt_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt_S();

					//	Get/Set:Ble_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble_S();

					//	Get/Set:Blt_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt_S();

					//	Get/Set:Bne_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bne_Un_S();

					//	Get/Set:Bge_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge_Un_S();

					//	Get/Set:Bgt_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt_Un_S();

					//	Get/Set:Ble_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble_Un_S();

					//	Get/Set:Blt_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt_Un_S();

					//	Get/Set:Br
					static mscorlib::System::Reflection::Emit::OpCode  get_Br();

					//	Get/Set:Brfalse
					static mscorlib::System::Reflection::Emit::OpCode  get_Brfalse();

					//	Get/Set:Brtrue
					static mscorlib::System::Reflection::Emit::OpCode  get_Brtrue();

					//	Get/Set:Beq
					static mscorlib::System::Reflection::Emit::OpCode  get_Beq();

					//	Get/Set:Bge
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge();

					//	Get/Set:Bgt
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt();

					//	Get/Set:Ble
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble();

					//	Get/Set:Blt
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt();

					//	Get/Set:Bne_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Bne_Un();

					//	Get/Set:Bge_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge_Un();

					//	Get/Set:Bgt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt_Un();

					//	Get/Set:Ble_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble_Un();

					//	Get/Set:Blt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt_Un();

					//	Get/Set:Switch
					static mscorlib::System::Reflection::Emit::OpCode  get_Switch();

					//	Get/Set:Ldind_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I1();

					//	Get/Set:Ldind_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_U1();

					//	Get/Set:Ldind_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I2();

					//	Get/Set:Ldind_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_U2();

					//	Get/Set:Ldind_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I4();

					//	Get/Set:Ldind_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_U4();

					//	Get/Set:Ldind_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I8();

					//	Get/Set:Ldind_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I();

					//	Get/Set:Ldind_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_R4();

					//	Get/Set:Ldind_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_R8();

					//	Get/Set:Ldind_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_Ref();

					//	Get/Set:Stind_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_Ref();

					//	Get/Set:Stind_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I1();

					//	Get/Set:Stind_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I2();

					//	Get/Set:Stind_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I4();

					//	Get/Set:Stind_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I8();

					//	Get/Set:Stind_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_R4();

					//	Get/Set:Stind_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_R8();

					//	Get/Set:Add
					static mscorlib::System::Reflection::Emit::OpCode  get_Add();

					//	Get/Set:Sub
					static mscorlib::System::Reflection::Emit::OpCode  get_Sub();

					//	Get/Set:Mul
					static mscorlib::System::Reflection::Emit::OpCode  get_Mul();

					//	Get/Set:Div
					static mscorlib::System::Reflection::Emit::OpCode  get_Div();

					//	Get/Set:Div_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Div_Un();

					//	Get/Set:Rem
					static mscorlib::System::Reflection::Emit::OpCode  get_Rem();

					//	Get/Set:Rem_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Rem_Un();

					//	Get/Set:And
					static mscorlib::System::Reflection::Emit::OpCode  get_And();

					//	Get/Set:Or
					static mscorlib::System::Reflection::Emit::OpCode  get_Or();

					//	Get/Set:Xor
					static mscorlib::System::Reflection::Emit::OpCode  get_Xor();

					//	Get/Set:Shl
					static mscorlib::System::Reflection::Emit::OpCode  get_Shl();

					//	Get/Set:Shr
					static mscorlib::System::Reflection::Emit::OpCode  get_Shr();

					//	Get/Set:Shr_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Shr_Un();

					//	Get/Set:Neg
					static mscorlib::System::Reflection::Emit::OpCode  get_Neg();

					//	Get/Set:Not
					static mscorlib::System::Reflection::Emit::OpCode  get_Not();

					//	Get/Set:Conv_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I1();

					//	Get/Set:Conv_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I2();

					//	Get/Set:Conv_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I4();

					//	Get/Set:Conv_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I8();

					//	Get/Set:Conv_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_R4();

					//	Get/Set:Conv_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_R8();

					//	Get/Set:Conv_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U4();

					//	Get/Set:Conv_U8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U8();

					//	Get/Set:Callvirt
					static mscorlib::System::Reflection::Emit::OpCode  get_Callvirt();

					//	Get/Set:Cpobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Cpobj();

					//	Get/Set:Ldobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldobj();

					//	Get/Set:Ldstr
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldstr();

					//	Get/Set:Newobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Newobj();

					//	Get/Set:Castclass
					static mscorlib::System::Reflection::Emit::OpCode  get_Castclass();

					//	Get/Set:Isinst
					static mscorlib::System::Reflection::Emit::OpCode  get_Isinst();

					//	Get/Set:Conv_R_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_R_Un();

					//	Get/Set:Unbox
					static mscorlib::System::Reflection::Emit::OpCode  get_Unbox();

					//	Get/Set:Throw
					static mscorlib::System::Reflection::Emit::OpCode  get_Throw();

					//	Get/Set:Ldfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldfld();

					//	Get/Set:Ldflda
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldflda();

					//	Get/Set:Stfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Stfld();

					//	Get/Set:Ldsfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldsfld();

					//	Get/Set:Ldsflda
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldsflda();

					//	Get/Set:Stsfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Stsfld();

					//	Get/Set:Stobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Stobj();

					//	Get/Set:Conv_Ovf_I1_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I1_Un();

					//	Get/Set:Conv_Ovf_I2_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I2_Un();

					//	Get/Set:Conv_Ovf_I4_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I4_Un();

					//	Get/Set:Conv_Ovf_I8_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I8_Un();

					//	Get/Set:Conv_Ovf_U1_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U1_Un();

					//	Get/Set:Conv_Ovf_U2_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U2_Un();

					//	Get/Set:Conv_Ovf_U4_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U4_Un();

					//	Get/Set:Conv_Ovf_U8_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U8_Un();

					//	Get/Set:Conv_Ovf_I_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I_Un();

					//	Get/Set:Conv_Ovf_U_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U_Un();

					//	Get/Set:Box
					static mscorlib::System::Reflection::Emit::OpCode  get_Box();

					//	Get/Set:Newarr
					static mscorlib::System::Reflection::Emit::OpCode  get_Newarr();

					//	Get/Set:Ldlen
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldlen();

					//	Get/Set:Ldelema
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelema();

					//	Get/Set:Ldelem_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I1();

					//	Get/Set:Ldelem_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_U1();

					//	Get/Set:Ldelem_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I2();

					//	Get/Set:Ldelem_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_U2();

					//	Get/Set:Ldelem_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I4();

					//	Get/Set:Ldelem_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_U4();

					//	Get/Set:Ldelem_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I8();

					//	Get/Set:Ldelem_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I();

					//	Get/Set:Ldelem_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_R4();

					//	Get/Set:Ldelem_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_R8();

					//	Get/Set:Ldelem_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_Ref();

					//	Get/Set:Stelem_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I();

					//	Get/Set:Stelem_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I1();

					//	Get/Set:Stelem_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I2();

					//	Get/Set:Stelem_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I4();

					//	Get/Set:Stelem_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I8();

					//	Get/Set:Stelem_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_R4();

					//	Get/Set:Stelem_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_R8();

					//	Get/Set:Stelem_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_Ref();

					//	Get/Set:Ldelem
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem();

					//	Get/Set:Stelem
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem();

					//	Get/Set:Unbox_Any
					static mscorlib::System::Reflection::Emit::OpCode  get_Unbox_Any();

					//	Get/Set:Conv_Ovf_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I1();

					//	Get/Set:Conv_Ovf_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U1();

					//	Get/Set:Conv_Ovf_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I2();

					//	Get/Set:Conv_Ovf_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U2();

					//	Get/Set:Conv_Ovf_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I4();

					//	Get/Set:Conv_Ovf_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U4();

					//	Get/Set:Conv_Ovf_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I8();

					//	Get/Set:Conv_Ovf_U8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U8();

					//	Get/Set:Refanyval
					static mscorlib::System::Reflection::Emit::OpCode  get_Refanyval();

					//	Get/Set:Ckfinite
					static mscorlib::System::Reflection::Emit::OpCode  get_Ckfinite();

					//	Get/Set:Mkrefany
					static mscorlib::System::Reflection::Emit::OpCode  get_Mkrefany();

					//	Get/Set:Ldtoken
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldtoken();

					//	Get/Set:Conv_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U2();

					//	Get/Set:Conv_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U1();

					//	Get/Set:Conv_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I();

					//	Get/Set:Conv_Ovf_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I();

					//	Get/Set:Conv_Ovf_U
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U();

					//	Get/Set:Add_Ovf
					static mscorlib::System::Reflection::Emit::OpCode  get_Add_Ovf();

					//	Get/Set:Add_Ovf_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Add_Ovf_Un();

					//	Get/Set:Mul_Ovf
					static mscorlib::System::Reflection::Emit::OpCode  get_Mul_Ovf();

					//	Get/Set:Mul_Ovf_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Mul_Ovf_Un();

					//	Get/Set:Sub_Ovf
					static mscorlib::System::Reflection::Emit::OpCode  get_Sub_Ovf();

					//	Get/Set:Sub_Ovf_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Sub_Ovf_Un();

					//	Get/Set:Endfinally
					static mscorlib::System::Reflection::Emit::OpCode  get_Endfinally();

					//	Get/Set:Leave
					static mscorlib::System::Reflection::Emit::OpCode  get_Leave();

					//	Get/Set:Leave_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Leave_S();

					//	Get/Set:Stind_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I();

					//	Get/Set:Conv_U
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U();

					//	Get/Set:Prefix7
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix7();

					//	Get/Set:Prefix6
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix6();

					//	Get/Set:Prefix5
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix5();

					//	Get/Set:Prefix4
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix4();

					//	Get/Set:Prefix3
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix3();

					//	Get/Set:Prefix2
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix2();

					//	Get/Set:Prefix1
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix1();

					//	Get/Set:Prefixref
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefixref();

					//	Get/Set:Arglist
					static mscorlib::System::Reflection::Emit::OpCode  get_Arglist();

					//	Get/Set:Ceq
					static mscorlib::System::Reflection::Emit::OpCode  get_Ceq();

					//	Get/Set:Cgt
					static mscorlib::System::Reflection::Emit::OpCode  get_Cgt();

					//	Get/Set:Cgt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Cgt_Un();

					//	Get/Set:Clt
					static mscorlib::System::Reflection::Emit::OpCode  get_Clt();

					//	Get/Set:Clt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Clt_Un();

					//	Get/Set:Ldftn
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldftn();

					//	Get/Set:Ldvirtftn
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldvirtftn();

					//	Get/Set:Ldarg
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg();

					//	Get/Set:Ldarga
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarga();

					//	Get/Set:Starg
					static mscorlib::System::Reflection::Emit::OpCode  get_Starg();

					//	Get/Set:Ldloc
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc();

					//	Get/Set:Ldloca
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloca();

					//	Get/Set:Stloc
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc();

					//	Get/Set:Localloc
					static mscorlib::System::Reflection::Emit::OpCode  get_Localloc();

					//	Get/Set:Endfilter
					static mscorlib::System::Reflection::Emit::OpCode  get_Endfilter();

					//	Get/Set:Unaligned
					static mscorlib::System::Reflection::Emit::OpCode  get_Unaligned();

					//	Get/Set:Volatile
					static mscorlib::System::Reflection::Emit::OpCode  get_Volatile();

					//	Get/Set:Tailcall
					static mscorlib::System::Reflection::Emit::OpCode  get_Tailcall();

					//	Get/Set:Initobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Initobj();

					//	Get/Set:Constrained
					static mscorlib::System::Reflection::Emit::OpCode  get_Constrained();

					//	Get/Set:Cpblk
					static mscorlib::System::Reflection::Emit::OpCode  get_Cpblk();

					//	Get/Set:Initblk
					static mscorlib::System::Reflection::Emit::OpCode  get_Initblk();

					//	Get/Set:Rethrow
					static mscorlib::System::Reflection::Emit::OpCode  get_Rethrow();

					//	Get/Set:Sizeof
					static mscorlib::System::Reflection::Emit::OpCode  get_Sizeof();

					//	Get/Set:Refanytype
					static mscorlib::System::Reflection::Emit::OpCode  get_Refanytype();

					//	Get/Set:Readonly
					static mscorlib::System::Reflection::Emit::OpCode  get_Readonly();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
