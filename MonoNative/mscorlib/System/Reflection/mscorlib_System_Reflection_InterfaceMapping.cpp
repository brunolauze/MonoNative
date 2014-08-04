#include <mscorlib/System/Reflection/mscorlib_System_Reflection_InterfaceMapping.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//	Get/Set:InterfaceMethods
			std::vector<mscorlib::System::Reflection::MethodInfo*> InterfaceMapping::get_InterfaceMethods()
			{
				MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Reflection", "InterfaceMapping", 0, NULL, "InterfaceMethods");
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

			void InterfaceMapping::set_InterfaceMethods(std::vector<mscorlib::System::Reflection::MethodInfo*>  value)
			{
			}

			//	Get/Set:InterfaceType
			mscorlib::System::Type InterfaceMapping::get_InterfaceType()
			{
				return Global::GetFieldValue(__native_object__, "InterfaceType");
			}

			void InterfaceMapping::set_InterfaceType(mscorlib::System::Type  value)
			{
			}

			//	Get/Set:TargetMethods
			std::vector<mscorlib::System::Reflection::MethodInfo*> InterfaceMapping::get_TargetMethods()
			{
				MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.Reflection", "InterfaceMapping", 0, NULL, "TargetMethods");
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

			void InterfaceMapping::set_TargetMethods(std::vector<mscorlib::System::Reflection::MethodInfo*>  value)
			{
			}

			//	Get/Set:TargetType
			mscorlib::System::Type InterfaceMapping::get_TargetType()
			{
				return Global::GetFieldValue(__native_object__, "TargetType");
			}

			void InterfaceMapping::set_TargetType(mscorlib::System::Type  value)
			{
			}


		}
	}
}
