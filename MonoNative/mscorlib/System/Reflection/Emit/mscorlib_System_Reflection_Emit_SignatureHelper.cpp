#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_SignatureHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetFieldSigHelper(mscorlib::System::Reflection::Module mod)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameters__[0] = (MonoObject*)mod;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetFieldSigHelper", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetLocalVarSigHelper(mscorlib::System::Reflection::Module mod)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameters__[0] = (MonoObject*)mod;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetLocalVarSigHelper", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetLocalVarSigHelper()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetLocalVarSigHelper", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetMethodSigHelper(mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						int __param_callingConvention__ = callingConvention;
						__parameters__[0] = &__param_callingConvention__;
						__parameters__[1] = (MonoObject*)returnType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetMethodSigHelper", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetMethodSigHelper(mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ unmanagedCallingConvention, mscorlib::System::Type returnType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(unmanagedCallingConvention).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						int __param_unmanagedCallingConvention__ = unmanagedCallingConvention;
						__parameters__[0] = &__param_unmanagedCallingConvention__;
						__parameters__[1] = (MonoObject*)returnType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetMethodSigHelper", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetMethodSigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameter_types__[1] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameters__[0] = (MonoObject*)mod;
						int __param_callingConvention__ = callingConvention;
						__parameters__[1] = &__param_callingConvention__;
						__parameters__[2] = (MonoObject*)returnType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetMethodSigHelper", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetMethodSigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ unmanagedCallConv, mscorlib::System::Type returnType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameter_types__[1] = Global::GetType(typeid(unmanagedCallConv).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameters__[0] = (MonoObject*)mod;
						int __param_unmanagedCallConv__ = unmanagedCallConv;
						__parameters__[1] = &__param_unmanagedCallConv__;
						__parameters__[2] = (MonoObject*)returnType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetMethodSigHelper", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetMethodSigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = (MonoObject*)mod;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetMethodSigHelper", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetPropertySigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameters__[0] = (MonoObject*)mod;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetPropertySigHelper", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetPropertySigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers)
				{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredReturnTypeCustomModifiers).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalReturnTypeCustomModifiers).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredParameterTypeCustomModifiers).name()))->eklass);
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalParameterTypeCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)mod;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(requiredReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(optionalReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type**>(requiredParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type**>(optionalParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetPropertySigHelper", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureHelper SignatureHelper::GetPropertySigHelper(mscorlib::System::Reflection::Module mod, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(mod).name());
						__parameter_types__[1] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredReturnTypeCustomModifiers).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalReturnTypeCustomModifiers).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(parameterTypes).name()))->eklass);
						__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredParameterTypeCustomModifiers).name()))->eklass);
						__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalParameterTypeCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)mod;
						int __param_callingConvention__ = callingConvention;
						__parameters__[1] = &__param_callingConvention__;
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(requiredReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(optionalReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type**>(requiredParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type**>(optionalParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetPropertySigHelper", NullMonoObject, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureHelper(__result__);
				}

				void SignatureHelper::AddArguments(std::vector<mscorlib::System::Type*> arguments, std::vector<mscorlib::System::Type**> requiredCustomModifiers, std::vector<mscorlib::System::Type**> optionalCustomModifiers)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(arguments).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredCustomModifiers).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalCustomModifiers).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(arguments, typeid(mscorlib::System::Type).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Type**>(requiredCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type**>(optionalCustomModifiers, typeid(mscorlib::System::Type*).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "AddArguments", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void SignatureHelper::AddArgument(mscorlib::System::Type argument, mscorlib::System::Boolean pinned)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(argument).name());
						__parameter_types__[1] = Global::GetType(typeid(pinned).name());
						__parameters__[0] = (MonoObject*)argument;
						__parameters__[1] = reinterpret_cast<void*>(pinned);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "AddArgument", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void SignatureHelper::AddArgument(mscorlib::System::Type argument, std::vector<mscorlib::System::Type*> requiredCustomModifiers, std::vector<mscorlib::System::Type*> optionalCustomModifiers)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(argument).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(requiredCustomModifiers).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(optionalCustomModifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)argument;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(requiredCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(optionalCustomModifiers, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "AddArgument", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void SignatureHelper::AddArgument(mscorlib::System::Type clsArgument)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(clsArgument).name());
						__parameters__[0] = (MonoObject*)clsArgument;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "AddArgument", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void SignatureHelper::AddSentinel()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "AddSentinel", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean SignatureHelper::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 SignatureHelper::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Byte*> SignatureHelper::GetSignature()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "GetSignature", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::String SignatureHelper::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "SignatureHelper", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}


			}
		}
	}
}
