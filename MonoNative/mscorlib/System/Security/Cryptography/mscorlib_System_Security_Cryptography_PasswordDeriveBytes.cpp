#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_PasswordDeriveBytes.h>
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
				std::vector<mscorlib::System::Byte*> PasswordDeriveBytes::CryptDeriveKey(mscorlib::System::String algname, mscorlib::System::String alghashname, mscorlib::System::Int32 keySize, std::vector<mscorlib::System::Byte*> rgbIV)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(algname).name());
						__parameter_types__[1] = Global::GetType(typeid(alghashname).name());
						__parameter_types__[2] = Global::GetType(typeid(keySize).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = (MonoObject*)algname;
						__parameters__[1] = (MonoObject*)alghashname;
						__parameters__[2] = &keySize;
						__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(rgbIV, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "CryptDeriveKey", __native_object__, 4, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> PasswordDeriveBytes::CryptDeriveKey(const char *algname, const char *alghashname, mscorlib::System::Int32 keySize, std::vector<mscorlib::System::Byte*> rgbIV)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(keySize).name());
						__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = mono_string_new(Global::GetDomain(), algname);
						__parameters__[1] = mono_string_new(Global::GetDomain(), alghashname);
						__parameters__[2] = &keySize;
						__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(rgbIV, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "CryptDeriveKey", __native_object__, 4, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> PasswordDeriveBytes::GetBytes(mscorlib::System::Int32 cb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(cb).name());
						__parameters__[0] = &cb;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void PasswordDeriveBytes::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:HashName
				mscorlib::System::String  PasswordDeriveBytes::get_HashName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "get_HashName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void PasswordDeriveBytes::set_HashName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "set_HashName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:IterationCount
				mscorlib::System::Int32  PasswordDeriveBytes::get_IterationCount() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "get_IterationCount", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void PasswordDeriveBytes::set_IterationCount(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "set_IterationCount", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Salt
				std::vector<mscorlib::System::Byte*>  PasswordDeriveBytes::get_Salt() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "get_Salt", __native_object__, 0, NULL, NULL, NULL);
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

				void PasswordDeriveBytes::set_Salt(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PasswordDeriveBytes", 0, NULL, "set_Salt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
