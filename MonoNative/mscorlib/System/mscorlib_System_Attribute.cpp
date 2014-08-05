#include <mscorlib/System/mscorlib_System_Attribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ParameterInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MemberInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Module.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		mscorlib::System::Attribute Attribute::GetCustomAttribute(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttribute", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Attribute(__result__);
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Assembly element)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameters__[0] = (MonoObject*)element;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameters__[0] = (MonoObject*)element;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameters__[0] = (MonoObject*)element;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Module element)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameters__[0] = (MonoObject*)element;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type type)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(type).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)type;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type type, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(type).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)type;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Module element, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::Assembly element, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		std::vector<mscorlib::System::Attribute*> Attribute::GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetCustomAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Attribute*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Attribute (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Int32 Attribute::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefaultAttribute()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefaultAttribute", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::MemberInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::Assembly element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::Module element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::IsDefined(mscorlib::System::Reflection::ParameterInfo element, mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(element).name());
				__parameter_types__[1] = Global::GetType(typeid(attributeType).name());
				__parameter_types__[2] = Global::GetType(typeid(inherit).name());
				__parameters__[0] = (MonoObject*)element;
				__parameters__[1] = (MonoObject*)attributeType;
				__parameters__[2] = reinterpret_cast<void*>(inherit);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "IsDefined", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::Match(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "Match", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean Attribute::Equals(mscorlib::System::Object obj)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(obj).name());
				__parameters__[0] = (MonoObject*)obj;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:TypeId
		mscorlib::System::Object  Attribute::get_TypeId() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
