#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Hash.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_HashAlgorithm.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				std::vector<mscorlib::System::Byte*> Hash::GenerateHash(mscorlib::System::Security::Cryptography::HashAlgorithm hashAlg)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(hashAlg).name());
						__parameters__[0] = (MonoObject*)hashAlg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "GenerateHash", __native_object__, 1, __parameter_types__, __parameters__, NULL);
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

				void Hash::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(info).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String Hash::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Security::Policy::Hash Hash::CreateMD5(std::vector<mscorlib::System::Byte*> md5)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(md5).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(md5, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "CreateMD5", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::Hash(__result__);
				}

				mscorlib::System::Security::Policy::Hash Hash::CreateSHA1(std::vector<mscorlib::System::Byte*> sha1)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(sha1).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(sha1, typeid(mscorlib::System::Byte).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "CreateSHA1", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::Hash(__result__);
				}

				//Get Set Properties Methods
				//	Get:MD5
				std::vector<mscorlib::System::Byte*>  Hash::get_MD5()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "get_MD5", __native_object__, 0, NULL, NULL, NULL);
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


				//	Get:SHA1
				std::vector<mscorlib::System::Byte*>  Hash::get_SHA1()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Hash", 0, NULL, "get_SHA1", __native_object__, 0, NULL, NULL, NULL);
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



			}
		}
	}
}
