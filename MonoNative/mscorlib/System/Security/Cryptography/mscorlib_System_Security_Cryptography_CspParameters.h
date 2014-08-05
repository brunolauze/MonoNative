#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CRYPTOGRAPHY_CSPPARAMETERS_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeySecurity.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecureString.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspProviderFlags.h>

namespace mscorlib
{
	namespace System
	{

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

				class CspParameters
					: public mscorlib::System::Object
				{
				public:
					CspParameters()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspParameters"))
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspParameters");
					};
				
					CspParameters(mscorlib::System::Int32 dwTypeIn)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspParameters"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = &dwTypeIn;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspParameters", 1, __parameter_types__, __parameters__);
					};
				
					CspParameters(mscorlib::System::Int32 dwTypeIn, mscorlib::System::String strProviderNameIn)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspParameters"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = &dwTypeIn;
						__parameters__[1] = (MonoObject*)strProviderNameIn;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspParameters", 2, __parameter_types__, __parameters__);
					};
				
					CspParameters(mscorlib::System::Int32 dwTypeIn, mscorlib::System::String strProviderNameIn, mscorlib::System::String strContainerNameIn)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspParameters"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = &dwTypeIn;
						__parameters__[1] = (MonoObject*)strProviderNameIn;
						__parameters__[2] = (MonoObject*)strContainerNameIn;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspParameters", 3, __parameter_types__, __parameters__);
					};
				
					CspParameters(mscorlib::System::Int32 providerType, mscorlib::System::String providerName, mscorlib::System::String keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity cryptoKeySecurity, mscorlib::System::IntPtr parentWindowHandle)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspParameters"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameters__[0] = &providerType;
						__parameters__[1] = (MonoObject*)providerName;
						__parameters__[2] = (MonoObject*)keyContainerName;
						__parameters__[3] = (MonoObject*)cryptoKeySecurity;
						__parameters__[4] = (MonoObject*)parentWindowHandle;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspParameters", 5, __parameter_types__, __parameters__);
					};
				
					CspParameters(mscorlib::System::Int32 providerType, mscorlib::System::String providerName, mscorlib::System::String keyContainerName, mscorlib::System::Security::AccessControl::CryptoKeySecurity cryptoKeySecurity, mscorlib::System::Security::SecureString keyPassword)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Cryptography.CspParameters"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "CryptoKeySecurity");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security", "SecureString");
						__parameters__[0] = &providerType;
						__parameters__[1] = (MonoObject*)providerName;
						__parameters__[2] = (MonoObject*)keyContainerName;
						__parameters__[3] = (MonoObject*)cryptoKeySecurity;
						__parameters__[4] = (MonoObject*)keyPassword;
						__native_object__ = Global::New("mscorlib", "System.Security.Cryptography", "CspParameters", 5, __parameter_types__, __parameters__);
					};
				
					CspParameters(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					CspParameters(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~CspParameters()
					{
					};
				

					CspParameters & operator=(CspParameters &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__  Flags;
					__declspec(property(get=get_CryptoKeySecurity, put=set_CryptoKeySecurity)) mscorlib::System::Security::AccessControl::CryptoKeySecurity  CryptoKeySecurity;
					__declspec(property(get=get_KeyPassword, put=set_KeyPassword)) mscorlib::System::Security::SecureString  KeyPassword;
					__declspec(property(get=get_ParentWindowHandle, put=set_ParentWindowHandle)) mscorlib::System::IntPtr  ParentWindowHandle;

					//Public Fields
					__declspec(property(get=get_KeyContainerName, put=set_KeyContainerName)) mscorlib::System::String  KeyContainerName;
					__declspec(property(get=get_KeyNumber, put=set_KeyNumber)) mscorlib::System::Int32  KeyNumber;
					__declspec(property(get=get_ProviderName, put=set_ProviderName)) mscorlib::System::String  ProviderName;
					__declspec(property(get=get_ProviderType, put=set_ProviderType)) mscorlib::System::Int32  ProviderType;

					//Get Set Properties Methods
					//	Get/Set:Flags
					mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__  get_Flags() const;
					void set_Flags(mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__  value);

					//	Get/Set:CryptoKeySecurity
					mscorlib::System::Security::AccessControl::CryptoKeySecurity  get_CryptoKeySecurity() const;
					void set_CryptoKeySecurity(mscorlib::System::Security::AccessControl::CryptoKeySecurity  value);

					//	Get/Set:KeyPassword
					mscorlib::System::Security::SecureString  get_KeyPassword() const;
					void set_KeyPassword(mscorlib::System::Security::SecureString  value);

					//	Get/Set:ParentWindowHandle
					mscorlib::System::IntPtr  get_ParentWindowHandle() const;
					void set_ParentWindowHandle(mscorlib::System::IntPtr  value);

					//	Get/Set:KeyContainerName
					mscorlib::System::String  get_KeyContainerName() const;
					void set_KeyContainerName(mscorlib::System::String  value);

					//	Get/Set:KeyNumber
					mscorlib::System::Int32  get_KeyNumber() const;
					void set_KeyNumber(mscorlib::System::Int32  value);

					//	Get/Set:ProviderName
					mscorlib::System::String  get_ProviderName() const;
					void set_ProviderName(mscorlib::System::String  value);

					//	Get/Set:ProviderType
					mscorlib::System::Int32  get_ProviderType() const;
					void set_ProviderType(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
