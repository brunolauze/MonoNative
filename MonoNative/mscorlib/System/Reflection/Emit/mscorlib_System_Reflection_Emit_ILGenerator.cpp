#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ILGenerator.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_Label.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_LocalBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_OpCode.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_SByte.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_SignatureHelper.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				void ILGenerator::BeginCatchBlock(mscorlib::System::Type exceptionType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(exceptionType).name());
						__parameters__[0] = (MonoObject*)exceptionType;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "BeginCatchBlock", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::BeginExceptFilterBlock()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "BeginExceptFilterBlock", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Reflection::Emit::Label ILGenerator::BeginExceptionBlock()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "BeginExceptionBlock", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::Label(__result__);
				}

				void ILGenerator::BeginFaultBlock()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "BeginFaultBlock", __native_object__, 0, NULL, NULL, NULL);
				}

				void ILGenerator::BeginFinallyBlock()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "BeginFinallyBlock", __native_object__, 0, NULL, NULL, NULL);
				}

				void ILGenerator::BeginScope()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "BeginScope", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Reflection::Emit::LocalBuilder ILGenerator::DeclareLocal(mscorlib::System::Type localType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(localType).name());
						__parameters__[0] = (MonoObject*)localType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "DeclareLocal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::LocalBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::LocalBuilder ILGenerator::DeclareLocal(mscorlib::System::Type localType, mscorlib::System::Boolean pinned)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(localType).name());
						__parameter_types__[1] = Global::GetType(typeid(pinned).name());
						__parameters__[0] = (MonoObject*)localType;
						__parameters__[1] = reinterpret_cast<void*>(pinned);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "DeclareLocal", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::LocalBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::Label ILGenerator::DefineLabel()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "DefineLabel", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::Label(__result__);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameters__[0] = (MonoObject*)opcode;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Byte arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::ConstructorInfo con)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(con).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)con;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Double arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = &arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::FieldInfo field)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(field).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)field;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Int16 arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = &arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Int32 arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = &arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Int64 arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = &arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::Emit::Label label)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(label).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)label;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, std::vector<mscorlib::System::Reflection::Emit::Label*> labels)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection.Emit", "Label")), 1));
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = Global::FromArray<mscorlib::System::Reflection::Emit::Label*>(labels, typeid(mscorlib::System::Reflection::Emit::Label).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::Emit::LocalBuilder local)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(local).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)local;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::MethodInfo meth)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(meth).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)meth;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::SByte arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::Emit::SignatureHelper signature)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(signature).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)signature;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Single arg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(arg).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = &arg;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::String str)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(str).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)str;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, const char *str)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = mono_string_new(Global::GetDomain(), str);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Type cls)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(cls).name());
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)cls;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "Emit", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitCall(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::MethodInfo methodInfo, std::vector<mscorlib::System::Type*> optionalParameterTypes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(methodInfo).name());
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)opcode;
						__parameters__[1] = (MonoObject*)methodInfo;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(optionalParameterTypes, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitCall", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitCalli(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ unmanagedCallConv, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(unmanagedCallConv).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)opcode;
						mscorlib::System::Int32 __param_unmanagedCallConv__ = unmanagedCallConv;
						__parameters__[1] = &__param_unmanagedCallConv__;
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitCalli", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitCalli(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type*> optionalParameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(opcode).name());
						__parameter_types__[1] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)opcode;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[1] = &__param_callingConvention__;
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(optionalParameterTypes, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitCalli", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitWriteLine(mscorlib::System::Reflection::FieldInfo fld)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(fld).name());
						__parameters__[0] = (MonoObject*)fld;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitWriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitWriteLine(mscorlib::System::Reflection::Emit::LocalBuilder localBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(localBuilder).name());
						__parameters__[0] = (MonoObject*)localBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitWriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitWriteLine(mscorlib::System::String value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitWriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EmitWriteLine(const char *value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), value);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EmitWriteLine", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::EndExceptionBlock()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EndExceptionBlock", __native_object__, 0, NULL, NULL, NULL);
				}

				void ILGenerator::EndScope()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "EndScope", __native_object__, 0, NULL, NULL, NULL);
				}

				void ILGenerator::MarkLabel(mscorlib::System::Reflection::Emit::Label loc)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(loc).name());
						__parameters__[0] = (MonoObject*)loc;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "MarkLabel", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::MarkSequencePoint(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter document, mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(document).name());
						__parameter_types__[1] = Global::GetType(typeid(startLine).name());
						__parameter_types__[2] = Global::GetType(typeid(startColumn).name());
						__parameter_types__[3] = Global::GetType(typeid(endLine).name());
						__parameter_types__[4] = Global::GetType(typeid(endColumn).name());
						__parameters__[0] = (MonoObject*)document;
						__parameters__[1] = &startLine;
						__parameters__[2] = &startColumn;
						__parameters__[3] = &endLine;
						__parameters__[4] = &endColumn;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "MarkSequencePoint", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::ThrowException(mscorlib::System::Type excType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(excType).name());
						__parameters__[0] = (MonoObject*)excType;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "ThrowException", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::UsingNamespace(mscorlib::System::String usingNamespace)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(usingNamespace).name());
						__parameters__[0] = (MonoObject*)usingNamespace;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "UsingNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ILGenerator::UsingNamespace(const char *usingNamespace)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), usingNamespace);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "UsingNamespace", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:ILOffset
				mscorlib::System::Int32  ILGenerator::get_ILOffset() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ILGenerator", 0, NULL, "get_ILOffset", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
