#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSA.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSAParameters.h>
#include <mscorlib/System/mscorlib_System_String.h>
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

				//Public Methods
				mscorlib::System::Security::Cryptography::DSA DSA::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::DSA(__result__);
				}

				mscorlib::System::Security::Cryptography::DSA DSA::Create(mscorlib::System::String algName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(algName).name());
						__parameters__[0] = (MonoObject*)algName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::DSA(__result__);
				}

				std::vector<mscorlib::System::Byte*> DSA::CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "CreateSignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				mscorlib::System::Security::Cryptography::DSAParameters DSA::ExportParameters(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "ExportParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::DSAParameters(__result__);
				}

				void DSA::FromXmlString(mscorlib::System::String xmlString)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(xmlString).name());
						__parameters__[0] = (MonoObject*)xmlString;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "FromXmlString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void DSA::ImportParameters(mscorlib::System::Security::Cryptography::DSAParameters parameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(parameters).name());
						__parameters__[0] = (MonoObject*)parameters;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "ImportParameters", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String DSA::ToXmlString(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "ToXmlString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean DSA::VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbSignature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSA", 0, NULL, "VerifySignature", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:KeyExchangeAlgorithm
				mscorlib::System::String  DSA::get_KeyExchangeAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_KeyExchangeAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:KeySize
				mscorlib::System::Int32  DSA::get_KeySize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_KeySize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void DSA::set_KeySize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "set_KeySize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:LegalKeySizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  DSA::get_LegalKeySizes() const
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


				//	Get:SignatureAlgorithm
				mscorlib::System::String  DSA::get_SignatureAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_SignatureAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
