#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_Rfc2898DeriveBytes.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				std::vector<mscorlib::System::Byte*> Rfc2898DeriveBytes::GetBytes(mscorlib::System::Int32 cb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cb).name());
						__parameters__[0] = &cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void Rfc2898DeriveBytes::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:IterationCount
				mscorlib::System::Int32  Rfc2898DeriveBytes::get_IterationCount()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 0, NULL, "get_IterationCount", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void Rfc2898DeriveBytes::set_IterationCount(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 0, NULL, "set_IterationCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Salt
				std::vector<mscorlib::System::Byte*>  Rfc2898DeriveBytes::get_Salt()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 0, NULL, "get_Salt", __native_object__, 0, NULL, NULL, NULL);
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

				void Rfc2898DeriveBytes::set_Salt(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "Rfc2898DeriveBytes", 0, NULL, "set_Salt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
