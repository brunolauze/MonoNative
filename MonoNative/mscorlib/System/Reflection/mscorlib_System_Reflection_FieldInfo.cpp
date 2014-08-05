#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/mscorlib_System_RuntimeFieldHandle.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/mscorlib_System_TypedReference.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Object FieldInfo::GetValue(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			void FieldInfo::SetValue(mscorlib::System::Object obj, mscorlib::System::Object value, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Globalization::CultureInfo culture)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(invokeAttr).name());
					__parameter_types__[3] = Global::GetType(typeid(binder).name());
					__parameter_types__[4] = Global::GetType(typeid(culture).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = reinterpret_cast<void*>(invokeAttr);
					__parameters__[3] = (MonoObject*)binder;
					__parameters__[4] = (MonoObject*)culture;
					Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "SetValue", __native_object__, 5, __parameter_types__, __parameters__, NULL);
			}

			void FieldInfo::SetValue(mscorlib::System::Object obj, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "SetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Reflection::FieldInfo FieldInfo::GetFieldFromHandle(mscorlib::System::RuntimeFieldHandle handle)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(handle).name());
					__parameters__[0] = (MonoObject*)handle;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetFieldFromHandle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::FieldInfo FieldInfo::GetFieldFromHandle(mscorlib::System::RuntimeFieldHandle handle, mscorlib::System::RuntimeTypeHandle declaringType)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(handle).name());
					__parameter_types__[1] = Global::GetType(typeid(declaringType).name());
					__parameters__[0] = (MonoObject*)handle;
					__parameters__[1] = (MonoObject*)declaringType;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetFieldFromHandle", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Object FieldInfo::GetValueDirect(mscorlib::System::TypedReference obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetValueDirect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			void FieldInfo::SetValueDirect(mscorlib::System::TypedReference obj, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)obj;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "SetValueDirect", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			std::vector<mscorlib::System::Type*> FieldInfo::GetOptionalCustomModifiers()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetOptionalCustomModifiers", __native_object__, 0, NULL, NULL, NULL);
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

			std::vector<mscorlib::System::Type*> FieldInfo::GetRequiredCustomModifiers()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetRequiredCustomModifiers", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::Object FieldInfo::GetRawConstantValue()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetRawConstantValue", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Boolean FieldInfo::Equals(mscorlib::System::Object obj)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(obj).name());
					__parameters__[0] = (MonoObject*)obj;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 FieldInfo::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			//Get Set Properties Methods
			//	Get:Attributes
			mscorlib::System::Reflection::FieldAttributes::__ENUM__  FieldInfo::get_Attributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::FieldAttributes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:FieldHandle
			mscorlib::System::RuntimeFieldHandle  FieldInfo::get_FieldHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_FieldHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::RuntimeFieldHandle(__result__);
			}


			//	Get:FieldType
			mscorlib::System::Type  FieldInfo::get_FieldType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_FieldType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:MemberType
			mscorlib::System::Reflection::MemberTypes::__ENUM__  FieldInfo::get_MemberType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_MemberType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
			}


			//	Get:IsLiteral
			mscorlib::System::Boolean  FieldInfo::get_IsLiteral() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsLiteral", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsStatic
			mscorlib::System::Boolean  FieldInfo::get_IsStatic() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsStatic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsInitOnly
			mscorlib::System::Boolean  FieldInfo::get_IsInitOnly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsInitOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPublic
			mscorlib::System::Boolean  FieldInfo::get_IsPublic() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsPublic", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPrivate
			mscorlib::System::Boolean  FieldInfo::get_IsPrivate() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsPrivate", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamily
			mscorlib::System::Boolean  FieldInfo::get_IsFamily() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsFamily", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsAssembly
			mscorlib::System::Boolean  FieldInfo::get_IsAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamilyAndAssembly
			mscorlib::System::Boolean  FieldInfo::get_IsFamilyAndAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsFamilyAndAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsFamilyOrAssembly
			mscorlib::System::Boolean  FieldInfo::get_IsFamilyOrAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsFamilyOrAssembly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsPinvokeImpl
			mscorlib::System::Boolean  FieldInfo::get_IsPinvokeImpl() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsPinvokeImpl", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSpecialName
			mscorlib::System::Boolean  FieldInfo::get_IsSpecialName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSpecialName", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsNotSerialized
			mscorlib::System::Boolean  FieldInfo::get_IsNotSerialized() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsNotSerialized", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityCritical
			mscorlib::System::Boolean  FieldInfo::get_IsSecurityCritical() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSecurityCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecuritySafeCritical
			mscorlib::System::Boolean  FieldInfo::get_IsSecuritySafeCritical() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSecuritySafeCritical", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsSecurityTransparent
			mscorlib::System::Boolean  FieldInfo::get_IsSecurityTransparent() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "FieldInfo", 0, NULL, "get_IsSecurityTransparent", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:DeclaringType
			mscorlib::System::Type  FieldInfo::get_DeclaringType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_DeclaringType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Name
			mscorlib::System::String  FieldInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ReflectedType
			mscorlib::System::Type  FieldInfo::get_ReflectedType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_ReflectedType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Module
			mscorlib::System::Reflection::Module  FieldInfo::get_Module() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_Module", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Module(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  FieldInfo::get_MetadataToken() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  FieldInfo::get_CustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "MemberInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}



		}
	}
}
