#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYNAME_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_ASSEMBLYNAME_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/mscorlib_System_ICloneable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__AssemblyName.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ProcessorArchitecture.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyNameFlags.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorithm.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyVersionCompatibility.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyContentType.h>

namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class StrongNameKeyPair;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Version;
		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class AssemblyName
				: public mscorlib::System::Object
				, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				, public virtual mscorlib::System::ICloneable
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
				, public virtual mscorlib::System::Runtime::InteropServices::_AssemblyName
			{
			public:
				AssemblyName()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyName"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_AssemblyName(NULL)
				{
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyName");
				};
			
				AssemblyName(mscorlib::System::String assemblyName)
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Reflection.AssemblyName"))
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_AssemblyName(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)assemblyName;
					__native_object__ = Global::New("mscorlib", "System.Reflection", "AssemblyName", 1, __parameter_types__, __parameters__);
				};
			
				AssemblyName(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
				, mscorlib::System::ICloneable(NULL)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				, mscorlib::System::Runtime::InteropServices::_AssemblyName(NULL)
				{
				};
			
				AssemblyName(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
				, mscorlib::System::ICloneable(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				, mscorlib::System::Runtime::InteropServices::_AssemblyName(nativeObject)
				{
				};
			
				~AssemblyName()
				{
				};
			

				AssemblyName & operator=(AssemblyName &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::String  ToString() override;
				std::vector<mscorlib::System::Byte*>  GetPublicKey();
				std::vector<mscorlib::System::Byte*>  GetPublicKeyToken();
				static mscorlib::System::Boolean  ReferenceMatchesDefinition(mscorlib::System::Reflection::AssemblyName reference, mscorlib::System::Reflection::AssemblyName definition);
				void  SetPublicKey(std::vector<mscorlib::System::Byte*> publicKey);
				void  SetPublicKeyToken(std::vector<mscorlib::System::Byte*> publicKeyToken);
				virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
				virtual mscorlib::System::Object  Clone();
				virtual void  OnDeserialization(mscorlib::System::Object sender);
				static mscorlib::System::Reflection::AssemblyName  GetAssemblyName(mscorlib::System::String assemblyFile);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_ProcessorArchitecture, put=set_ProcessorArchitecture)) mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__  ProcessorArchitecture;
				__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_CodeBase, put=set_CodeBase)) mscorlib::System::String  CodeBase;
				__declspec(property(get=get_EscapedCodeBase)) mscorlib::System::String  EscapedCodeBase;
				__declspec(property(get=get_CultureInfo, put=set_CultureInfo)) mscorlib::System::Globalization::CultureInfo  CultureInfo;
				__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__  Flags;
				__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
				__declspec(property(get=get_HashAlgorithm, put=set_HashAlgorithm)) mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  HashAlgorithm;
				__declspec(property(get=get_KeyPair, put=set_KeyPair)) mscorlib::System::Reflection::StrongNameKeyPair  KeyPair;
				__declspec(property(get=get_Version, put=set_Version)) mscorlib::System::Version  Version;
				__declspec(property(get=get_VersionCompatibility, put=set_VersionCompatibility)) mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__  VersionCompatibility;
				__declspec(property(get=get_CultureName)) mscorlib::System::String  CultureName;
				__declspec(property(get=get_ContentType, put=set_ContentType)) mscorlib::System::Reflection::AssemblyContentType::__ENUM__  ContentType;

				//Get Set Properties Methods
				//	Get/Set:ProcessorArchitecture
				mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__  get_ProcessorArchitecture() const;
				void set_ProcessorArchitecture(mscorlib::System::Reflection::ProcessorArchitecture::__ENUM__  value);

				//	Get/Set:Name
				mscorlib::System::String  get_Name() const;
				void set_Name(mscorlib::System::String  value);

				//	Get/Set:CodeBase
				mscorlib::System::String  get_CodeBase() const;
				void set_CodeBase(mscorlib::System::String  value);

				//	Get:EscapedCodeBase
				mscorlib::System::String  get_EscapedCodeBase() const;

				//	Get/Set:CultureInfo
				mscorlib::System::Globalization::CultureInfo  get_CultureInfo() const;
				void set_CultureInfo(mscorlib::System::Globalization::CultureInfo  value);

				//	Get/Set:Flags
				mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__  get_Flags() const;
				void set_Flags(mscorlib::System::Reflection::AssemblyNameFlags::__ENUM__  value);

				//	Get:FullName
				mscorlib::System::String  get_FullName() const;

				//	Get/Set:HashAlgorithm
				mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  get_HashAlgorithm() const;
				void set_HashAlgorithm(mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__  value);

				//	Get/Set:KeyPair
				mscorlib::System::Reflection::StrongNameKeyPair  get_KeyPair() const;
				void set_KeyPair(mscorlib::System::Reflection::StrongNameKeyPair  value);

				//	Get/Set:Version
				mscorlib::System::Version  get_Version() const;
				void set_Version(mscorlib::System::Version  value);

				//	Get/Set:VersionCompatibility
				mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__  get_VersionCompatibility() const;
				void set_VersionCompatibility(mscorlib::System::Configuration::Assemblies::AssemblyVersionCompatibility::__ENUM__  value);

				//	Get:CultureName
				mscorlib::System::String  get_CultureName() const;

				//	Get/Set:ContentType
				mscorlib::System::Reflection::AssemblyContentType::__ENUM__  get_ContentType() const;
				void set_ContentType(mscorlib::System::Reflection::AssemblyContentType::__ENUM__  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
