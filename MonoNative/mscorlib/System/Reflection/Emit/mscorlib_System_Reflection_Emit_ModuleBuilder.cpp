#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ModuleBuilder.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldBuilder.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodBuilder.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_EnumBuilder.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolWriter.h>
#include <mscorlib/System/Diagnostics/SymbolStore/mscorlib_System_Diagnostics_SymbolStore_ISymbolDocumentWriter.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldToken.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_SignatureToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_SignatureHelper.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_StringToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_TypeToken.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_ModuleHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509Certificate.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				mscorlib::System::Boolean ModuleBuilder::IsTransient()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "IsTransient", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ModuleBuilder::CreateGlobalFunctions()
				{
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "CreateGlobalFunctions", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder ModuleBuilder::DefineInitializedData(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineInitializedData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder ModuleBuilder::DefineInitializedData(const char *name, std::vector<mscorlib::System::Byte*> data, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineInitializedData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder ModuleBuilder::DefineUninitializedData(mscorlib::System::String name, mscorlib::System::Int32 size, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(size).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = &size;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineUninitializedData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldBuilder ModuleBuilder::DefineUninitializedData(const char *name, mscorlib::System::Int32 size, mscorlib::System::Reflection::FieldAttributes::__ENUM__ attributes)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(size).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = &size;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineUninitializedData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefineGlobalMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineGlobalMethod", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefineGlobalMethod(const char *name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(returnType).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						__parameters__[2] = (MonoObject*)returnType;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineGlobalMethod", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefineGlobalMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineGlobalMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefineGlobalMethod(const char *name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineGlobalMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefineGlobalMethod(mscorlib::System::String name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[6] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type[]")), 1));
						__parameter_types__[8] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type[]")), 1));
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(requiredReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(optionalReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type**>(requiredParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[8] = Global::FromArray<mscorlib::System::Type**>(optionalParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineGlobalMethod", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefineGlobalMethod(const char *name, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> requiredReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> optionalReturnTypeCustomModifiers, std::vector<mscorlib::System::Type*> parameterTypes, std::vector<mscorlib::System::Type**> requiredParameterTypeCustomModifiers, std::vector<mscorlib::System::Type**> optionalParameterTypeCustomModifiers)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attributes).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[6] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type[]")), 1));
						__parameter_types__[8] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type[]")), 1));
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[1] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(requiredReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(optionalReturnTypeCustomModifiers, typeid(mscorlib::System::Type).name());
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						__parameters__[7] = Global::FromArray<mscorlib::System::Type**>(requiredParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						__parameters__[8] = Global::FromArray<mscorlib::System::Type**>(optionalParameterTypeCustomModifiers, typeid(mscorlib::System::Type*).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineGlobalMethod", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(dllName).name());
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameter_types__[3] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[4] = Global::GetType(typeid(returnType).name());
						__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[6] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[7] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)dllName;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[3] = &__param_callingConvention__;
						__parameters__[4] = (MonoObject*)returnType;
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						mscorlib::System::Int32 __param_nativeCallConv__ = nativeCallConv;
						__parameters__[6] = &__param_nativeCallConv__;
						mscorlib::System::Int32 __param_nativeCharSet__ = nativeCharSet;
						__parameters__[7] = &__param_nativeCharSet__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefinePInvokeMethod(const char *name, const char *dllName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(attributes).name());
						__parameter_types__[3] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[4] = Global::GetType(typeid(returnType).name());
						__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[6] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[7] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), dllName);
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[2] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[3] = &__param_callingConvention__;
						__parameters__[4] = (MonoObject*)returnType;
						__parameters__[5] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						mscorlib::System::Int32 __param_nativeCallConv__ = nativeCallConv;
						__parameters__[6] = &__param_nativeCallConv__;
						mscorlib::System::Int32 __param_nativeCharSet__ = nativeCharSet;
						__parameters__[7] = &__param_nativeCharSet__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefinePInvokeMethod(mscorlib::System::String name, mscorlib::System::String dllName, mscorlib::System::String entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(dllName).name());
						__parameter_types__[2] = Global::GetType(typeid(entryName).name());
						__parameter_types__[3] = Global::GetType(typeid(attributes).name());
						__parameter_types__[4] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[5] = Global::GetType(typeid(returnType).name());
						__parameter_types__[6] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[7] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[8] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)dllName;
						__parameters__[2] = (MonoObject*)entryName;
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[3] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[4] = &__param_callingConvention__;
						__parameters__[5] = (MonoObject*)returnType;
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						mscorlib::System::Int32 __param_nativeCallConv__ = nativeCallConv;
						__parameters__[7] = &__param_nativeCallConv__;
						mscorlib::System::Int32 __param_nativeCharSet__ = nativeCharSet;
						__parameters__[8] = &__param_nativeCharSet__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodBuilder ModuleBuilder::DefinePInvokeMethod(const char *name, const char *dllName, const char *entryName, mscorlib::System::Reflection::MethodAttributes::__ENUM__ attributes, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes, mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ nativeCallConv, mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ nativeCharSet)
				{
						MonoType *__parameter_types__[9];
						void *__parameters__[9];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType(typeid(attributes).name());
						__parameter_types__[4] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[5] = Global::GetType(typeid(returnType).name());
						__parameter_types__[6] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[7] = Global::GetType(typeid(nativeCallConv).name());
						__parameter_types__[8] = Global::GetType(typeid(nativeCharSet).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), dllName);
						__parameters__[2] = mono_string_new(Global::GetDomain(), entryName);
						mscorlib::System::Int32 __param_attributes__ = attributes;
						__parameters__[3] = &__param_attributes__;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[4] = &__param_callingConvention__;
						__parameters__[5] = (MonoObject*)returnType;
						__parameters__[6] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						mscorlib::System::Int32 __param_nativeCallConv__ = nativeCallConv;
						__parameters__[7] = &__param_nativeCallConv__;
						mscorlib::System::Int32 __param_nativeCharSet__ = nativeCharSet;
						__parameters__[8] = &__param_nativeCharSet__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefinePInvokeMethod", __native_object__, 9, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, std::vector<mscorlib::System::Type*> interfaces)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(interfaces, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, std::vector<mscorlib::System::Type*> interfaces)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(interfaces, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Int32 typesize)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(typesize).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = &typesize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Int32 typesize)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(typesize).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						__parameters__[3] = &typesize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packsize)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(packsize).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						mscorlib::System::Int32 __param_packsize__ = packsize;
						__parameters__[3] = &__param_packsize__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packsize)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(packsize).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						mscorlib::System::Int32 __param_packsize__ = packsize;
						__parameters__[3] = &__param_packsize__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packingSize, mscorlib::System::Int32 typesize)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(packingSize).name());
						__parameter_types__[4] = Global::GetType(typeid(typesize).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						mscorlib::System::Int32 __param_packingSize__ = packingSize;
						__parameters__[3] = &__param_packingSize__;
						__parameters__[4] = &typesize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeBuilder ModuleBuilder::DefineType(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ attr, mscorlib::System::Type parent, mscorlib::System::Reflection::Emit::PackingSize::__ENUM__ packingSize, mscorlib::System::Int32 typesize)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(attr).name());
						__parameter_types__[2] = Global::GetType(typeid(parent).name());
						__parameter_types__[3] = Global::GetType(typeid(packingSize).name());
						__parameter_types__[4] = Global::GetType(typeid(typesize).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_attr__ = attr;
						__parameters__[1] = &__param_attr__;
						__parameters__[2] = (MonoObject*)parent;
						mscorlib::System::Int32 __param_packingSize__ = packingSize;
						__parameters__[3] = &__param_packingSize__;
						__parameters__[4] = &typesize;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineType", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeBuilder(__result__);
				}

				mscorlib::System::Reflection::MethodInfo ModuleBuilder::GetArrayMethod(mscorlib::System::Type arrayClass, mscorlib::System::String methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(arrayClass).name());
						__parameter_types__[1] = Global::GetType(typeid(methodName).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)arrayClass;
						__parameters__[1] = (MonoObject*)methodName;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetArrayMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo ModuleBuilder::GetArrayMethod(mscorlib::System::Type arrayClass, const char *methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(arrayClass).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)arrayClass;
						__parameters__[1] = mono_string_new(Global::GetDomain(), methodName);
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetArrayMethod", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::Emit::EnumBuilder ModuleBuilder::DefineEnum(mscorlib::System::String name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ visibility, mscorlib::System::Type underlyingType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(visibility).name());
						__parameter_types__[2] = Global::GetType(typeid(underlyingType).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_visibility__ = visibility;
						__parameters__[1] = &__param_visibility__;
						__parameters__[2] = (MonoObject*)underlyingType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineEnum", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::EnumBuilder(__result__);
				}

				mscorlib::System::Reflection::Emit::EnumBuilder ModuleBuilder::DefineEnum(const char *name, mscorlib::System::Reflection::TypeAttributes::__ENUM__ visibility, mscorlib::System::Type underlyingType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(visibility).name());
						__parameter_types__[2] = Global::GetType(typeid(underlyingType).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_visibility__ = visibility;
						__parameters__[1] = &__param_visibility__;
						__parameters__[2] = (MonoObject*)underlyingType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineEnum", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::EnumBuilder(__result__);
				}

				mscorlib::System::Type ModuleBuilder::GetType(mscorlib::System::String className)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(className).name());
						__parameters__[0] = (MonoObject*)className;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type ModuleBuilder::GetType(const char *className)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), className);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type ModuleBuilder::GetType(mscorlib::System::String className, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(className).name());
						__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)className;
						__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type ModuleBuilder::GetType(const char *className, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), className);
						__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type ModuleBuilder::GetType(mscorlib::System::String className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(className).name());
						__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
						__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)className;
						__parameters__[1] = reinterpret_cast<void*>(throwOnError);
						__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type ModuleBuilder::GetType(const char *className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
						__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), className);
						__parameters__[1] = reinterpret_cast<void*>(throwOnError);
						__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				void ModuleBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolWriter ModuleBuilder::GetSymWriter()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetSymWriter", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolWriter(__result__);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter ModuleBuilder::DefineDocument(mscorlib::System::String url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(url).name());
						__parameter_types__[1] = Global::GetType(typeid(language).name());
						__parameter_types__[2] = Global::GetType(typeid(languageVendor).name());
						__parameter_types__[3] = Global::GetType(typeid(documentType).name());
						__parameters__[0] = (MonoObject*)url;
						__parameters__[1] = (MonoObject*)language;
						__parameters__[2] = (MonoObject*)languageVendor;
						__parameters__[3] = (MonoObject*)documentType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineDocument", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter(__result__);
				}

				mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter ModuleBuilder::DefineDocument(const char *url, mscorlib::System::Guid language, mscorlib::System::Guid languageVendor, mscorlib::System::Guid documentType)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(language).name());
						__parameter_types__[2] = Global::GetType(typeid(languageVendor).name());
						__parameter_types__[3] = Global::GetType(typeid(documentType).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), url);
						__parameters__[1] = (MonoObject*)language;
						__parameters__[2] = (MonoObject*)languageVendor;
						__parameters__[3] = (MonoObject*)documentType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineDocument", __native_object__, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Diagnostics::SymbolStore::ISymbolDocumentWriter(__result__);
				}

				std::vector<mscorlib::System::Type*> ModuleBuilder::GetTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetTypes", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Type*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Type (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Resources::IResourceWriter ModuleBuilder::DefineResource(mscorlib::System::String name, mscorlib::System::String description, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(description).name());
						__parameter_types__[2] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)description;
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[2] = &__param_attribute__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				mscorlib::System::Resources::IResourceWriter ModuleBuilder::DefineResource(const char *name, const char *description, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), description);
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[2] = &__param_attribute__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				mscorlib::System::Resources::IResourceWriter ModuleBuilder::DefineResource(mscorlib::System::String name, mscorlib::System::String description)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(description).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)description;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				mscorlib::System::Resources::IResourceWriter ModuleBuilder::DefineResource(const char *name, const char *description)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = mono_string_new(Global::GetDomain(), description);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineResource", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Resources::IResourceWriter(__result__);
				}

				void ModuleBuilder::DefineUnmanagedResource(std::vector<mscorlib::System::Byte*> resource)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(resource, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineUnmanagedResource", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::DefineUnmanagedResource(mscorlib::System::String resourceFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(resourceFileName).name());
						__parameters__[0] = (MonoObject*)resourceFileName;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineUnmanagedResource", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::DefineUnmanagedResource(const char *resourceFileName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), resourceFileName);
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineUnmanagedResource", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::DefineManifestResource(mscorlib::System::String name, mscorlib::System::IO::Stream stream, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(stream).name());
						__parameter_types__[2] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)stream;
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[2] = &__param_attribute__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineManifestResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::DefineManifestResource(const char *name, mscorlib::System::IO::Stream stream, mscorlib::System::Reflection::ResourceAttributes::__ENUM__ attribute)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(stream).name());
						__parameter_types__[2] = Global::GetType(typeid(attribute).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = (MonoObject*)stream;
						mscorlib::System::Int32 __param_attribute__ = attribute;
						__parameters__[2] = &__param_attribute__;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "DefineManifestResource", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::SetSymCustomAttribute(mscorlib::System::String name, std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "SetSymCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::SetSymCustomAttribute(const char *name, std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "SetSymCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ModuleBuilder::SetUserEntryPoint(mscorlib::System::Reflection::MethodInfo entryPoint)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(entryPoint).name());
						__parameters__[0] = (MonoObject*)entryPoint;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "SetUserEntryPoint", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Reflection::Emit::MethodToken ModuleBuilder::GetMethodToken(mscorlib::System::Reflection::MethodInfo method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetMethodToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodToken(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodToken ModuleBuilder::GetArrayMethodToken(mscorlib::System::Type arrayClass, mscorlib::System::String methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(arrayClass).name());
						__parameter_types__[1] = Global::GetType(typeid(methodName).name());
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)arrayClass;
						__parameters__[1] = (MonoObject*)methodName;
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetArrayMethodToken", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodToken(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodToken ModuleBuilder::GetArrayMethodToken(mscorlib::System::Type arrayClass, const char *methodName, mscorlib::System::Reflection::CallingConventions::__ENUM__ callingConvention, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> parameterTypes)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(arrayClass).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(callingConvention).name());
						__parameter_types__[3] = Global::GetType(typeid(returnType).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = (MonoObject*)arrayClass;
						__parameters__[1] = mono_string_new(Global::GetDomain(), methodName);
						mscorlib::System::Int32 __param_callingConvention__ = callingConvention;
						__parameters__[2] = &__param_callingConvention__;
						__parameters__[3] = (MonoObject*)returnType;
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(parameterTypes, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetArrayMethodToken", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodToken(__result__);
				}

				mscorlib::System::Reflection::Emit::MethodToken ModuleBuilder::GetConstructorToken(mscorlib::System::Reflection::ConstructorInfo con)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameters__[0] = (MonoObject*)con;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetConstructorToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::MethodToken(__result__);
				}

				mscorlib::System::Reflection::Emit::FieldToken ModuleBuilder::GetFieldToken(mscorlib::System::Reflection::FieldInfo field)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(field).name());
						__parameters__[0] = (MonoObject*)field;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetFieldToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::FieldToken(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureToken ModuleBuilder::GetSignatureToken(std::vector<mscorlib::System::Byte*> sigBytes, mscorlib::System::Int32 sigLength)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = Global::GetType(typeid(sigLength).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(sigBytes, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &sigLength;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetSignatureToken", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureToken(__result__);
				}

				mscorlib::System::Reflection::Emit::SignatureToken ModuleBuilder::GetSignatureToken(mscorlib::System::Reflection::Emit::SignatureHelper sigHelper)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sigHelper).name());
						__parameters__[0] = (MonoObject*)sigHelper;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetSignatureToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::SignatureToken(__result__);
				}

				mscorlib::System::Reflection::Emit::StringToken ModuleBuilder::GetStringConstant(mscorlib::System::String str)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(str).name());
						__parameters__[0] = (MonoObject*)str;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetStringConstant", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::StringToken(__result__);
				}

				mscorlib::System::Reflection::Emit::StringToken ModuleBuilder::GetStringConstant(const char *str)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), str);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetStringConstant", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::StringToken(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeToken ModuleBuilder::GetTypeToken(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetTypeToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeToken(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeToken ModuleBuilder::GetTypeToken(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetTypeToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeToken(__result__);
				}

				mscorlib::System::Reflection::Emit::TypeToken ModuleBuilder::GetTypeToken(const char *name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetTypeToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::Emit::TypeToken(__result__);
				}

				mscorlib::System::Boolean ModuleBuilder::IsResource()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "IsResource", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Reflection::FieldInfo ModuleBuilder::ResolveField(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = &metadataToken;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "ResolveField", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				mscorlib::System::Reflection::MemberInfo ModuleBuilder::ResolveMember(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = &metadataToken;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "ResolveMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MemberInfo(__result__);
				}

				mscorlib::System::Reflection::MethodBase ModuleBuilder::ResolveMethod(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = &metadataToken;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "ResolveMethod", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodBase(__result__);
				}

				mscorlib::System::String ModuleBuilder::ResolveString(mscorlib::System::Int32 metadataToken)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
						__parameters__[0] = &metadataToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "ResolveString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				std::vector<mscorlib::System::Byte*> ModuleBuilder::ResolveSignature(mscorlib::System::Int32 metadataToken)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
						__parameters__[0] = &metadataToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "ResolveSignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type ModuleBuilder::ResolveType(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
						__parameters__[0] = &metadataToken;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "ResolveType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Boolean ModuleBuilder::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 ModuleBuilder::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ModuleBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Object*> ModuleBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Object*> ModuleBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Reflection::FieldInfo ModuleBuilder::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
						__parameters__[1] = &__param_bindingAttr__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				mscorlib::System::Reflection::FieldInfo ModuleBuilder::GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), name);
						mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
						__parameters__[1] = &__param_bindingAttr__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::FieldInfo*> ModuleBuilder::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingFlags).name());
						mscorlib::System::Int32 __param_bindingFlags__ = bindingFlags;
						__parameters__[0] = &__param_bindingFlags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetFields", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::FieldInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::FieldInfo (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Reflection::MethodInfo*> ModuleBuilder::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingFlags).name());
						mscorlib::System::Int32 __param_bindingFlags__ = bindingFlags;
						__parameters__[0] = &__param_bindingFlags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "GetMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::MethodInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::MethodInfo (__array_item__));
						}
						return __array_result__;
				}

				//Get Set Properties Methods
				//	Get:FullyQualifiedName
				mscorlib::System::String  ModuleBuilder::get_FullyQualifiedName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "get_FullyQualifiedName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Assembly
				mscorlib::System::Reflection::Assembly  ModuleBuilder::get_Assembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "get_Assembly", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
				}


				//	Get:Name
				mscorlib::System::String  ModuleBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ScopeName
				mscorlib::System::String  ModuleBuilder::get_ScopeName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "get_ScopeName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ModuleVersionId
				mscorlib::System::Guid  ModuleBuilder::get_ModuleVersionId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "get_ModuleVersionId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  ModuleBuilder::get_MetadataToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ModuleBuilder", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:ModuleHandle
				mscorlib::System::ModuleHandle  ModuleBuilder::get_ModuleHandle() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_ModuleHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::ModuleHandle(__result__);
				}


				//	Get:MDStreamVersion
				mscorlib::System::Int32  ModuleBuilder::get_MDStreamVersion() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_MDStreamVersion", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  ModuleBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
