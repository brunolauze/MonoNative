#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_RegistrationServices.h>
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
				mscorlib::System::Guid RegistrationServices::GetManagedCategoryGuid()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "GetManagedCategoryGuid", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Guid(__result__);
				}

				mscorlib::System::String RegistrationServices::GetProgIdForType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "GetProgIdForType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				std::vector<mscorlib::System::Type*> RegistrationServices::GetRegistrableTypesInAssembly(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "GetRegistrableTypesInAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Boolean RegistrationServices::RegisterAssembly(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Runtime::InteropServices::AssemblyRegistrationFlags::__ENUM__ flags)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameter_types__[1] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)assembly;
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[1] = &__param_flags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "RegisterAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RegistrationServices::RegisterTypeForComClients(mscorlib::System::Type type, mscorlib::System::Guid g)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(g).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)g;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "RegisterTypeForComClients", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean RegistrationServices::TypeRepresentsComType(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "TypeRepresentsComType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RegistrationServices::TypeRequiresRegistration(mscorlib::System::Type type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "TypeRequiresRegistration", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RegistrationServices::UnregisterAssembly(mscorlib::System::Reflection::Assembly assembly)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(assembly).name());
						__parameters__[0] = (MonoObject*)assembly;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "UnregisterAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 RegistrationServices::RegisterTypeForComClients(mscorlib::System::Type type, mscorlib::System::Runtime::InteropServices::RegistrationClassContext::__ENUM__ classContext, mscorlib::System::Runtime::InteropServices::RegistrationConnectionType::__ENUM__ flags)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(classContext).name());
						__parameter_types__[2] = Global::GetType(typeid(flags).name());
						__parameters__[0] = (MonoObject*)type;
						mscorlib::System::Int32 __param_classContext__ = classContext;
						__parameters__[1] = &__param_classContext__;
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "RegisterTypeForComClients", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void RegistrationServices::UnregisterTypeForComClients(mscorlib::System::Int32 cookie)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cookie).name());
						__parameters__[0] = &cookie;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "RegistrationServices", 0, NULL, "UnregisterTypeForComClients", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
