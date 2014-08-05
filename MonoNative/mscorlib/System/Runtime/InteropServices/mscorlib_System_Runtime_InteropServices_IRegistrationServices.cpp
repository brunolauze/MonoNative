#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_IRegistrationServices.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::Guid IRegistrationServices::GetManagedCategoryGuid()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "GetManagedCategoryGuid", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 0, NULL, NULL, NULL);
						return mscorlib::System::Guid(__result__);
				}

				mscorlib::System::String IRegistrationServices::GetProgIdForType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "GetProgIdForType", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				std::vector<mscorlib::System::Type*> IRegistrationServices::GetRegistrableTypesInAssembly(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "GetRegistrableTypesInAssembly", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Boolean IRegistrationServices::RegisterAssembly(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Runtime::InteropServices::AssemblyRegistrationFlags::__ENUM__ flags)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameter_types__[1] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)assembly;
						int __param_flags__ = flags;
						__parameters__[1] = &__param_flags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "RegisterAssembly", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void IRegistrationServices::RegisterTypeForComClients(mscorlib::System::Type type, mscorlib::System::Guid g)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(g).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)g;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "RegisterTypeForComClients", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean IRegistrationServices::TypeRepresentsComType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "TypeRepresentsComType", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean IRegistrationServices::TypeRequiresRegistration(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "TypeRequiresRegistration", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean IRegistrationServices::UnregisterAssembly(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "IRegistrationServices", 0, NULL, "UnregisterAssembly", __mscorlib_System_Runtime_InteropServices_IRegistrationServices, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
