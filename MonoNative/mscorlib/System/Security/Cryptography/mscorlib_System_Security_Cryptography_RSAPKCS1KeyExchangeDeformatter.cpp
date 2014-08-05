#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDeformatter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RandomNumberGenerator.h>
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
				std::vector<mscorlib::System::Byte*> RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(std::vector<mscorlib::System::Byte*> rgbIn)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbIn).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbIn, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 0, NULL, "DecryptKeyExchange", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void RSAPKCS1KeyExchangeDeformatter::SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 0, NULL, "SetKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:Parameters
				mscorlib::System::String  RSAPKCS1KeyExchangeDeformatter::get_Parameters() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 0, NULL, "get_Parameters", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RSAPKCS1KeyExchangeDeformatter::set_Parameters(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 0, NULL, "set_Parameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:RNG
				mscorlib::System::Security::Cryptography::RandomNumberGenerator  RSAPKCS1KeyExchangeDeformatter::get_RNG() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 0, NULL, "get_RNG", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::RandomNumberGenerator(__result__);
				}

				void RSAPKCS1KeyExchangeDeformatter::set_RNG(mscorlib::System::Security::Cryptography::RandomNumberGenerator  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1KeyExchangeDeformatter", 0, NULL, "set_RNG", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
