#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_DSASignatureFormatter.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				std::vector<mscorlib::System::Byte*> DSASignatureFormatter::CreateSignature(std::vector<mscorlib::System::Byte*> rgbHash)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbHash).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbHash, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSASignatureFormatter", 0, NULL, "CreateSignature", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void DSASignatureFormatter::SetHashAlgorithm(mscorlib::System::String strName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(strName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), strName);
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSASignatureFormatter", 0, NULL, "SetHashAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void DSASignatureFormatter::SetHashAlgorithm(const char *strName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(strName).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), strName);
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSASignatureFormatter", 0, NULL, "SetHashAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void DSASignatureFormatter::SetKey(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm key)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(key).name());
						__parameters__[0] = (MonoObject*)key;
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "DSASignatureFormatter", 0, NULL, "SetKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
