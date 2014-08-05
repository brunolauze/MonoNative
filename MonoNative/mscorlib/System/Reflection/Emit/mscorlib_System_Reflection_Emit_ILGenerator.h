#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ILGENERATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ILGENERATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__ILGenerator.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_CallingConvention.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CallingConventions.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class Byte;
		class SByte;
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

				class Label;
				class LocalBuilder;
				class OpCode;
				class SignatureHelper;
				

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

			class ConstructorInfo;
			class FieldInfo;
			class MethodInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class ISymbolDocumentWriter;
				

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

				class ILGenerator
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::_ILGenerator
				{
				public:
					ILGenerator(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_ILGenerator(NULL)
					{
					};
				
					ILGenerator(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_ILGenerator(nativeObject)
					{
					};
				
					~ILGenerator()
					{
					};
				

					ILGenerator & operator=(ILGenerator &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  BeginCatchBlock(mscorlib::System::Type exceptionType);
					virtual void  BeginExceptFilterBlock();
					virtual mscorlib::System::Reflection::Emit::Label  BeginExceptionBlock();
					virtual void  BeginFaultBlock();
					virtual void  BeginFinallyBlock();
					virtual void  BeginScope();
					virtual mscorlib::System::Reflection::Emit::LocalBuilder  DeclareLocal(mscorlib::System::Type localType);
					virtual mscorlib::System::Reflection::Emit::LocalBuilder  DeclareLocal(mscorlib::System::Type localType, mscorlib::System::Boolean pinned);
					virtual mscorlib::System::Reflection::Emit::Label  DefineLabel();
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Byte arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::ConstructorInfo con);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Double arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::FieldInfo field);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Int16 arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Int32 arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Int64 arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::Emit::Label label);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, std::vector<mscorlib::System::Reflection::Emit::Label*> labels);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::Emit::LocalBuilder local);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::MethodInfo meth);
					void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::SByte arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::Emit::SignatureHelper signature);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Single arg);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::String str);
					virtual void  Emit(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Type cls);
					virtual void  EmitCall(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::MethodInfo methodInfo, std::vector<mscorlib::System::Type*> optionalParameterTypes);
					virtual void  EmitCalli(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ unmanagedCallConv, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes);
					virtual void  EmitCalli(mscorlib::System::Reflection::Emit::OpCode opcode, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type*> optionalParameterTypes);
					virtual void  EmitWriteLine(mscorlib::System::Reflection::FieldInfo fld);
					virtual void  EmitWriteLine(mscorlib::System::Reflection::Emit::LocalBuilder localBuilder);
					virtual void  EmitWriteLine(mscorlib::System::String value);
					virtual void  EndExceptionBlock();
					virtual void  EndScope();
					virtual void  MarkLabel(mscorlib::System::Reflection::Emit::Label loc);
					virtual void  MarkSequencePoint(mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter document, mscorlib::System::Int32 startLine, mscorlib::System::Int32 startColumn, mscorlib::System::Int32 endLine, mscorlib::System::Int32 endColumn);
					virtual void  ThrowException(mscorlib::System::Type excType);
					virtual void  UsingNamespace(mscorlib::System::String usingNamespace);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ILOffset)) mscorlib::System::Int32  ILOffset;

					//Get Set Properties Methods
					//	Get:ILOffset
					mscorlib::System::Int32  get_ILOffset() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
