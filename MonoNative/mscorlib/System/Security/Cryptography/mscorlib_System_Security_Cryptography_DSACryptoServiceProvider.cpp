#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSACryptoServiceProvider.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSAParameters.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
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

				Property<mscorlib::System::Boolean , mscorlib::System::Security::Cryptography::DSACryptoServiceProvider> mscorlib::System::Security::Cryptography::DSACryptoServiceProvider::UseMachineKeyStore(&mscorlib::System::Security::Cryptography::DSACryptoServiceProvider::get_UseMachineKeyStore, &mscorlib::System::Security::Cryptography::DSACryptoServiceProvider::set_UseMachineKeyStore);
				//Public Methods
				mscorlib::System::Security::Cryptography::DSAParameters DSACryptoServiceProvider::ExportParameters(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "ExportParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::DSAParameters(__result__);
				}

				void DSACryptoServiceProvider::ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(parameters).name());
						__parameters__[0] = (MonoObject*)parameters;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "ImportParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				std::vector<mscorlib::System::Byte*> DSACryptoServiceProvider::CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "CreateSignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> DSACryptoServiceProvider::SignData(std::vector<mscorlib::System::Byte*> buffer)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "SignData", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> DSACryptoServiceProvider::SignData(std::vector<mscorlib::System::Byte*> buffer, mscorlib::System::Int32 offset, mscorlib::System::Int32 count)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(buffer).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(offset).name());
						__parameter_types__[2] = Global::GetType(typeid(count).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(buffer, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &offset;
						__parameters__[2] = &count;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "SignData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> DSACryptoServiceProvider::SignData(mscorlib::System::IO::Stream inputStream)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(inputStream).name());
						__parameters__[0] = (MonoObject*)inputStream;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "SignData", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				std::vector<mscorlib::System::Byte*> DSACryptoServiceProvider::SignHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(str).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)str;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "SignHash", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Boolean DSACryptoServiceProvider::VerifyData(std::vector<mscorlib::System::Byte*> rgbData, std::vector<mscorlib::System::Byte*> rgbSignature)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbData).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbData, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbSignature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "VerifyData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean DSACryptoServiceProvider::VerifyHash(std::vector<mscorlib::System::Byte*> rgbHash, mscorlib::System::String str, std::vector<mscorlib::System::Byte*> rgbSignature)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(str).name());
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = (MonoObject*)str;
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(rgbSignature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "VerifyHash", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean DSACryptoServiceProvider::VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbSignature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "VerifySignature", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				std::vector<mscorlib::System::Byte*> DSACryptoServiceProvider::ExportCspBlob(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "ExportCspBlob", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void DSACryptoServiceProvider::ImportCspBlob(std::vector<mscorlib::System::Byte*> keyBlob)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(keyBlob).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(keyBlob, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "ImportCspBlob", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:KeyExchangeAlgorithm
				mscorlib::System::String  DSACryptoServiceProvider::get_KeyExchangeAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_KeyExchangeAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:KeySize
				mscorlib::System::Int32  DSACryptoServiceProvider::get_KeySize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_KeySize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get/Set:PersistKeyInCsp
				mscorlib::System::Boolean  DSACryptoServiceProvider::get_PersistKeyInCsp() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_PersistKeyInCsp", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void DSACryptoServiceProvider::set_PersistKeyInCsp(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "set_PersistKeyInCsp", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:PublicOnly
				mscorlib::System::Boolean  DSACryptoServiceProvider::get_PublicOnly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_PublicOnly", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:SignatureAlgorithm
				mscorlib::System::String  DSACryptoServiceProvider::get_SignatureAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_SignatureAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:CspKeyContainerInfo
				mscorlib::System::Security::Cryptography::CspKeyContainerInfo  DSACryptoServiceProvider::get_CspKeyContainerInfo() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_CspKeyContainerInfo", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::CspKeyContainerInfo(__result__);
				}


				//	Get:LegalKeySizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  DSACryptoServiceProvider::get_LegalKeySizes() const
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
				mscorlib::System::Boolean  DSACryptoServiceProvider::get_UseMachineKeyStore()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "get_UseMachineKeyStore", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void DSACryptoServiceProvider::set_UseMachineKeyStore(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSACryptoServiceProvider", 0, NULL, "set_UseMachineKeyStore", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}




			}
		}
	}
}
