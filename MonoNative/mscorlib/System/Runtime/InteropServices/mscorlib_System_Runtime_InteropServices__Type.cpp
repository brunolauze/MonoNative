#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Type.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ConstructorInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterModifier.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_EventInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_FieldInfo.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_InterfaceMapping.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_PropertyInfo.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>
#include <mscorlib/System/mscorlib_System_RuntimeTypeHandle.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Boolean _Type::Equals(mscorlib::System::Object other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean _Type::Equals(mscorlib::System::Type o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "Equals", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Type*> _Type::FindInterfaces(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Type , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(filter).name());
						__parameter_types__[1] = Global::GetType(typeid(filterCriteria).name());
						__parameters__[0] = &filter;
						__parameters__[1] = (MonoObject*)filterCriteria;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "FindInterfaces", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::FindMembers(mscorlib::System::Reflection::MemberTypes::__ENUM__ memberType, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Reflection::MemberInfo , mscorlib::System::Object )> filter, mscorlib::System::Object filterCriteria)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(memberType).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(filter).name());
						__parameter_types__[3] = Global::GetType(typeid(filterCriteria).name());
						__parameters__[0] = reinterpret_cast<void*>(memberType);
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						__parameters__[2] = &filter;
						__parameters__[3] = (MonoObject*)filterCriteria;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "FindMembers", __mscorlib_System_Runtime_InteropServices__Type, 4, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Int32 _Type::GetArrayRank()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetArrayRank", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Reflection::ConstructorInfo _Type::GetConstructor(std::vector<mscorlib::System::Type*> types)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetConstructor", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}

				mscorlib::System::Reflection::ConstructorInfo _Type::GetConstructor(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameter_types__[1] = Global::GetType(typeid(binder).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						__parameters__[1] = (MonoObject*)binder;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetConstructor", __mscorlib_System_Runtime_InteropServices__Type, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}

				mscorlib::System::Reflection::ConstructorInfo _Type::GetConstructor(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameter_types__[1] = Global::GetType(typeid(binder).name());
						__parameter_types__[2] = Global::GetType(typeid(callConvention).name());
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						__parameters__[1] = (MonoObject*)binder;
						__parameters__[2] = reinterpret_cast<void*>(callConvention);
						__parameters__[3] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						__parameters__[4] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetConstructor", __mscorlib_System_Runtime_InteropServices__Type, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::ConstructorInfo*> _Type::GetConstructors()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetConstructors", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::ConstructorInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::ConstructorInfo (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Reflection::ConstructorInfo*> _Type::GetConstructors(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetConstructors", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::ConstructorInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::ConstructorInfo (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Object*> _Type::GetCustomAttributes(mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Object*> _Type::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetCustomAttributes", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::GetDefaultMembers()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetDefaultMembers", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				mscorlib::System::Type _Type::GetElementType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetElementType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::EventInfo _Type::GetEvent(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetEvent", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::EventInfo(__result__);
				}

				mscorlib::System::Reflection::EventInfo _Type::GetEvent(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetEvent", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::EventInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::EventInfo*> _Type::GetEvents()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetEvents", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::EventInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::EventInfo (__array_item__));
						}
						return __array_result__;
				}

				std::vector<mscorlib::System::Reflection::EventInfo*> _Type::GetEvents(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetEvents", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Reflection::EventInfo*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Reflection::EventInfo (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Reflection::FieldInfo _Type::GetField(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetField", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				mscorlib::System::Reflection::FieldInfo _Type::GetField(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetField", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::FieldInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::FieldInfo*> _Type::GetFields()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetFields", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::FieldInfo*> _Type::GetFields(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetFields", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Int32 _Type::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetHashCode", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void _Type::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(riid).name());
						__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
						__parameter_types__[2] = Global::GetType(typeid(cNames).name());
						__parameter_types__[3] = Global::GetType(typeid(lcid).name());
						__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
						__parameters__[0] = (MonoObject*)riid;
						__parameters__[1] = (MonoObject*)rgszNames;
						__parameters__[2] = &cNames;
						__parameters__[3] = &lcid;
						__parameters__[4] = (MonoObject*)rgDispId;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetIDsOfNames", __mscorlib_System_Runtime_InteropServices__Type, 5, __parameter_types__, __parameters__, NULL);
				}

				void _Type::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
						__parameter_types__[1] = Global::GetType(typeid(lcid).name());
						__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
						__parameters__[0] = &iTInfo;
						__parameters__[1] = &lcid;
						__parameters__[2] = (MonoObject*)ppTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetTypeInfo", __mscorlib_System_Runtime_InteropServices__Type, 3, __parameter_types__, __parameters__, NULL);
				}

				void _Type::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
						__parameters__[0] = &pcTInfo;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetTypeInfoCount", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
				}

				void _Type::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
				{
						MonoType *__parameter_types__[8];
						void *__parameters__[8];
						__parameter_types__[0] = Global::GetType(typeid(dispIdMember).name());
						__parameter_types__[1] = Global::GetType(typeid(riid).name());
						__parameter_types__[2] = Global::GetType(typeid(lcid).name());
						__parameter_types__[3] = Global::GetType(typeid(wFlags).name());
						__parameter_types__[4] = Global::GetType(typeid(pDispParams).name());
						__parameter_types__[5] = Global::GetType(typeid(pVarResult).name());
						__parameter_types__[6] = Global::GetType(typeid(pExcepInfo).name());
						__parameter_types__[7] = Global::GetType(typeid(puArgErr).name());
						__parameters__[0] = &dispIdMember;
						__parameters__[1] = (MonoObject*)riid;
						__parameters__[2] = &lcid;
						__parameters__[3] = &wFlags;
						__parameters__[4] = (MonoObject*)pDispParams;
						__parameters__[5] = (MonoObject*)pVarResult;
						__parameters__[6] = (MonoObject*)pExcepInfo;
						__parameters__[7] = (MonoObject*)puArgErr;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "Invoke", __mscorlib_System_Runtime_InteropServices__Type, 8, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Type _Type::GetInterface(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetInterface", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type _Type::GetInterface(mscorlib::System::String name, mscorlib::System::Boolean ignoreCase)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(ignoreCase).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(ignoreCase);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetInterface", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Reflection::InterfaceMapping _Type::GetInterfaceMap(mscorlib::System::Type interfaceType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(interfaceType).name());
						__parameters__[0] = (MonoObject*)interfaceType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetInterfaceMap", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::InterfaceMapping(__result__);
				}

				std::vector<mscorlib::System::Type*> _Type::GetInterfaces()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetInterfaces", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::GetMember(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMember", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::MemberTypes::__ENUM__ type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(type).name());
						__parameter_types__[2] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(type);
						__parameters__[2] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMember", __mscorlib_System_Runtime_InteropServices__Type, 3, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::GetMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMember", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::GetMembers()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMembers", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::MemberInfo*> _Type::GetMembers(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMembers", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::MethodInfo _Type::GetMethod(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethod", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _Type::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethod", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _Type::GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethod", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _Type::GetMethod(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						__parameters__[2] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethod", __mscorlib_System_Runtime_InteropServices__Type, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _Type::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethod", __mscorlib_System_Runtime_InteropServices__Type, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				mscorlib::System::Reflection::MethodInfo _Type::GetMethod(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Reflection::CallingConventions::__ENUM__ callConvention, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(binder).name());
						__parameter_types__[3] = Global::GetType(typeid(callConvention).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						__parameters__[2] = (MonoObject*)binder;
						__parameters__[3] = reinterpret_cast<void*>(callConvention);
						__parameters__[4] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						__parameters__[5] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethod", __mscorlib_System_Runtime_InteropServices__Type, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodInfo(__result__);
				}

				std::vector<mscorlib::System::Reflection::MethodInfo*> _Type::GetMethods()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethods", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::MethodInfo*> _Type::GetMethods(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetMethods", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Type _Type::GetNestedType(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetNestedType", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type _Type::GetNestedType(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetNestedType", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				std::vector<mscorlib::System::Type*> _Type::GetNestedTypes()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetNestedTypes", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Type*> _Type::GetNestedTypes(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetNestedTypes", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Reflection::PropertyInfo*> _Type::GetProperties()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperties", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
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

				std::vector<mscorlib::System::Reflection::PropertyInfo*> _Type::GetProperties(mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperties", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name, std::vector<mscorlib::System::Type*> types)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(returnType).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(types).name()))->eklass);
						__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(modifiers).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)returnType;
						__parameters__[2] = Global::FromArray<mscorlib::System::Type*>(types, typeid(mscorlib::System::Type).name());
						__parameters__[3] = Global::FromArray<mscorlib::System::Reflection::ParameterModifier*>(modifiers, typeid(mscorlib::System::Reflection::ParameterModifier).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Reflection::PropertyInfo _Type::GetProperty(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Type returnType, std::vector<mscorlib::System::Type*> types, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetProperty", __mscorlib_System_Runtime_InteropServices__Type, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::PropertyInfo(__result__);
				}

				mscorlib::System::Type _Type::GetType()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "GetType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Object _Type::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args)
				{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(binder).name());
						__parameter_types__[3] = Global::GetType(typeid(target).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(invokeAttr);
						__parameters__[2] = (MonoObject*)binder;
						__parameters__[3] = (MonoObject*)target;
						__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "InvokeMember", __mscorlib_System_Runtime_InteropServices__Type, 5, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object _Type::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture)
				{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = Global::GetType(typeid(invokeAttr).name());
						__parameter_types__[2] = Global::GetType(typeid(binder).name());
						__parameter_types__[3] = Global::GetType(typeid(target).name());
						__parameter_types__[4] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
						__parameter_types__[5] = Global::GetType(typeid(culture).name());
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = reinterpret_cast<void*>(invokeAttr);
						__parameters__[2] = (MonoObject*)binder;
						__parameters__[3] = (MonoObject*)target;
						__parameters__[4] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
						__parameters__[5] = (MonoObject*)culture;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "InvokeMember", __mscorlib_System_Runtime_InteropServices__Type, 6, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object _Type::InvokeMember(mscorlib::System::String name, mscorlib::System::Reflection::BindingFlags::__ENUM__ invokeAttr, mscorlib::System::Reflection::Binder binder, mscorlib::System::Object target, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Reflection::ParameterModifier*> modifiers, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::String*> namedParameters)
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
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "InvokeMember", __mscorlib_System_Runtime_InteropServices__Type, 8, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean _Type::IsAssignableFrom(mscorlib::System::Type c)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(c).name());
						__parameters__[0] = (MonoObject*)c;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "IsAssignableFrom", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean _Type::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
						__parameter_types__[1] = Global::GetType(typeid(inherit).name());
						__parameters__[0] = (MonoObject*)attributeType;
						__parameters__[1] = reinterpret_cast<void*>(inherit);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "IsDefined", __mscorlib_System_Runtime_InteropServices__Type, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean _Type::IsInstanceOfType(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "IsInstanceOfType", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean _Type::IsSubclassOf(mscorlib::System::Type c)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(c).name());
						__parameters__[0] = (MonoObject*)c;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "IsSubclassOf", __mscorlib_System_Runtime_InteropServices__Type, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::String _Type::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "ToString", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Assembly
				mscorlib::System::Reflection::Assembly  _Type::get_Assembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_Assembly", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Assembly(__result__);
				}


				//	Get:AssemblyQualifiedName
				mscorlib::System::String  _Type::get_AssemblyQualifiedName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_AssemblyQualifiedName", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Attributes
				mscorlib::System::Reflection::TypeAttributes::__ENUM__  _Type::get_Attributes()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_Attributes", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::TypeAttributes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:BaseType
				mscorlib::System::Type  _Type::get_BaseType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_BaseType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:DeclaringType
				mscorlib::System::Type  _Type::get_DeclaringType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_DeclaringType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:FullName
				mscorlib::System::String  _Type::get_FullName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_FullName", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:GUID
				mscorlib::System::Guid  _Type::get_GUID()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_GUID", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Guid(__result__);
				}


				//	Get:HasElementType
				mscorlib::System::Boolean  _Type::get_HasElementType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_HasElementType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAbstract
				mscorlib::System::Boolean  _Type::get_IsAbstract()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsAbstract", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAnsiClass
				mscorlib::System::Boolean  _Type::get_IsAnsiClass()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsAnsiClass", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsArray
				mscorlib::System::Boolean  _Type::get_IsArray()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsArray", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAutoClass
				mscorlib::System::Boolean  _Type::get_IsAutoClass()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsAutoClass", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAutoLayout
				mscorlib::System::Boolean  _Type::get_IsAutoLayout()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsAutoLayout", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsByRef
				mscorlib::System::Boolean  _Type::get_IsByRef()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsByRef", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsClass
				mscorlib::System::Boolean  _Type::get_IsClass()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsClass", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsCOMObject
				mscorlib::System::Boolean  _Type::get_IsCOMObject()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsCOMObject", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsContextful
				mscorlib::System::Boolean  _Type::get_IsContextful()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsContextful", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsEnum
				mscorlib::System::Boolean  _Type::get_IsEnum()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsEnum", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsExplicitLayout
				mscorlib::System::Boolean  _Type::get_IsExplicitLayout()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsExplicitLayout", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsImport
				mscorlib::System::Boolean  _Type::get_IsImport()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsImport", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsInterface
				mscorlib::System::Boolean  _Type::get_IsInterface()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsInterface", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsLayoutSequential
				mscorlib::System::Boolean  _Type::get_IsLayoutSequential()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsLayoutSequential", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsMarshalByRef
				mscorlib::System::Boolean  _Type::get_IsMarshalByRef()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsMarshalByRef", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedAssembly
				mscorlib::System::Boolean  _Type::get_IsNestedAssembly()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNestedAssembly", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamANDAssem
				mscorlib::System::Boolean  _Type::get_IsNestedFamANDAssem()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNestedFamANDAssem", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamily
				mscorlib::System::Boolean  _Type::get_IsNestedFamily()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNestedFamily", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedFamORAssem
				mscorlib::System::Boolean  _Type::get_IsNestedFamORAssem()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNestedFamORAssem", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedPrivate
				mscorlib::System::Boolean  _Type::get_IsNestedPrivate()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNestedPrivate", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNestedPublic
				mscorlib::System::Boolean  _Type::get_IsNestedPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNestedPublic", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsNotPublic
				mscorlib::System::Boolean  _Type::get_IsNotPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsNotPublic", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPointer
				mscorlib::System::Boolean  _Type::get_IsPointer()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsPointer", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPrimitive
				mscorlib::System::Boolean  _Type::get_IsPrimitive()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsPrimitive", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsPublic
				mscorlib::System::Boolean  _Type::get_IsPublic()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsPublic", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSealed
				mscorlib::System::Boolean  _Type::get_IsSealed()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsSealed", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSerializable
				mscorlib::System::Boolean  _Type::get_IsSerializable()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsSerializable", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSpecialName
				mscorlib::System::Boolean  _Type::get_IsSpecialName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsSpecialName", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsUnicodeClass
				mscorlib::System::Boolean  _Type::get_IsUnicodeClass()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsUnicodeClass", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsValueType
				mscorlib::System::Boolean  _Type::get_IsValueType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_IsValueType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:MemberType
				mscorlib::System::Reflection::MemberTypes::__ENUM__  _Type::get_MemberType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_MemberType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Reflection::MemberTypes::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:Module
				mscorlib::System::Reflection::Module  _Type::get_Module()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_Module", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::Module(__result__);
				}


				//	Get:Name
				mscorlib::System::String  _Type::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_Name", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Namespace
				mscorlib::System::String  _Type::get_Namespace()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_Namespace", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ReflectedType
				mscorlib::System::Type  _Type::get_ReflectedType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_ReflectedType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeHandle
				mscorlib::System::RuntimeTypeHandle  _Type::get_TypeHandle()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_TypeHandle", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::RuntimeTypeHandle(__result__);
				}


				//	Get:TypeInitializer
				mscorlib::System::Reflection::ConstructorInfo  _Type::get_TypeInitializer()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_TypeInitializer", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::ConstructorInfo(__result__);
				}


				//	Get:UnderlyingSystemType
				mscorlib::System::Type  _Type::get_UnderlyingSystemType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "_Type", 0, NULL, "get_UnderlyingSystemType", __mscorlib_System_Runtime_InteropServices__Type, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}



			}
		}
	}
}
