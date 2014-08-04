#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CryptoConfig.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				mscorlib::System::Object CryptoConfig::CreateFromName(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "CreateFromName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object CryptoConfig::CreateFromName(mscorlib::System::String name, std::vector<mscorlib::System::Object*> args)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "CreateFromName", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::String CryptoConfig::MapNameToOID(mscorlib::System::String name)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(name).name());
						__parameters__[0] = (MonoObject*)name;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "MapNameToOID", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				void CryptoConfig::AddAlgorithm(mscorlib::System::Type algorithm, std::vector<mscorlib::System::String*> names)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(algorithm).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(names).name()))->eklass);
						__parameters__[0] = (MonoObject*)algorithm;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(names, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "AddAlgorithm", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void CryptoConfig::AddOID(mscorlib::System::String oid, std::vector<mscorlib::System::String*> names)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(oid).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(names).name()))->eklass);
						__parameters__[0] = (MonoObject*)oid;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(names, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "AddOID", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				std::vector<mscorlib::System::Byte*> CryptoConfig::EncodeOID(mscorlib::System::String str)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(str).name());
						__parameters__[0] = (MonoObject*)str;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "EncodeOID", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

				//Get Set Static Properties Methods
				//	Get:AllowOnlyFipsAlgorithms
				mscorlib::System::Boolean  CryptoConfig::get_AllowOnlyFipsAlgorithms()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CryptoConfig", 0, NULL, "get_AllowOnlyFipsAlgorithms", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}




			}
		}
	}
}
