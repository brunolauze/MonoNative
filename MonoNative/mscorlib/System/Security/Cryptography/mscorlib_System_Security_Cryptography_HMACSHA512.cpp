#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HMACSHA512.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
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
				//Get Set Properties Methods
				//	Get/Set:ProduceLegacyHmacValues
				mscorlib::System::Boolean  HMACSHA512::get_ProduceLegacyHmacValues() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HMACSHA512", 0, NULL, "get_ProduceLegacyHmacValues", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HMACSHA512::set_ProduceLegacyHmacValues(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HMACSHA512", 0, NULL, "set_ProduceLegacyHmacValues", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:HashName
				mscorlib::System::String  HMACSHA512::get_HashName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HMAC", 0, NULL, "get_HashName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void HMACSHA512::set_HashName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HMAC", 0, NULL, "set_HashName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Key
				std::vector<mscorlib::System::Byte*>  HMACSHA512::get_Key() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HMAC", 0, NULL, "get_Key", __native_object__, 0, NULL, NULL, NULL);
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

				void HMACSHA512::set_Key(std::vector<mscorlib::System::Byte*>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HMAC", 0, NULL, "set_Key", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:CanTransformMultipleBlocks
				mscorlib::System::Boolean  HMACSHA512::get_CanTransformMultipleBlocks() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_CanTransformMultipleBlocks", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CanReuseTransform
				mscorlib::System::Boolean  HMACSHA512::get_CanReuseTransform() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_CanReuseTransform", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Hash
				std::vector<mscorlib::System::Byte*>  HMACSHA512::get_Hash() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_Hash", __native_object__, 0, NULL, NULL, NULL);
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


				//	Get:HashSize
				mscorlib::System::Int32  HMACSHA512::get_HashSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_HashSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:InputBlockSize
				mscorlib::System::Int32  HMACSHA512::get_InputBlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_InputBlockSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:OutputBlockSize
				mscorlib::System::Int32  HMACSHA512::get_OutputBlockSize() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "HashAlgorithm", 0, NULL, "get_OutputBlockSize", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
