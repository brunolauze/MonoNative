#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_ModuleHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_CustomAttributeData.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509Certificate.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::FieldInfo Module::GetField(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetField", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::FieldInfo Module::GetField(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetField", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::FieldInfo*> Module::GetFields()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetFields", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::Reflection::MethodInfo Module::GetMethod(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo Module::GetMethod(const char *name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo Module::GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo Module::GetMethod(const char *name, std::vector<mscorlib::System::Type*> types)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethod", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo Module::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
			{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[2] = Global::GetType(typeid(binder).name());
					__parameter_types__[3] = Global::GetType(typeid(callConvention).name());
					__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
					__parameters__[0] = (MonoObject*)name;
					mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
					__parameters__[1] = &__param_bindingAttr__;
					__parameters__[2] = (MonoObject*)binder;
					mscorlib::System::Int32 __param_callConvention__ = callConvention;
					__parameters__[3] = &__param_callConvention__;
					__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethod", __native_object__, 6, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			mscorlib::System::Reflection::MethodInfo Module::GetMethod(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
			{
					MonoType *__parameter_types__[6];
					void *__parameters__[6];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameter_types__[2] = Global::GetType(typeid(binder).name());
					__parameter_types__[3] = Global::GetType(typeid(callConvention).name());
					__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Reflection", "ParameterModifier")), 1));
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
					__parameters__[1] = &__param_bindingAttr__;
					__parameters__[2] = (MonoObject*)binder;
					mscorlib::System::Int32 __param_callConvention__ = callConvention;
					__parameters__[3] = &__param_callConvention__;
					__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
					__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethod", __native_object__, 6, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::MethodInfo*> Module::GetMethods()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethods", __native_object__, 0, NULL, NULL, NULL);
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

			void Module::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Type Module::GetType(mscorlib::System::String className)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(className).name());
					__parameters__[0] = (MonoObject*)className;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Type Module::GetType(const char *className)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), className);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Type Module::GetType(mscorlib::System::String className, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(className).name());
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)className;
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Type Module::GetType(const char *className, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), className);
					__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetType", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::String Module::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Reflection::FieldInfo Module::ResolveField(mscorlib::System::Int32 metadataToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameters__[0] = &metadataToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveField", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::MemberInfo Module::ResolveMember(mscorlib::System::Int32 metadataToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameters__[0] = &metadataToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveMember", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MemberInfo(__result__);
			}

			mscorlib::System::Reflection::MethodBase Module::ResolveMethod(mscorlib::System::Int32 metadataToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameters__[0] = &metadataToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveMethod", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
			}

			mscorlib::System::Type Module::ResolveType(mscorlib::System::Int32 metadataToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameters__[0] = &metadataToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Boolean Module::Equals(mscorlib::System::Object o)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(o).name());
					__parameters__[0] = (MonoObject*)o;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 Module::GetHashCode()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Module::IsResource()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "IsResource", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Type*> Module::FindTypes(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(filter).name());
					__parameter_types__[1] = Global::GetType(typeid(filterCriteria).name());
					__parameters__[0] = &filter;
					__parameters__[1] = (MonoObject*)filterCriteria;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "FindTypes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Object*> Module::GetCustomAttributes(mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetCustomAttributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Object*> Module::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetCustomAttributes", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData> Module::GetCustomAttributesData()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetCustomAttributesData", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IList<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}

			mscorlib::System::Reflection::FieldInfo Module::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = (MonoObject*)name;
					mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
					__parameters__[1] = &__param_bindingAttr__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::FieldInfo Module::GetField(const char *name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), name);
					mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
					__parameters__[1] = &__param_bindingAttr__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetField", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			std::vector<mscorlib::System::Reflection::FieldInfo*> Module::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingFlags).name());
					mscorlib::System::Int32 __param_bindingFlags__ = bindingFlags;
					__parameters__[0] = &__param_bindingFlags__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetFields", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Reflection::MethodInfo*> Module::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingFlags)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(bindingFlags).name());
					mscorlib::System::Int32 __param_bindingFlags__ = bindingFlags;
					__parameters__[0] = &__param_bindingFlags__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetMethods", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			void Module::GetPEKind(mscorlib::System::Reflection::PortableExecutableKinds::__ENUM__ peKind, mscorlib::System::Reflection::ImageFileMachine::__ENUM__ machine)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(peKind).name());
					__parameter_types__[1] = Global::GetType(typeid(machine).name());
					mscorlib::System::Int32 __param_peKind__ = peKind;
					__parameters__[0] = &__param_peKind__;
					mscorlib::System::Int32 __param_machine__ = machine;
					__parameters__[1] = &__param_machine__;
					Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetPEKind", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Type Module::GetType(mscorlib::System::String className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(className).name());
					__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
					__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = (MonoObject*)className;
					__parameters__[1] = reinterpret_cast<void*>(throwOnError);
					__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Type Module::GetType(const char *className, mscorlib::System::Boolean throwOnError, mscorlib::System::Boolean ignoreCase)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(throwOnError).name());
					__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), className);
					__parameters__[1] = reinterpret_cast<void*>(throwOnError);
					__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Boolean Module::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "IsDefined", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Reflection::FieldInfo Module::ResolveField(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = &metadataToken;
					__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveField", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::FieldInfo(__result__);
			}

			mscorlib::System::Reflection::MemberInfo Module::ResolveMember(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = &metadataToken;
					__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveMember", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MemberInfo(__result__);
			}

			mscorlib::System::Reflection::MethodBase Module::ResolveMethod(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = &metadataToken;
					__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveMethod", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
			}

			std::vector<mscorlib::System::Byte*> Module::ResolveSignature(mscorlib::System::Int32 metadataToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameters__[0] = &metadataToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveSignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::String Module::ResolveString(mscorlib::System::Int32 metadataToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameters__[0] = &metadataToken;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Type Module::ResolveType(mscorlib::System::Int32 metadataToken, std::vector<mscorlib::System::Type*> genericTypeArguments, std::vector<mscorlib::System::Type*> genericMethodArguments)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(metadataToken).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Type")), 1));
					__parameters__[0] = &metadataToken;
					__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(genericTypeArguments, typeid(mscorlib::System::Type).name());
					__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(genericMethodArguments, typeid(mscorlib::System::Type).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "ResolveType", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Type(__result__);
			}

			mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate Module::GetSignerCertificate()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetSignerCertificate", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate(__result__);
			}

			std::vector<mscorlib::System::Type*> Module::GetTypes()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "GetTypes", __native_object__, 0, NULL, NULL, NULL);
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

			//Get Set Properties Methods
			//	Get:ModuleHandle
			mscorlib::System::ModuleHandle  Module::get_ModuleHandle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_ModuleHandle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::ModuleHandle(__result__);
			}


			//	Get:Assembly
			mscorlib::System::Reflection::Assembly  Module::get_Assembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_Assembly", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
			}


			//	Get:Name
			mscorlib::System::String  Module::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ScopeName
			mscorlib::System::String  Module::get_ScopeName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_ScopeName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:MDStreamVersion
			mscorlib::System::Int32  Module::get_MDStreamVersion() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_MDStreamVersion", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:ModuleVersionId
			mscorlib::System::Guid  Module::get_ModuleVersionId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_ModuleVersionId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Guid(__result__);
			}


			//	Get:FullyQualifiedName
			mscorlib::System::String  Module::get_FullyQualifiedName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_FullyQualifiedName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:MetadataToken
			mscorlib::System::Int32  Module::get_MetadataToken() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_MetadataToken", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:CustomAttributes
			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>  Module::get_CustomAttributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "Module", 0, NULL, "get_CustomAttributes", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::CustomAttributeData>(__result__);
			}


				//	Get/Set:FilterTypeName
			mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> Module::get_FilterTypeName()
			{
				MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Reflection", "Module", 0, NULL, "FilterTypeName");
				return mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> ();
			}

			void Module::set_FilterTypeName(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )>  value)
			{
				throw;
			}

				//	Get/Set:FilterTypeNameIgnoreCase
			mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> Module::get_FilterTypeNameIgnoreCase()
			{
				MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Reflection", "Module", 0, NULL, "FilterTypeNameIgnoreCase");
				return mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> ();
			}

			void Module::set_FilterTypeNameIgnoreCase(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )>  value)
			{
				throw;
			}


		}
	}
}
