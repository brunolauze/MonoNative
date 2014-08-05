#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CSPKEYCONTAINERINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CSPKEYCONTAINERINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspParameters.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_KeyNumber.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class CryptoKeySecurity;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				class CspKeyContainerInfo
					: public mscorlib::System::Object
				{
				public:
					CspKeyContainerInfo(mscorlib::System::Security::Cryptography::CspParameters parameters)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspKeyContainerInfo"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameters__[0] = (MonoObject*)parameters;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 1, __parameter_types__, __parameters__);
					};
				
					CspKeyContainerInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CspKeyContainerInfo(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CspKeyContainerInfo()
					{
					};
				

					CspKeyContainerInfo & operator=(CspKeyContainerInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Accessible)) mscorlib::System::Boolean  Accessible;
					__declspec(property(get=get_CryptoKeySecurity)) mscorlib::System::Security::AccessControl::CryptoKeySecurity  CryptoKeySecurity;
					__declspec(property(get=get_Exportable)) mscorlib::System::Boolean  Exportable;
					__declspec(property(get=get_HardwareDevice)) mscorlib::System::Boolean  HardwareDevice;
					__declspec(property(get=get_KeyContainerName)) mscorlib::System::String  KeyContainerName;
					__declspec(property(get=get_KeyNumber)) mscorlib::System::Security::Cryptography::KeyNumber::__ENUM__  KeyNumber;
					__declspec(property(get=get_MachineKeyStore)) mscorlib::System::Boolean  MachineKeyStore;
					__declspec(property(get=get_Protected)) mscorlib::System::Boolean  Protected;
					__declspec(property(get=get_ProviderName)) mscorlib::System::String  ProviderName;
					__declspec(property(get=get_ProviderType)) mscorlib::System::Int32  ProviderType;
					__declspec(property(get=get_RandomlyGenerated)) mscorlib::System::Boolean  RandomlyGenerated;
					__declspec(property(get=get_Removable)) mscorlib::System::Boolean  Removable;
					__declspec(property(get=get_UniqueKeyContainerName)) mscorlib::System::String  UniqueKeyContainerName;

					//Get Set Properties Methods
					//	Get:Accessible
					mscorlib::System::Boolean  get_Accessible() const;

					//	Get:CryptoKeySecurity
					mscorlib::System::Security::AccessControl::CryptoKeySecurity  get_CryptoKeySecurity() const;

					//	Get:Exportable
					mscorlib::System::Boolean  get_Exportable() const;

					//	Get:HardwareDevice
					mscorlib::System::Boolean  get_HardwareDevice() const;

					//	Get:KeyContainerName
					mscorlib::System::String  get_KeyContainerName() const;

					//	Get:KeyNumber
					mscorlib::System::Security::Cryptography::KeyNumber::__ENUM__  get_KeyNumber() const;

					//	Get:MachineKeyStore
					mscorlib::System::Boolean  get_MachineKeyStore() const;

					//	Get:Protected
					mscorlib::System::Boolean  get_Protected() const;

					//	Get:ProviderName
					mscorlib::System::String  get_ProviderName() const;

					//	Get:ProviderType
					mscorlib::System::Int32  get_ProviderType() const;

					//	Get:RandomlyGenerated
					mscorlib::System::Boolean  get_RandomlyGenerated() const;

					//	Get:Removable
					mscorlib::System::Boolean  get_Removable() const;

					//	Get:UniqueKeyContainerName
					mscorlib::System::String  get_UniqueKeyContainerName() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
