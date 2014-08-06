#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RNGCryptoServiceProvider.h>
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
				void RNGCryptoServiceProvider::GetBytes(std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RNGCryptoServiceProvider", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RNGCryptoServiceProvider::GetNonZeroBytes(std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RNGCryptoServiceProvider", 0, NULL, "GetNonZeroBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
