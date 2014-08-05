#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ParameterBuilder.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_ParameterToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_UnmanagedMarshal.h>
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
				mscorlib::System::Reflection::Emit::ParameterToken ParameterBuilder::GetToken()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "GetToken", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::ParameterToken(__result__);
				}

				void ParameterBuilder::SetConstant(mscorlib::System::Object defaultValue)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(defaultValue).name());
						__parameters__[0] = (MonoObject*)defaultValue;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "SetConstant", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ParameterBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ParameterBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(binaryAttribute).name()))->eklass);
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void ParameterBuilder::SetMarshal(mscorlib::System::Reflection::Emit::UnmanagedMarshal unmanagedMarshal)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(unmanagedMarshal).name());
						__parameters__[0] = (MonoObject*)unmanagedMarshal;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "SetMarshal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Int32  ParameterBuilder::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:IsIn
				mscorlib::System::Boolean  ParameterBuilder::get_IsIn() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "get_IsIn", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsOut
				mscorlib::System::Boolean  ParameterBuilder::get_IsOut() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "get_IsOut", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsOptional
				mscorlib::System::Boolean  ParameterBuilder::get_IsOptional() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "get_IsOptional", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Name
				mscorlib::System::String  ParameterBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Position
				mscorlib::System::Int32  ParameterBuilder::get_Position() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "ParameterBuilder", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
