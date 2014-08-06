#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAOAEPKeyExchangeFormatter.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RandomNumberGenerator.h>
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
				std::vector<mscorlib::System::Byte*> RSAOAEPKeyExchangeFormatter::CreateKeyExchange(std::vector<mscorlib::System::Byte*> rgbData)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbData, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "CreateKeyExchange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSAOAEPKeyExchangeFormatter::CreateKeyExchange(std::vector<mscorlib::System::Byte*> rgbData, mscorlib::System::Type symAlgType)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = Global::GetType(typeid(symAlgType).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbData, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)symAlgType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "CreateKeyExchange", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				void RSAOAEPKeyExchangeFormatter::SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "SetKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:Parameter
				std::vector<mscorlib::System::Byte*>  RSAOAEPKeyExchangeFormatter::get_Parameter() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "get_Parameter", __native_object__, 0, NULL, NULL, NULL);
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

				void RSAOAEPKeyExchangeFormatter::set_Parameter(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "set_Parameter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Parameters
				mscorlib::System::String  RSAOAEPKeyExchangeFormatter::get_Parameters() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "get_Parameters", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:Rng
				mscorlib::System::Security::Cryptography::RandomNumberGenerator  RSAOAEPKeyExchangeFormatter::get_Rng() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "get_Rng", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::RandomNumberGenerator(__result__);
				}

				void RSAOAEPKeyExchangeFormatter::set_Rng(mscorlib::System::Security::Cryptography::RandomNumberGenerator  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter", 0, NULL, "set_Rng", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
