#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHash.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Configuration
		{
			namespace Assemblies
			{

				//Public Methods
				mscorlib::System::Object AssemblyHash::Clone()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}

				std::vector<mscorlib::System::Byte*> AssemblyHash::GetValue()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 0, NULL, "GetValue", __native_object__, 0, NULL, NULL, NULL);
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

				void AssemblyHash::SetValue(std::vector<mscorlib::System::Byte*> value)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 0, NULL, "SetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:Algorithm
				mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  AssemblyHash::get_Algorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 0, NULL, "get_Algorithm", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__>(*(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__*)mono_object_unbox(__result__));
				}

				void AssemblyHash::set_Algorithm(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					int __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 0, NULL, "set_Algorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


					//	Get/Set:Empty
				mscorlib::System::Configuration::Assemblies::AssemblyHash AssemblyHash::get_Empty()
				{
					return Global::GetFieldValue("mscorlib", "System.Configuration.Assemblies", "AssemblyHash", 0, NULL, "Empty");
				}

				void AssemblyHash::set_Empty(mscorlib::System::Configuration::Assemblies::AssemblyHash  value)
				{
					throw;
				}


			}
		}
	}
}
