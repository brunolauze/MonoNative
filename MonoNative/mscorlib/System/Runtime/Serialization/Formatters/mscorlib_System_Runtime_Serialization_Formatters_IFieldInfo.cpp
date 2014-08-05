#include <mscorlib/System/Runtime/Serialization/Formatters/mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{

					//Get Set Properties Methods
					//	Get/Set:FieldNames
					std::vector<mscorlib::System::String*>  IFieldInfo::get_FieldNames() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "IFieldInfo", 0, NULL, "get_FieldNames", __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
					}

					void IFieldInfo::set_FieldNames(std::vector<mscorlib::System::String*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "IFieldInfo", 0, NULL, "set_FieldNames", __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get/Set:FieldTypes
					std::vector<mscorlib::System::Type*>  IFieldInfo::get_FieldTypes() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "IFieldInfo", 0, NULL, "get_FieldTypes", __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo, 0, NULL, NULL, NULL);
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

					void IFieldInfo::set_FieldTypes(std::vector<mscorlib::System::Type*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(value, typeid(mscorlib::System::Type).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters", "IFieldInfo", 0, NULL, "set_FieldTypes", __mscorlib_System_Runtime_Serialization_Formatters_IFieldInfo, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
