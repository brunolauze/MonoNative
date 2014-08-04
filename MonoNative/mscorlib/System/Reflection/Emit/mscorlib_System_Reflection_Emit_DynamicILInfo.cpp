#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_DynamicILInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_DynamicMethod.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_RuntimeFieldHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeMethodHandle.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>
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
				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(std::vector<mscorlib::System::Byte*> signature)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::Reflection::Emit::DynamicMethod method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::RuntimeFieldHandle field)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(field).name());
						__parameters__[0] = (MonoObject*)field;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::RuntimeMethodHandle method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::RuntimeTypeHandle type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::String literal)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(literal).name());
						__parameters__[0] = (MonoObject*)literal;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::RuntimeMethodHandle method, mscorlib::System::RuntimeTypeHandle contextType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameter_types__[1] = Global::GetType(typeid(contextType).name());
						__parameters__[0] = (MonoObject*)method;
						__parameters__[1] = (MonoObject*)contextType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 DynamicILInfo::GetTokenFor(mscorlib::System::RuntimeFieldHandle field, mscorlib::System::RuntimeTypeHandle contextType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(field).name());
						__parameter_types__[1] = Global::GetType(typeid(contextType).name());
						__parameters__[0] = (MonoObject*)field;
						__parameters__[1] = (MonoObject*)contextType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "GetTokenFor", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void DynamicILInfo::SetCode(std::vector<mscorlib::System::Byte*> code, mscorlib::System::Int32 maxStackSize)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(code).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(maxStackSize).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(code, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &maxStackSize;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "SetCode", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void DynamicILInfo::SetCode(mscorlib::System::Byte* code, mscorlib::System::Int32 codeSize, mscorlib::System::Int32 maxStackSize)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(code).name());
						__parameter_types__[1] = Global::GetType(typeid(codeSize).name());
						__parameter_types__[2] = Global::GetType(typeid(maxStackSize).name());
						__parameters__[0] = code->GetNativeObject();
						__parameters__[1] = &codeSize;
						__parameters__[2] = &maxStackSize;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "SetCode", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void DynamicILInfo::SetExceptions(std::vector<mscorlib::System::Byte*> exceptions)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(exceptions).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(exceptions, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "SetExceptions", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void DynamicILInfo::SetExceptions(mscorlib::System::Byte* exceptions, mscorlib::System::Int32 exceptionsSize)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(exceptions).name());
						__parameter_types__[1] = Global::GetType(typeid(exceptionsSize).name());
						__parameters__[0] = exceptions->GetNativeObject();
						__parameters__[1] = &exceptionsSize;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "SetExceptions", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void DynamicILInfo::SetLocalSignature(std::vector<mscorlib::System::Byte*> localSignature)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(localSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(localSignature, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "SetLocalSignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void DynamicILInfo::SetLocalSignature(mscorlib::System::Byte* localSignature, mscorlib::System::Int32 signatureSize)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(localSignature).name());
						__parameter_types__[1] = Global::GetType(typeid(signatureSize).name());
						__parameters__[0] = localSignature->GetNativeObject();
						__parameters__[1] = &signatureSize;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "SetLocalSignature", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:DynamicMethod
				mscorlib::System::Reflection::Emit::DynamicMethod  DynamicILInfo::get_DynamicMethod()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "DynamicILInfo", 0, NULL, "get_DynamicMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Emit::DynamicMethod(__result__);
				}



			}
		}
	}
}
