#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldBuilder.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_RuntimeFieldHandle.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_FieldToken.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_UnmanagedMarshal.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_TypedReference.h>
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
				std::vector<mscorlib::System::Object*> FieldBuilder::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> FieldBuilder::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::Emit::FieldToken FieldBuilder::GetToken()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "GetToken", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::Emit::FieldToken(__result__);
				}

				mscorlib::System::Object FieldBuilder::GetValue(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean FieldBuilder::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void FieldBuilder::SetConstant(mscorlib::System::Object defaultValue)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(defaultValue).name());
						__parameters__[0] = (MonoObject*)defaultValue;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "SetConstant", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void FieldBuilder::SetCustomAttribute(mscorlib::System::Reflection::Emit::CustomAttributeBuilder customBuilder)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(customBuilder).name());
						__parameters__[0] = (MonoObject*)customBuilder;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void FieldBuilder::SetCustomAttribute(mscorlib::System::Reflection::ConstructorInfo con, std::vector<mscorlib::System::Byte*> binaryAttribute)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(con).name());
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)con;
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(binaryAttribute, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "SetCustomAttribute", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void FieldBuilder::SetMarshal(mscorlib::System::Reflection::Emit::UnmanagedMarshal unmanagedMarshal)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(unmanagedMarshal).name());
						__parameters__[0] = (MonoObject*)unmanagedMarshal;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "SetMarshal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void FieldBuilder::SetOffset(mscorlib::System::Int32 iOffset)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(iOffset).name());
						__parameters__[0] = &iOffset;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "SetOffset", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void FieldBuilder::SetValue(mscorlib::System::Object obj, mscorlib::System::Object val, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(val).name());
						__parameter_types__[2] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[3] = Global::GetType(typeid(binder).name());
						__parameter_types__[4] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)val;
						mscorlib::System::Int32 __param_invokeAttr__ = invokeAttr;
						__parameters__[2] = &__param_invokeAttr__;
						__parameters__[3] = (MonoObject*)binder;
						__parameters__[4] = (MonoObject*)culture;
						Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "SetValue", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:Attributes
				mscorlib::System::Reflection::FieldAttributes::__ENUM__  FieldBuilder::get_Attributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Reflection::FieldAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:DeclaringType
				mscorlib::System::Type  FieldBuilder::get_DeclaringType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:FieldHandle
				mscorlib::System::RuntimeFieldHandle  FieldBuilder::get_FieldHandle() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_FieldHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeFieldHandle(__result__);
				}


				//	Get:FieldType
				mscorlib::System::Type  FieldBuilder::get_FieldType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_FieldType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Name
				mscorlib::System::String  FieldBuilder::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  FieldBuilder::get_ReflectedType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  FieldBuilder::get_Module() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection.Emit", "FieldBuilder", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  FieldBuilder::get_MemberType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Reflection::MemberTypes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:IsLiteral
				mscorlib::System::Boolean  FieldBuilder::get_IsLiteral() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsLiteral", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsStatic
				mscorlib::System::Boolean  FieldBuilder::get_IsStatic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInitOnly
				mscorlib::System::Boolean  FieldBuilder::get_IsInitOnly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsInitOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  FieldBuilder::get_IsPublic() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrivate
				mscorlib::System::Boolean  FieldBuilder::get_IsPrivate() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamily
				mscorlib::System::Boolean  FieldBuilder::get_IsFamily() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAssembly
				mscorlib::System::Boolean  FieldBuilder::get_IsAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyAndAssembly
				mscorlib::System::Boolean  FieldBuilder::get_IsFamilyAndAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsFamilyOrAssembly
				mscorlib::System::Boolean  FieldBuilder::get_IsFamilyOrAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPinvokeImpl
				mscorlib::System::Boolean  FieldBuilder::get_IsPinvokeImpl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsPinvokeImpl", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  FieldBuilder::get_IsSpecialName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNotSerialized
				mscorlib::System::Boolean  FieldBuilder::get_IsNotSerialized() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsNotSerialized", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityCritical
				mscorlib::System::Boolean  FieldBuilder::get_IsSecurityCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecuritySafeCritical
				mscorlib::System::Boolean  FieldBuilder::get_IsSecuritySafeCritical() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSecurityTransparent
				mscorlib::System::Boolean  FieldBuilder::get_IsSecurityTransparent() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MetadataToken
				mscorlib::System::Int32  FieldBuilder::get_MetadataToken() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:CustomAttributes
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  FieldBuilder::get_CustomAttributes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
				}



			}
		}
	}
}
