#include <mscorlib/System/Security/Cryptography/X509Certificates/mscorlib_System_Security_Cryptography_X509Certificates_X509Certificate.h>
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
				namespace X509Certificates
				{

					//Public Methods
					mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate X509Certificate::CreateFromCertFile(mscorlib::System::String filename)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(filename).name());
							__parameters__[0] = (MonoObject*)filename;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "CreateFromCertFile", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate(__result__);
					}

					mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate X509Certificate::CreateFromSignedFile(mscorlib::System::String filename)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(filename).name());
							__parameters__[0] = (MonoObject*)filename;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "CreateFromSignedFile", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate(__result__);
					}

					mscorlib::System::Boolean X509Certificate::Equals(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate other)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(other).name());
							__parameters__[0] = (MonoObject*)other;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					std::vector<mscorlib::System::Byte*> X509Certificate::GetCertHash()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetCertHash", __native_object__, 0, NULL, NULL, NULL);
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

					mscorlib::System::String X509Certificate::GetCertHashString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetCertHashString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::GetEffectiveDateString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetEffectiveDateString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::GetExpirationDateString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetExpirationDateString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::GetFormat()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetFormat", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::Int32 X509Certificate::GetHashCode()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					mscorlib::System::String X509Certificate::GetIssuerName()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetIssuerName", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::GetKeyAlgorithm()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetKeyAlgorithm", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					std::vector<mscorlib::System::Byte*> X509Certificate::GetKeyAlgorithmParameters()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetKeyAlgorithmParameters", __native_object__, 0, NULL, NULL, NULL);
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

					mscorlib::System::String X509Certificate::GetKeyAlgorithmParametersString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetKeyAlgorithmParametersString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::GetName()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetName", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					std::vector<mscorlib::System::Byte*> X509Certificate::GetPublicKey()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetPublicKey", __native_object__, 0, NULL, NULL, NULL);
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

					mscorlib::System::String X509Certificate::GetPublicKeyString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetPublicKeyString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					std::vector<mscorlib::System::Byte*> X509Certificate::GetRawCertData()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetRawCertData", __native_object__, 0, NULL, NULL, NULL);
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

					mscorlib::System::String X509Certificate::GetRawCertDataString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetRawCertDataString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					std::vector<mscorlib::System::Byte*> X509Certificate::GetSerialNumber()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetSerialNumber", __native_object__, 0, NULL, NULL, NULL);
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

					mscorlib::System::String X509Certificate::GetSerialNumberString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "GetSerialNumberString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::ToString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::String X509Certificate::ToString(mscorlib::System::Boolean fVerbose)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(fVerbose).name());
							__parameters__[0] = reinterpret_cast<void*>(fVerbose);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::Boolean X509Certificate::Equals(mscorlib::System::Object obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					std::vector<mscorlib::System::Byte*> X509Certificate::Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(contentType).name());
							__parameters__[0] = reinterpret_cast<void*>(contentType);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Export", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

					std::vector<mscorlib::System::Byte*> X509Certificate::Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType, mscorlib::System::String password)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(contentType).name());
							__parameter_types__[1] = Global::GetType(typeid(password).name());
							__parameters__[0] = reinterpret_cast<void*>(contentType);
							__parameters__[1] = (MonoObject*)password;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Export", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

					std::vector<mscorlib::System::Byte*> X509Certificate::Export(mscorlib::System::Security::Cryptography::X509Certificates::X509ContentType::__ENUM__ contentType, mscorlib::System::Security::SecureString password)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(contentType).name());
							__parameter_types__[1] = Global::GetType(typeid(password).name());
							__parameters__[0] = reinterpret_cast<void*>(contentType);
							__parameters__[1] = (MonoObject*)password;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Export", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

					void X509Certificate::Import(std::vector<mscorlib::System::Byte*> rawData)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawData).name()))->eklass);
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, typeid(mscorlib::System::Byte).name());
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Import", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					void X509Certificate::Import(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::String password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawData).name()))->eklass);
							__parameter_types__[1] = Global::GetType(typeid(password).name());
							__parameter_types__[2] = Global::GetType(typeid(keyStorageFlags).name());
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, typeid(mscorlib::System::Byte).name());
							__parameters__[1] = (MonoObject*)password;
							__parameters__[2] = reinterpret_cast<void*>(keyStorageFlags);
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Import", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					}

					void X509Certificate::Import(std::vector<mscorlib::System::Byte*> rawData, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawData).name()))->eklass);
							__parameter_types__[1] = Global::GetType(typeid(password).name());
							__parameter_types__[2] = Global::GetType(typeid(keyStorageFlags).name());
							__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, typeid(mscorlib::System::Byte).name());
							__parameters__[1] = (MonoObject*)password;
							__parameters__[2] = reinterpret_cast<void*>(keyStorageFlags);
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Import", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					}

					void X509Certificate::Import(mscorlib::System::String fileName)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(fileName).name());
							__parameters__[0] = (MonoObject*)fileName;
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Import", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					void X509Certificate::Import(mscorlib::System::String fileName, mscorlib::System::String password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(fileName).name());
							__parameter_types__[1] = Global::GetType(typeid(password).name());
							__parameter_types__[2] = Global::GetType(typeid(keyStorageFlags).name());
							__parameters__[0] = (MonoObject*)fileName;
							__parameters__[1] = (MonoObject*)password;
							__parameters__[2] = reinterpret_cast<void*>(keyStorageFlags);
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Import", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					}

					void X509Certificate::Import(mscorlib::System::String fileName, mscorlib::System::Security::SecureString password, mscorlib::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags::__ENUM__ keyStorageFlags)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(fileName).name());
							__parameter_types__[1] = Global::GetType(typeid(password).name());
							__parameter_types__[2] = Global::GetType(typeid(keyStorageFlags).name());
							__parameters__[0] = (MonoObject*)fileName;
							__parameters__[1] = (MonoObject*)password;
							__parameters__[2] = reinterpret_cast<void*>(keyStorageFlags);
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Import", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					}

					void X509Certificate::Reset()
					{
							Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
					}

					//Get Set Properties Methods
					//	Get:Issuer
					mscorlib::System::String  X509Certificate::get_Issuer()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "get_Issuer", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:Subject
					mscorlib::System::String  X509Certificate::get_Subject()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "get_Subject", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:Handle
					mscorlib::System::IntPtr  X509Certificate::get_Handle()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography.X509Certificates", "X509Certificate", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::IntPtr(__result__);
					}



				}
			}
		}
	}
}
