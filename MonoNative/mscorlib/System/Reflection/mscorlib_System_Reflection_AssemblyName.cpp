#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_StrongNameKeyPair.h>
#include <mscorlib/System/mscorlib_System_Version.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::String AssemblyName::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			std::vector<mscorlib::System::Byte*> AssemblyName::GetPublicKey()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "GetPublicKey", __native_object__, 0, NULL, NULL, NULL);
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

			std::vector<mscorlib::System::Byte*> AssemblyName::GetPublicKeyToken()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "GetPublicKeyToken", __native_object__, 0, NULL, NULL, NULL);
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

			mscorlib::System::Boolean AssemblyName::ReferenceMatchesDefinition(mscorlib::System::Reflection::AssemblyName reference, mscorlib::System::Reflection::AssemblyName definition)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(reference).name());
					__parameter_types__[1] = Global::GetType(typeid(definition).name());
					__parameters__[0] = (MonoObject*)reference;
					__parameters__[1] = (MonoObject*)definition;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "ReferenceMatchesDefinition", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void AssemblyName::SetPublicKey(std::vector<mscorlib::System::Byte*> publicKey)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(publicKey).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(publicKey, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "SetPublicKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void AssemblyName::SetPublicKeyToken(std::vector<mscorlib::System::Byte*> publicKeyToken)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(publicKeyToken).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(publicKeyToken, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "SetPublicKeyToken", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void AssemblyName::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Object AssemblyName::Clone()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
			}

			void AssemblyName::OnDeserialization(mscorlib::System::Object sender)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(sender).name());
					__parameters__[0] = (MonoObject*)sender;
					Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "OnDeserialization", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Reflection::AssemblyName AssemblyName::GetAssemblyName(mscorlib::System::String assemblyFile)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameters__[0] = (MonoObject*)assemblyFile;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "GetAssemblyName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::AssemblyName(__result__);
			}

			//Get Set Properties Methods
			//	Get/Set:ProcessorArchitecture
			mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__  AssemblyName::get_ProcessorArchitecture() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_ProcessorArchitecture", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__*)mono_object_unbox(__result__);
			}

			void AssemblyName::set_ProcessorArchitecture(mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_ProcessorArchitecture", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Name
			mscorlib::System::String  AssemblyName::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblyName::set_Name(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_Name", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CodeBase
			mscorlib::System::String  AssemblyName::get_CodeBase() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_CodeBase", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}

			void AssemblyName::set_CodeBase(mscorlib::System::String  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_CodeBase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:EscapedCodeBase
			mscorlib::System::String  AssemblyName::get_EscapedCodeBase() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_EscapedCodeBase", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:CultureInfo
			mscorlib::System::Globalization::CultureInfo  AssemblyName::get_CultureInfo() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_CultureInfo", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Globalization::CultureInfo(__result__);
			}

			void AssemblyName::set_CultureInfo(mscorlib::System::Globalization::CultureInfo  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_CultureInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Flags
			mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__  AssemblyName::get_Flags() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__*)mono_object_unbox(__result__);
			}

			void AssemblyName::set_Flags(mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_Flags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:FullName
			mscorlib::System::String  AssemblyName::get_FullName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:HashAlgorithm
			mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  AssemblyName::get_HashAlgorithm() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_HashAlgorithm", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__*)mono_object_unbox(__result__);
			}

			void AssemblyName::set_HashAlgorithm(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_HashAlgorithm", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:KeyPair
			mscorlib::System::Reflection::StrongNameKeyPair  AssemblyName::get_KeyPair() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_KeyPair", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::StrongNameKeyPair(__result__);
			}

			void AssemblyName::set_KeyPair(mscorlib::System::Reflection::StrongNameKeyPair  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_KeyPair", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:Version
			mscorlib::System::Version  AssemblyName::get_Version() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_Version", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Version(__result__);
			}

			void AssemblyName::set_Version(mscorlib::System::Version  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_Version", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:VersionCompatibility
			mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__  AssemblyName::get_VersionCompatibility() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_VersionCompatibility", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__*)mono_object_unbox(__result__);
			}

			void AssemblyName::set_VersionCompatibility(mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_VersionCompatibility", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:CultureName
			mscorlib::System::String  AssemblyName::get_CultureName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_CultureName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:ContentType
			mscorlib::System::Reflection::AssemblyContentType::__ENUM__  AssemblyName::get_ContentType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "get_ContentType", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Reflection::AssemblyContentType::__ENUM__*)mono_object_unbox(__result__);
			}

			void AssemblyName::set_ContentType(mscorlib::System::Reflection::AssemblyContentType::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyName", 0, NULL, "set_ContentType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
