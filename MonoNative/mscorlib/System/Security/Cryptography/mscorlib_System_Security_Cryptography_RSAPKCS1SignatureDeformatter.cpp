#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RSAPKCS1SignatureDeformatter.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
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
				void RSAPKCS1SignatureDeformatter::SetHashAlgorithm(mscorlib::System::String strName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(strName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), strName);
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter", 0, NULL, "SetHashAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RSAPKCS1SignatureDeformatter::SetHashAlgorithm(const char *strName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(strName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), strName);
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter", 0, NULL, "SetHashAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RSAPKCS1SignatureDeformatter::SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter", 0, NULL, "SetKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean RSAPKCS1SignatureDeformatter::VerifySignature(std::vector<mscorlib::System::Byte*> rgbHash, std::vector<mscorlib::System::Byte*> rgbSignature)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSignature).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbSignature, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter", 0, NULL, "VerifySignature", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


			}
		}
	}
}
