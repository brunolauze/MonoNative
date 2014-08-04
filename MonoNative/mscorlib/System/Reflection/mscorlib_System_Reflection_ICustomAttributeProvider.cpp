#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ICustomAttributeProvider.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			std::vector<mscorlib::System::Object*> ICustomAttributeProvider::GetCustomAttributes(mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ICustomAttributeProvider", 0, NULL, "GetCustomAttributes", __mscorlib_System_Reflection_ICustomAttributeProvider, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::Object*> ICustomAttributeProvider::GetCustomAttributes(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ICustomAttributeProvider", 0, NULL, "GetCustomAttributes", __mscorlib_System_Reflection_ICustomAttributeProvider, 2, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Boolean ICustomAttributeProvider::IsDefined(mscorlib::System::Type attributeType, mscorlib::System::Boolean inherit)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(attributeType).name());
					__parameter_types__[1] = Global::GetType(typeid(inherit).name());
					__parameters__[0] = (MonoObject*)attributeType;
					__parameters__[1] = reinterpret_cast<void*>(inherit);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ICustomAttributeProvider", 0, NULL, "IsDefined", __mscorlib_System_Reflection_ICustomAttributeProvider, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


		}
	}
}
