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
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Nop;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Break;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarg_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarg_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarg_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarg_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloc_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloc_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloc_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloc_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stloc_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stloc_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stloc_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stloc_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarg_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarga_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Starg_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloc_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloca_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stloc_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldnull;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_M1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_0;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_3;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_5;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_6;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_7;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldc_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Dup;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Pop;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Jmp;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Call;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Calli;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ret;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Br_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Brfalse_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Brtrue_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Beq_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bge_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bgt_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ble_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Blt_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bne_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bge_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bgt_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ble_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Blt_Un_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Br;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Brfalse;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Brtrue;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Beq;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bge;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bgt;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ble;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Blt;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bne_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bge_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Bgt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ble_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Blt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Switch;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldind_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Add;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Sub;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Mul;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Div;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Div_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Rem;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Rem_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> And;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Or;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Xor;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Shl;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Shr;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Shr_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Neg;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Not;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_U8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Callvirt;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Cpobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldstr;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Newobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Castclass;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Isinst;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_R_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Unbox;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Throw;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldflda;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldsfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldsflda;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stsfld;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I1_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I2_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I4_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I8_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U1_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U2_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U4_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U8_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Box;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Newarr;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldlen;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelema;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_R4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_R8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem_Ref;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldelem;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stelem;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Unbox_Any;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U8;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Refanyval;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ckfinite;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Mkrefany;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldtoken;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_U2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_U1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_Ovf_U;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Add_Ovf;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Add_Ovf_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Mul_Ovf;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Mul_Ovf_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Sub_Ovf;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Sub_Ovf_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Endfinally;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Leave;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Leave_S;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stind_I;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Conv_U;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix7;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix6;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix5;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix4;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix3;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix2;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefix1;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Prefixref;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Arglist;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ceq;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Cgt;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Cgt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Clt;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Clt_Un;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldftn;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldvirtftn;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarg;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldarga;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Starg;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloc;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Ldloca;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Stloc;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Localloc;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Endfilter;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Unaligned;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Volatile;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Tailcall;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Initobj;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Constrained;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Cpblk;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Initblk;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Rethrow;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Sizeof;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Refanytype;
					static Property<mscorlib::System::Reflection::Emit::OpCode , mscorlib::System::Reflection::Emit::OpCodes> Readonly;

					//	Get/Set:Nop
					static mscorlib::System::Reflection::Emit::OpCode  get_Nop();
					static void set_Nop(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Break
					static mscorlib::System::Reflection::Emit::OpCode  get_Break();
					static void set_Break(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarg_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_0();
					static void set_Ldarg_0(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarg_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_1();
					static void set_Ldarg_1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarg_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_2();
					static void set_Ldarg_2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarg_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_3();
					static void set_Ldarg_3(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloc_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_0();
					static void set_Ldloc_0(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloc_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_1();
					static void set_Ldloc_1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloc_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_2();
					static void set_Ldloc_2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloc_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_3();
					static void set_Ldloc_3(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stloc_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_0();
					static void set_Stloc_0(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stloc_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_1();
					static void set_Stloc_1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stloc_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_2();
					static void set_Stloc_2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stloc_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_3();
					static void set_Stloc_3(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarg_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg_S();
					static void set_Ldarg_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarga_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarga_S();
					static void set_Ldarga_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Starg_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Starg_S();
					static void set_Starg_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloc_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc_S();
					static void set_Ldloc_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloca_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloca_S();
					static void set_Ldloca_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stloc_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc_S();
					static void set_Stloc_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldnull
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldnull();
					static void set_Ldnull(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_M1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_M1();
					static void set_Ldc_I4_M1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_0
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_0();
					static void set_Ldc_I4_0(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_1();
					static void set_Ldc_I4_1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_2();
					static void set_Ldc_I4_2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_3
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_3();
					static void set_Ldc_I4_3(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_4();
					static void set_Ldc_I4_4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_5
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_5();
					static void set_Ldc_I4_5(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_6
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_6();
					static void set_Ldc_I4_6(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_7
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_7();
					static void set_Ldc_I4_7(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_8();
					static void set_Ldc_I4_8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4_S();
					static void set_Ldc_I4_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I4();
					static void set_Ldc_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_I8();
					static void set_Ldc_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_R4();
					static void set_Ldc_R4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldc_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldc_R8();
					static void set_Ldc_R8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Dup
					static mscorlib::System::Reflection::Emit::OpCode  get_Dup();
					static void set_Dup(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Pop
					static mscorlib::System::Reflection::Emit::OpCode  get_Pop();
					static void set_Pop(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Jmp
					static mscorlib::System::Reflection::Emit::OpCode  get_Jmp();
					static void set_Jmp(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Call
					static mscorlib::System::Reflection::Emit::OpCode  get_Call();
					static void set_Call(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Calli
					static mscorlib::System::Reflection::Emit::OpCode  get_Calli();
					static void set_Calli(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ret
					static mscorlib::System::Reflection::Emit::OpCode  get_Ret();
					static void set_Ret(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Br_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Br_S();
					static void set_Br_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Brfalse_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Brfalse_S();
					static void set_Brfalse_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Brtrue_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Brtrue_S();
					static void set_Brtrue_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Beq_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Beq_S();
					static void set_Beq_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bge_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge_S();
					static void set_Bge_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bgt_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt_S();
					static void set_Bgt_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ble_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble_S();
					static void set_Ble_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Blt_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt_S();
					static void set_Blt_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bne_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bne_Un_S();
					static void set_Bne_Un_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bge_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge_Un_S();
					static void set_Bge_Un_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bgt_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt_Un_S();
					static void set_Bgt_Un_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ble_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble_Un_S();
					static void set_Ble_Un_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Blt_Un_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt_Un_S();
					static void set_Blt_Un_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Br
					static mscorlib::System::Reflection::Emit::OpCode  get_Br();
					static void set_Br(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Brfalse
					static mscorlib::System::Reflection::Emit::OpCode  get_Brfalse();
					static void set_Brfalse(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Brtrue
					static mscorlib::System::Reflection::Emit::OpCode  get_Brtrue();
					static void set_Brtrue(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Beq
					static mscorlib::System::Reflection::Emit::OpCode  get_Beq();
					static void set_Beq(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bge
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge();
					static void set_Bge(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bgt
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt();
					static void set_Bgt(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ble
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble();
					static void set_Ble(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Blt
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt();
					static void set_Blt(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bne_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Bne_Un();
					static void set_Bne_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bge_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Bge_Un();
					static void set_Bge_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Bgt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Bgt_Un();
					static void set_Bgt_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ble_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Ble_Un();
					static void set_Ble_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Blt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Blt_Un();
					static void set_Blt_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Switch
					static mscorlib::System::Reflection::Emit::OpCode  get_Switch();
					static void set_Switch(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I1();
					static void set_Ldind_I1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_U1();
					static void set_Ldind_U1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I2();
					static void set_Ldind_I2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_U2();
					static void set_Ldind_U2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I4();
					static void set_Ldind_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_U4();
					static void set_Ldind_U4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I8();
					static void set_Ldind_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_I();
					static void set_Ldind_I(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_R4();
					static void set_Ldind_R4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_R8();
					static void set_Ldind_R8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldind_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldind_Ref();
					static void set_Ldind_Ref(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_Ref();
					static void set_Stind_Ref(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I1();
					static void set_Stind_I1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I2();
					static void set_Stind_I2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I4();
					static void set_Stind_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I8();
					static void set_Stind_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_R4();
					static void set_Stind_R4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_R8();
					static void set_Stind_R8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Add
					static mscorlib::System::Reflection::Emit::OpCode  get_Add();
					static void set_Add(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Sub
					static mscorlib::System::Reflection::Emit::OpCode  get_Sub();
					static void set_Sub(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Mul
					static mscorlib::System::Reflection::Emit::OpCode  get_Mul();
					static void set_Mul(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Div
					static mscorlib::System::Reflection::Emit::OpCode  get_Div();
					static void set_Div(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Div_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Div_Un();
					static void set_Div_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Rem
					static mscorlib::System::Reflection::Emit::OpCode  get_Rem();
					static void set_Rem(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Rem_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Rem_Un();
					static void set_Rem_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:And
					static mscorlib::System::Reflection::Emit::OpCode  get_And();
					static void set_And(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Or
					static mscorlib::System::Reflection::Emit::OpCode  get_Or();
					static void set_Or(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Xor
					static mscorlib::System::Reflection::Emit::OpCode  get_Xor();
					static void set_Xor(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Shl
					static mscorlib::System::Reflection::Emit::OpCode  get_Shl();
					static void set_Shl(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Shr
					static mscorlib::System::Reflection::Emit::OpCode  get_Shr();
					static void set_Shr(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Shr_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Shr_Un();
					static void set_Shr_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Neg
					static mscorlib::System::Reflection::Emit::OpCode  get_Neg();
					static void set_Neg(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Not
					static mscorlib::System::Reflection::Emit::OpCode  get_Not();
					static void set_Not(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I1();
					static void set_Conv_I1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I2();
					static void set_Conv_I2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I4();
					static void set_Conv_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I8();
					static void set_Conv_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_R4();
					static void set_Conv_R4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_R8();
					static void set_Conv_R8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U4();
					static void set_Conv_U4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_U8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U8();
					static void set_Conv_U8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Callvirt
					static mscorlib::System::Reflection::Emit::OpCode  get_Callvirt();
					static void set_Callvirt(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Cpobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Cpobj();
					static void set_Cpobj(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldobj();
					static void set_Ldobj(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldstr
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldstr();
					static void set_Ldstr(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Newobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Newobj();
					static void set_Newobj(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Castclass
					static mscorlib::System::Reflection::Emit::OpCode  get_Castclass();
					static void set_Castclass(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Isinst
					static mscorlib::System::Reflection::Emit::OpCode  get_Isinst();
					static void set_Isinst(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_R_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_R_Un();
					static void set_Conv_R_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Unbox
					static mscorlib::System::Reflection::Emit::OpCode  get_Unbox();
					static void set_Unbox(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Throw
					static mscorlib::System::Reflection::Emit::OpCode  get_Throw();
					static void set_Throw(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldfld();
					static void set_Ldfld(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldflda
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldflda();
					static void set_Ldflda(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Stfld();
					static void set_Stfld(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldsfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldsfld();
					static void set_Ldsfld(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldsflda
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldsflda();
					static void set_Ldsflda(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stsfld
					static mscorlib::System::Reflection::Emit::OpCode  get_Stsfld();
					static void set_Stsfld(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Stobj();
					static void set_Stobj(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I1_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I1_Un();
					static void set_Conv_Ovf_I1_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I2_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I2_Un();
					static void set_Conv_Ovf_I2_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I4_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I4_Un();
					static void set_Conv_Ovf_I4_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I8_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I8_Un();
					static void set_Conv_Ovf_I8_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U1_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U1_Un();
					static void set_Conv_Ovf_U1_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U2_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U2_Un();
					static void set_Conv_Ovf_U2_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U4_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U4_Un();
					static void set_Conv_Ovf_U4_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U8_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U8_Un();
					static void set_Conv_Ovf_U8_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I_Un();
					static void set_Conv_Ovf_I_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U_Un();
					static void set_Conv_Ovf_U_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Box
					static mscorlib::System::Reflection::Emit::OpCode  get_Box();
					static void set_Box(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Newarr
					static mscorlib::System::Reflection::Emit::OpCode  get_Newarr();
					static void set_Newarr(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldlen
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldlen();
					static void set_Ldlen(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelema
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelema();
					static void set_Ldelema(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I1();
					static void set_Ldelem_I1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_U1();
					static void set_Ldelem_U1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I2();
					static void set_Ldelem_I2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_U2();
					static void set_Ldelem_U2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I4();
					static void set_Ldelem_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_U4();
					static void set_Ldelem_U4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I8();
					static void set_Ldelem_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_I();
					static void set_Ldelem_I(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_R4();
					static void set_Ldelem_R4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_R8();
					static void set_Ldelem_R8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem_Ref();
					static void set_Ldelem_Ref(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I();
					static void set_Stelem_I(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I1();
					static void set_Stelem_I1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I2();
					static void set_Stelem_I2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I4();
					static void set_Stelem_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_I8();
					static void set_Stelem_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_R4
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_R4();
					static void set_Stelem_R4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_R8
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_R8();
					static void set_Stelem_R8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem_Ref
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem_Ref();
					static void set_Stelem_Ref(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldelem
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldelem();
					static void set_Ldelem(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stelem
					static mscorlib::System::Reflection::Emit::OpCode  get_Stelem();
					static void set_Stelem(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Unbox_Any
					static mscorlib::System::Reflection::Emit::OpCode  get_Unbox_Any();
					static void set_Unbox_Any(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I1();
					static void set_Conv_Ovf_I1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U1();
					static void set_Conv_Ovf_U1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I2();
					static void set_Conv_Ovf_I2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U2();
					static void set_Conv_Ovf_U2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I4();
					static void set_Conv_Ovf_I4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U4
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U4();
					static void set_Conv_Ovf_U4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I8();
					static void set_Conv_Ovf_I8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U8
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U8();
					static void set_Conv_Ovf_U8(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Refanyval
					static mscorlib::System::Reflection::Emit::OpCode  get_Refanyval();
					static void set_Refanyval(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ckfinite
					static mscorlib::System::Reflection::Emit::OpCode  get_Ckfinite();
					static void set_Ckfinite(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Mkrefany
					static mscorlib::System::Reflection::Emit::OpCode  get_Mkrefany();
					static void set_Mkrefany(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldtoken
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldtoken();
					static void set_Ldtoken(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_U2
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U2();
					static void set_Conv_U2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_U1
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U1();
					static void set_Conv_U1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_I();
					static void set_Conv_I(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_I();
					static void set_Conv_Ovf_I(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_Ovf_U
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_Ovf_U();
					static void set_Conv_Ovf_U(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Add_Ovf
					static mscorlib::System::Reflection::Emit::OpCode  get_Add_Ovf();
					static void set_Add_Ovf(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Add_Ovf_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Add_Ovf_Un();
					static void set_Add_Ovf_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Mul_Ovf
					static mscorlib::System::Reflection::Emit::OpCode  get_Mul_Ovf();
					static void set_Mul_Ovf(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Mul_Ovf_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Mul_Ovf_Un();
					static void set_Mul_Ovf_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Sub_Ovf
					static mscorlib::System::Reflection::Emit::OpCode  get_Sub_Ovf();
					static void set_Sub_Ovf(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Sub_Ovf_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Sub_Ovf_Un();
					static void set_Sub_Ovf_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Endfinally
					static mscorlib::System::Reflection::Emit::OpCode  get_Endfinally();
					static void set_Endfinally(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Leave
					static mscorlib::System::Reflection::Emit::OpCode  get_Leave();
					static void set_Leave(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Leave_S
					static mscorlib::System::Reflection::Emit::OpCode  get_Leave_S();
					static void set_Leave_S(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stind_I
					static mscorlib::System::Reflection::Emit::OpCode  get_Stind_I();
					static void set_Stind_I(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Conv_U
					static mscorlib::System::Reflection::Emit::OpCode  get_Conv_U();
					static void set_Conv_U(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix7
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix7();
					static void set_Prefix7(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix6
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix6();
					static void set_Prefix6(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix5
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix5();
					static void set_Prefix5(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix4
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix4();
					static void set_Prefix4(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix3
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix3();
					static void set_Prefix3(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix2
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix2();
					static void set_Prefix2(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefix1
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefix1();
					static void set_Prefix1(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Prefixref
					static mscorlib::System::Reflection::Emit::OpCode  get_Prefixref();
					static void set_Prefixref(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Arglist
					static mscorlib::System::Reflection::Emit::OpCode  get_Arglist();
					static void set_Arglist(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ceq
					static mscorlib::System::Reflection::Emit::OpCode  get_Ceq();
					static void set_Ceq(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Cgt
					static mscorlib::System::Reflection::Emit::OpCode  get_Cgt();
					static void set_Cgt(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Cgt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Cgt_Un();
					static void set_Cgt_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Clt
					static mscorlib::System::Reflection::Emit::OpCode  get_Clt();
					static void set_Clt(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Clt_Un
					static mscorlib::System::Reflection::Emit::OpCode  get_Clt_Un();
					static void set_Clt_Un(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldftn
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldftn();
					static void set_Ldftn(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldvirtftn
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldvirtftn();
					static void set_Ldvirtftn(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarg
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarg();
					static void set_Ldarg(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldarga
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldarga();
					static void set_Ldarga(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Starg
					static mscorlib::System::Reflection::Emit::OpCode  get_Starg();
					static void set_Starg(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloc
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloc();
					static void set_Ldloc(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Ldloca
					static mscorlib::System::Reflection::Emit::OpCode  get_Ldloca();
					static void set_Ldloca(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Stloc
					static mscorlib::System::Reflection::Emit::OpCode  get_Stloc();
					static void set_Stloc(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Localloc
					static mscorlib::System::Reflection::Emit::OpCode  get_Localloc();
					static void set_Localloc(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Endfilter
					static mscorlib::System::Reflection::Emit::OpCode  get_Endfilter();
					static void set_Endfilter(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Unaligned
					static mscorlib::System::Reflection::Emit::OpCode  get_Unaligned();
					static void set_Unaligned(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Volatile
					static mscorlib::System::Reflection::Emit::OpCode  get_Volatile();
					static void set_Volatile(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Tailcall
					static mscorlib::System::Reflection::Emit::OpCode  get_Tailcall();
					static void set_Tailcall(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Initobj
					static mscorlib::System::Reflection::Emit::OpCode  get_Initobj();
					static void set_Initobj(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Constrained
					static mscorlib::System::Reflection::Emit::OpCode  get_Constrained();
					static void set_Constrained(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Cpblk
					static mscorlib::System::Reflection::Emit::OpCode  get_Cpblk();
					static void set_Cpblk(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Initblk
					static mscorlib::System::Reflection::Emit::OpCode  get_Initblk();
					static void set_Initblk(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Rethrow
					static mscorlib::System::Reflection::Emit::OpCode  get_Rethrow();
					static void set_Rethrow(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Sizeof
					static mscorlib::System::Reflection::Emit::OpCode  get_Sizeof();
					static void set_Sizeof(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Refanytype
					static mscorlib::System::Reflection::Emit::OpCode  get_Refanytype();
					static void set_Refanytype(mscorlib::System::Reflection::Emit::OpCode  value);

					//	Get/Set:Readonly
					static mscorlib::System::Reflection::Emit::OpCode  get_Readonly();
					static void set_Readonly(mscorlib::System::Reflection::Emit::OpCode  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
