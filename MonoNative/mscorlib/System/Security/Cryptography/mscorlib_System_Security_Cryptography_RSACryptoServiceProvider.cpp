#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSACryptoServiceProvider.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAParameters.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspKeyContainerInfo.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeySizes.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				Property<mscorlib::System::Boolean , mscorlib::System::Security::Cryptography::RSACryptoServiceProvider> mscorlib::System::Security::Cryptography::RSACryptoServiceProvider::UseMachineKeyStore(&mscorlib::System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore, &mscorlib::System::Security::Cryptography::RSACryptoServiceProvider::set_UseMachineKeyStore);
				//Public Methods
				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::Decrypt(std::vector<mscorlib::System::Byte*> rgb, mscorlib::System::Boolean fOAEP)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgb).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(fOAEP).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgb, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = reinterpret_cast<void*>(fOAEP);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "Decrypt", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::DecryptValue(std::vector<mscorlib::System::Byte*> rgb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgb).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgb, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "DecryptValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::Encrypt(std::vector<mscorlib::System::Byte*> rgb, mscorlib::System::Boolean fOAEP)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgb).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(fOAEP).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgb, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = reinterpret_cast<void*>(fOAEP);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "Encrypt", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::EncryptValue(std::vector<mscorlib::System::Byte*> rgb)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgb).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgb, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "EncryptValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Security::Cryptography::RSAParameters RSACryptoServiceProvider::ExportParameters(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "ExportParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::RSAParameters(__result__);
				}

				void RSACryptoServiceProvider::ImportParameters(mscorlib::System::Security::Cryptography::RSAParameters parameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(parameters).name());
						__parameters__[0] = (MonoObject*)parameters;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "ImportParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::SignData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Object halg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(halg).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)halg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "SignData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::SignData(mscorlib::System::IO::Stream inputStream, mscorlib::System::Object halg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(inputStream).name());
						__parameter_types__[1] = Global::GetType(typeid(halg).name());
						__parameters__[0] = (MonoObject*)inputStream;
						__parameters__[1] = (MonoObject*)halg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "SignData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::SignData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count, mscorlib::System::Object halg)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameter_types__[3] = Global::GetType(typeid(halg).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						__parameters__[3] = (MonoObject*)halg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "SignData", __native_object__, 4, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::SignHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(str).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)str;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "SignHash", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Boolean RSACryptoServiceProvider::VerifyData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Object halg, std::vector<mscorlib::System::Byte*> signature)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(halg).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(signature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)halg;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(signature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "VerifyData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RSACryptoServiceProvider::VerifyHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str, std::vector<mscorlib::System::Byte*> rgbSignature)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(str).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)str;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(rgbSignature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "VerifyHash", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Byte*> RSACryptoServiceProvider::ExportCspBlob(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "ExportCspBlob", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void RSACryptoServiceProvider::ImportCspBlob(std::vector<mscorlib::System::Byte*> keyBlob)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(keyBlob).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(keyBlob, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "ImportCspBlob", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:KeyExchangeAlgorithm
				mscorlib::System::String  RSACryptoServiceProvider::get_KeyExchangeAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_KeyExchangeAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:KeySize
				mscorlib::System::Int32  RSACryptoServiceProvider::get_KeySize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_KeySize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:PersistKeyInCsp
				mscorlib::System::Boolean  RSACryptoServiceProvider::get_PersistKeyInCsp() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_PersistKeyInCsp", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RSACryptoServiceProvider::set_PersistKeyInCsp(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "set_PersistKeyInCsp", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:PublicOnly
				mscorlib::System::Boolean  RSACryptoServiceProvider::get_PublicOnly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_PublicOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:SignatureAlgorithm
				mscorlib::System::String  RSACryptoServiceProvider::get_SignatureAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_SignatureAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:CspKeyContainerInfo
				mscorlib::System::Security::Cryptography::CspKeyContainerInfo  RSACryptoServiceProvider::get_CspKeyContainerInfo() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_CspKeyContainerInfo", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::CspKeyContainerInfo(__result__);
				}


				//	Get:LegalKeySizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  RSACryptoServiceProvider::get_LegalKeySizes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_LegalKeySizes", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Security::Cryptography::KeySizes (__array_item__));
					}
					return __array_result__;
				}


				//Get Set Static Properties Methods
				//	Get/Set:UseMachineKeyStore
				mscorlib::System::Boolean  RSACryptoServiceProvider::get_UseMachineKeyStore()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "get_UseMachineKeyStore", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RSACryptoServiceProvider::set_UseMachineKeyStore(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSACryptoServiceProvider", 0, NULL, "set_UseMachineKeyStore", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}




			}
		}
	}
}
