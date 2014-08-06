#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspKeyContainerInfo.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				std::vector<mscorlib::System::Byte*> ICspAsymmetricAlgorithm::ExportCspBlob(mscorlib::System::Boolean includePrivateParameters)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(includePrivateParameters).name());
						__parameters__[0] = reinterpret_cast<void*>(includePrivateParameters);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICspAsymmetricAlgorithm", 0, NULL, "ExportCspBlob", __mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm, 1, __parameter_types__, __parameters__, NULL);
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

				void ICspAsymmetricAlgorithm::ImportCspBlob(std::vector<mscorlib::System::Byte*> rawData)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawData, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICspAsymmetricAlgorithm", 0, NULL, "ImportCspBlob", __mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:CspKeyContainerInfo
				mscorlib::System::Security::Cryptography::CspKeyContainerInfo  ICspAsymmetricAlgorithm::get_CspKeyContainerInfo() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "ICspAsymmetricAlgorithm", 0, NULL, "get_CspKeyContainerInfo", __mscorlib_System_Security_Cryptography_ICspAsymmetricAlgorithm, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Cryptography::CspKeyContainerInfo(__result__);
				}



			}
		}
	}
}
