#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeySizes.h>
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
				void SymmetricAlgorithm::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				void SymmetricAlgorithm::Clear()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "Clear", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Security::Cryptography::ICryptoTransform SymmetricAlgorithm::CreateDecryptor()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "CreateDecryptor", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::ICryptoTransform(__result__);
				}

				mscorlib::System::Security::Cryptography::ICryptoTransform SymmetricAlgorithm::CreateDecryptor(std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbKey, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbIV, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "CreateDecryptor", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::ICryptoTransform(__result__);
				}

				mscorlib::System::Security::Cryptography::ICryptoTransform SymmetricAlgorithm::CreateEncryptor()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "CreateEncryptor", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::ICryptoTransform(__result__);
				}

				mscorlib::System::Security::Cryptography::ICryptoTransform SymmetricAlgorithm::CreateEncryptor(std::vector<mscorlib::System::Byte*> rgbKey, std::vector<mscorlib::System::Byte*> rgbIV)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rgbKey, typeid(mscorlib::System::Byte).name());
						__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rgbIV, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "CreateEncryptor", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::ICryptoTransform(__result__);
				}

				void SymmetricAlgorithm::GenerateIV()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "GenerateIV", __native_object__, 0, NULL, NULL, NULL);
				}

				void SymmetricAlgorithm::GenerateKey()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "GenerateKey", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Boolean SymmetricAlgorithm::ValidKeySize(mscorlib::System::Int32 bitLength)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(bitLength).name());
						__parameters__[0] = &bitLength;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "ValidKeySize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Cryptography::SymmetricAlgorithm SymmetricAlgorithm::Create()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "Create", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Cryptography::SymmetricAlgorithm(__result__);
				}

				mscorlib::System::Security::Cryptography::SymmetricAlgorithm SymmetricAlgorithm::Create(mscorlib::System::String algName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(algName).name());
						__parameters__[0] = (MonoObject*)algName;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::SymmetricAlgorithm(__result__);
				}

				mscorlib::System::Security::Cryptography::SymmetricAlgorithm SymmetricAlgorithm::Create(const char *algName)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), algName);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Cryptography::SymmetricAlgorithm(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:BlockSize
				mscorlib::System::Int32  SymmetricAlgorithm::get_BlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_BlockSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void SymmetricAlgorithm::set_BlockSize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_BlockSize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:FeedbackSize
				mscorlib::System::Int32  SymmetricAlgorithm::get_FeedbackSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_FeedbackSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void SymmetricAlgorithm::set_FeedbackSize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_FeedbackSize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:IV
				std::vector<mscorlib::System::Byte*>  SymmetricAlgorithm::get_IV() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_IV", __native_object__, 0, NULL, NULL, NULL);
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

				void SymmetricAlgorithm::set_IV(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_IV", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Key
				std::vector<mscorlib::System::Byte*>  SymmetricAlgorithm::get_Key() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
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

				void SymmetricAlgorithm::set_Key(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeySize
				mscorlib::System::Int32  SymmetricAlgorithm::get_KeySize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_KeySize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void SymmetricAlgorithm::set_KeySize(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_KeySize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:LegalBlockSizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  SymmetricAlgorithm::get_LegalBlockSizes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_LegalBlockSizes", __native_object__, 0, NULL, NULL, NULL);
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


				//	Get:LegalKeySizes
				std::vector<mscorlib::System::Security::Cryptography::KeySizes*>  SymmetricAlgorithm::get_LegalKeySizes() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_LegalKeySizes", __native_object__, 0, NULL, NULL, NULL);
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


				//	Get/Set:Mode
				mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  SymmetricAlgorithm::get_Mode() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_Mode", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Cryptography::CipherMode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void SymmetricAlgorithm::set_Mode(mscorlib::System::Security::Cryptography::CipherMode::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_Mode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Padding
				mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  SymmetricAlgorithm::get_Padding() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "get_Padding", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void SymmetricAlgorithm::set_Padding(mscorlib::System::Security::Cryptography::PaddingMode::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "SymmetricAlgorithm", 0, NULL, "set_Padding", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
