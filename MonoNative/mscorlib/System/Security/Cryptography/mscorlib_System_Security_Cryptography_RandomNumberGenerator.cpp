#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_RandomNumberGenerator.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				mscorlib::System::Security::Cryptography::RandomNumberGenerator RandomNumberGenerator::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RandomNumberGenerator", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::RandomNumberGenerator(__result__);
				}

				mscorlib::System::Security::Cryptography::RandomNumberGenerator RandomNumberGenerator::Create(mscorlib::System::String rngName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rngName).name());
						__parameters__[0] = (MonoObject*)rngName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RandomNumberGenerator", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::RandomNumberGenerator(__result__);
				}

				void RandomNumberGenerator::GetBytes(std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RandomNumberGenerator", 0, NULL, "GetBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RandomNumberGenerator::GetNonZeroBytes(std::vector<mscorlib::System::Byte*> data)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(data).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(data, typeid(mscorlib::System::Byte).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RandomNumberGenerator", 0, NULL, "GetNonZeroBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void RandomNumberGenerator::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "RandomNumberGenerator", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}


			}
		}
	}
}
