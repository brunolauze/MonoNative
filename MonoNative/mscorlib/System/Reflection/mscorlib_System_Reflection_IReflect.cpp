#include <mscorlib/System/Reflection/mscorlib_System_Reflection_IReflect.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::FieldInfo IReflect::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetField", __mscorlib_System_Reflection_IReflect, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::FieldInfo*> IReflect::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetFields", __mscorlib_System_Reflection_IReflect, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Reflection::MemberInfo*> IReflect::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetMember", __mscorlib_System_Reflection_IReflect, 2, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Reflection::MemberInfo*> IReflect::GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetMembers", __mscorlib_System_Reflection_IReflect, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::MemberInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::MemberInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Reflection::MethodInfo IReflect::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetMethod", __mscorlib_System_Reflection_IReflect, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo IReflect::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[2] = Global::GetType(typeid(binder).name());
					__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
					__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					__parameters__[2] = (MonoObject*)binder;
					__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetMethod", __mscorlib_System_Reflection_IReflect, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::MethodInfo*> IReflect::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetMethods", __mscorlib_System_Reflection_IReflect, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Reflection::PropertyInfo*> IReflect::GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetProperties", __mscorlib_System_Reflection_IReflect, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Reflection::PropertyInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Reflection::PropertyInfo (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::Reflection::PropertyInfo IReflect::GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetProperty", __mscorlib_System_Reflection_IReflect, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::PropertyInfo(__result__);
			}

			mscorlib::System::Reflection::PropertyInfo IReflect::GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
			{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[2] = Global::GetType(typeid(binder).name());
					__parameter_types__[3] = Global::GetType(typeid(returnType).name());
					__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
					__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
					__parameters__[2] = (MonoObject*)binder;
					__parameters__[3] = (MonoObject*)returnType;
					__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "GetProperty", __mscorlib_System_Reflection_IReflect, 6, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::PropertyInfo(__result__);
			}

			mscorlib::System::Object IReflect::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
			{
					MonoType *__parameter_types__[8];
					void *__parameters__[8];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
					__parameter_types__[2] = Global::GetType(typeid(binder).name());
					__parameter_types__[3] = Global::GetType(typeid(target).name());
					__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
					__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
					__parameter_types__[6] = Global::GetType(typeid(culture).name());
					__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(namedParameters).name()))->eklass);
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(invokeAttr);
					__parameters__[2] = (MonoObject*)binder;
					__parameters__[3] = (MonoObject*)target;
					__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
					__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					__parameters__[6] = (MonoObject*)culture;
					__parameters__[7] = Global::FromArray<mscorlib::System::String*>(namedParameters, typeid(mscorlib::System::String).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "InvokeMember", __mscorlib_System_Reflection_IReflect, 8, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			//Get Set Properties Methods
			//	Get:UnderlyingSystemType
			mscorlib::System::Type  IReflect::get_UnderlyingSystemType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "IReflect", 0, NULL, "get_UnderlyingSystemType", __mscorlib_System_Reflection_IReflect, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}



		}
	}
}
