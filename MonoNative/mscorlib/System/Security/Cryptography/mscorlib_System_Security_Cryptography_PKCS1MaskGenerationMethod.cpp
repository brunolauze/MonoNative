#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_PKCS1MaskGenerationMethod.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				std::vector<mscorlib::System::Byte*> PKCS1MaskGenerationMethod::GenerateMask(std::vector<mscorlib::System::Byte*> rgbSeed, mscorlib::System::Int32 cbReturn)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rgbSeed).name()))->eklass);
						__parameter_types__[1] = Global::GetType(typeid(cbReturn).name());
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbSeed, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = &cbReturn;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PKCS1MaskGenerationMethod", 0, NULL, "GenerateMask", __native_object__, 2, __parameter_types__, __parameters__, NULL);
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

				//Get Set Properties Methods
				//	Get/Set:HashName
				mscorlib::System::String  PKCS1MaskGenerationMethod::get_HashName()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PKCS1MaskGenerationMethod", 0, NULL, "get_HashName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void PKCS1MaskGenerationMethod::set_HashName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "PKCS1MaskGenerationMethod", 0, NULL, "set_HashName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
