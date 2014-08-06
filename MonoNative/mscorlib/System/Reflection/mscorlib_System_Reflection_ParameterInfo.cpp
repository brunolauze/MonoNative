#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::String ParameterInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			std::vector<mscorlib::System::Object*> ParameterInfo::GetCustomAttributes(mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Object*> ParameterInfo::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Boolean ParameterInfo::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Type*> ParameterInfo::GetRequiredCustomModifiers()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "GetRequiredCustomModifiers", __native_object__, 0, NULL, NULL, NULL);
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

			std::vector<mscorlib::System::Type*> ParameterInfo::GetOptionalCustomModifiers()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "GetOptionalCustomModifiers", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> ParameterInfo::GetCustomAttributesData()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "GetCustomAttributesData", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			//Get Set Properties Methods
			//	Get:ParameterType
			mscorlib::System::Type  ParameterInfo::get_ParameterType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_ParameterType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:Attributes
			mscorlib::System::Reflection::ParameterAttributes::__ENUM__  ParameterInfo::get_Attributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Reflection::ParameterAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}


			//	Get:IsIn
			mscorlib::System::Boolean  ParameterInfo::get_IsIn() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_IsIn", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsLcid
			mscorlib::System::Boolean  ParameterInfo::get_IsLcid() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_IsLcid", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsOptional
			mscorlib::System::Boolean  ParameterInfo::get_IsOptional() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_IsOptional", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsOut
			mscorlib::System::Boolean  ParameterInfo::get_IsOut() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_IsOut", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:IsRetval
			mscorlib::System::Boolean  ParameterInfo::get_IsRetval() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_IsRetval", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Member
			mscorlib::System::Reflection::MemberInfo  ParameterInfo::get_Member() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_Member", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::MemberInfo(__result__);
			}


			//	Get:Name
			mscorlib::System::String  ParameterInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Position
			mscorlib::System::Int32  ParameterInfo::get_Position() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_Position", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  ParameterInfo::get_CustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}


			//	Get:HasDefaultValue
			mscorlib::System::Boolean  ParameterInfo::get_HasDefaultValue() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_HasDefaultValue", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:DefaultValue
			mscorlib::System::Object  ParameterInfo::get_DefaultValue() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_DefaultValue", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}


			//	Get:RawDefaultValue
			mscorlib::System::Object  ParameterInfo::get_RawDefaultValue() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_RawDefaultValue", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  ParameterInfo::get_MetadataToken() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ParameterInfo", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
