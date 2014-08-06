#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_PropertyBuilder.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_PropertyToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_MethodBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				//Public Methods
				void PropertyBuilder::AddOtherMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "AddOtherMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				std::vector<mscorlib::System::Reflection::MethodInfo*> PropertyBuilder::GetAccessors(mscorlib::System::Boolean nonPublic)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
						__parameters__[0] = reinterpret_cast<void*>(nonPublic);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetAccessors", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> PropertyBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> PropertyBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::MethodInfo PropertyBuilder::GetGetMethod(mscorlib::System::Boolean nonPublic)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
						__parameters__[0] = reinterpret_cast<void*>(nonPublic);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetGetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::ParameterInfo*> PropertyBuilder::GetIndexParameters()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetIndexParameters", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::ParameterInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::ParameterInfo (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Reflection::MethodInfo PropertyBuilder::GetSetMethod(mscorlib::System::Boolean nonPublic)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(nonPublic).name());
						__parameters__[0] = reinterpret_cast<void*>(nonPublic);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetSetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Object PropertyBuilder::GetValue(mscorlib::System::Object obj, std::vector<mscorlib::System::Object*> index)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(index, typeid(mscorlib::System::Object).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object PropertyBuilder::GetValue(mscorlib::System::Object obj, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(binder).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameter_types__[4] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)obj;
						mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
						__parameters__[1] = &__param_invokeAttr__;
						__parameters__[2] = (MonoObject*)binder;
						__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(index, typeid(mscorlib::System::Object).name());
						__parameters__[4] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "GetValue", __native_object__, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean PropertyBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void PropertyBuilder::SetConstant(mscorlib::System::Object defaultValue)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(defaultValue).name());
						__parameters__[0] = (MonoObject*)defaultValue;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetConstant", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PropertyBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PropertyBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void PropertyBuilder::SetGetMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetGetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PropertyBuilder::SetSetMethod(mscorlib::System::Reflection::Emit::MethodBuilder mdBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(mdBuilder).name());
						__parameters__[0] = (MonoObject*)mdBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetSetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void PropertyBuilder::SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, std::vector<mscorlib::System::Object*> index)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)value;
						__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(index, typeid(mscorlib::System::Object).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void PropertyBuilder::SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> index, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameter_types__[2] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[3] = Global::GetType(typeid(binder).name());
						__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
						__parameter_types__[5] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)value;
						mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
						__parameters__[2] = &__param_invokeAttr__;
						__parameters__[3] = (MonoObject*)binder;
						__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(index, typeid(mscorlib::System::Object).name());
						__parameters__[5] = (MonoObject*)culture;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "SetValue", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::PropertyAttributes::__ENUM__  PropertyBuilder::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Reflection::PropertyAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:CanRead
				mscorlib::System::Boolean  PropertyBuilder::get_CanRead() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_CanRead", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanWrite
				mscorlib::System::Boolean  PropertyBuilder::get_CanWrite() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_CanWrite", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  PropertyBuilder::get_DeclaringType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Name
				mscorlib::System::String  PropertyBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PropertyToken
				mscorlib::System::Reflection::Emit::PropertyToken  PropertyBuilder::get_PropertyToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_PropertyToken", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Emit::PropertyToken(__result__);
				}


				//	Get:PropertyType
				mscorlib::System::Type  PropertyBuilder::get_PropertyType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_PropertyType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  PropertyBuilder::get_ReflectedType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  PropertyBuilder::get_Module() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "PropertyBuilder", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:GetMethod
				mscorlib::System::Reflection::MethodInfo  PropertyBuilder::get_GetMethod() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "PropertyInfo", 0, NULL, "get_GetMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
				}


				//	Get:SetMethod
				mscorlib::System::Reflection::MethodInfo  PropertyBuilder::get_SetMethod() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "PropertyInfo", 0, NULL, "get_SetMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  PropertyBuilder::get_IsSpecialName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "PropertyInfo", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  PropertyBuilder::get_MemberType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "PropertyInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Reflection::MemberTypes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  PropertyBuilder::get_MetadataToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  PropertyBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
