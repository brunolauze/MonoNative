#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_SignatureDescription.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricSignatureDeformatter.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_AsymmetricSignatureFormatter.h>
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
				mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter SignatureDescription::CreateDeformatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "CreateDeformatter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::AsymmetricSignatureDeformatter(__result__);
				}

				mscorlib::System::Security::Cryptography::HashAlgorithm SignatureDescription::CreateDigest()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "CreateDigest", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::HashAlgorithm(__result__);
				}

				mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter SignatureDescription::CreateFormatter(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "CreateFormatter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::AsymmetricSignatureFormatter(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:DeformatterAlgorithm
				mscorlib::System::String  SignatureDescription::get_DeformatterAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "get_DeformatterAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SignatureDescription::set_DeformatterAlgorithm(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "set_DeformatterAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:DigestAlgorithm
				mscorlib::System::String  SignatureDescription::get_DigestAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "get_DigestAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SignatureDescription::set_DigestAlgorithm(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "set_DigestAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:FormatterAlgorithm
				mscorlib::System::String  SignatureDescription::get_FormatterAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "get_FormatterAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SignatureDescription::set_FormatterAlgorithm(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "set_FormatterAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeyAlgorithm
				mscorlib::System::String  SignatureDescription::get_KeyAlgorithm() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "get_KeyAlgorithm", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SignatureDescription::set_KeyAlgorithm(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SignatureDescription", 0, NULL, "set_KeyAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
