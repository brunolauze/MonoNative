#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
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
				void AsymmetricAlgorithm::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				void AsymmetricAlgorithm::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				void AsymmetricAlgorithm::FromXmlString(mscorlib::System::String xmlString)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(xmlString).name());
						__parameters__[0] = (MonoObject*)xmlString;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "FromXmlString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void AsymmetricAlgorithm::FromXmlString(const char *xmlString)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), xmlString);
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "FromXmlString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String AsymmetricAlgorithm::ToXmlString(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "ToXmlString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::Cryptography::AsymmetricAlgorithm AsymmetricAlgorithm::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(__result__);
				}

				mscorlib::System::Security::Cryptography::AsymmetricAlgorithm AsymmetricAlgorithm::Create(mscorlib::System::String algName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(algName).name());
						__parameters__[0] = (MonoObject*)algName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(__result__);
				}

				mscorlib::System::Security::Cryptography::AsymmetricAlgorithm AsymmetricAlgorithm::Create(const char *algName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), algName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::AsymmetricAlgorithm(__result__);
				}

				//Get Set Properties Methods
				//	Get:KeyExchangeAlgorithm
				mscorlib::System::String  AsymmetricAlgorithm::get_KeyExchangeAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_KeyExchangeAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:KeySize
				mscorlib::System::Int32  AsymmetricAlgorithm::get_KeySize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_KeySize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void AsymmetricAlgorithm::set_KeySize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "set_KeySize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:LegalKeySizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  AsymmetricAlgorithm::get_LegalKeySizes() const
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
				mscorlib::System::String  AsymmetricAlgorithm::get_SignatureAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "AsymmetricAlgorithm", 0, NULL, "get_SignatureAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
