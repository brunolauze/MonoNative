#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONACCESSENTRY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONACCESSENTRY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspParameters.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionFlags.h>
#include <mscorlib/System/mscorlib_System_String.h>

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
			namespace Permissions
			{

				class KeyContainerPermissionAccessEntry
					: public mscorlib::System::Object
				{
				public:
					KeyContainerPermissionAccessEntry(mscorlib::System::Security::Cryptography::CspParameters parameters, mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__ flags)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermissionAccessEntry"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Cryptography", "CspParameters");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Permissions", "KeyContainerPermissionFlags");
						__parameters__[0] = (MonoObject*)parameters;
						__parameters__[1] = reinterpret_cast<void*>(flags);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 2, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermissionAccessEntry(mscorlib::System::String keyContainerName, mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__ flags)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermissionAccessEntry"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Permissions", "KeyContainerPermissionFlags");
						__parameters__[0] = (MonoObject*)keyContainerName;
						__parameters__[1] = reinterpret_cast<void*>(flags);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 2, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermissionAccessEntry(mscorlib::System::String keyStore, mscorlib::System::String providerName, mscorlib::System::Int32 providerType, mscorlib::System::String keyContainerName, mscorlib::System::Int32 keySpec, mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__ flags)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermissionAccessEntry"))
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[5] = Global::GetType("mscorlib", "System.Security.Permissions", "KeyContainerPermissionFlags");
						__parameters__[0] = (MonoObject*)keyStore;
						__parameters__[1] = (MonoObject*)providerName;
						__parameters__[2] = &providerType;
						__parameters__[3] = (MonoObject*)keyContainerName;
						__parameters__[4] = &keySpec;
						__parameters__[5] = reinterpret_cast<void*>(flags);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry", 6, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermissionAccessEntry(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					KeyContainerPermissionAccessEntry(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~KeyContainerPermissionAccessEntry()
					{
					};
				

					KeyContainerPermissionAccessEntry & operator=(KeyContainerPermissionAccessEntry &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  Flags;
					__declspec(property(get=get_KeyContainerName, put=set_KeyContainerName)) mscorlib::System::String  KeyContainerName;
					__declspec(property(get=get_KeySpec, put=set_KeySpec)) mscorlib::System::Int32  KeySpec;
					__declspec(property(get=get_KeyStore, put=set_KeyStore)) mscorlib::System::String  KeyStore;
					__declspec(property(get=get_ProviderName, put=set_ProviderName)) mscorlib::System::String  ProviderName;
					__declspec(property(get=get_ProviderType, put=set_ProviderType)) mscorlib::System::Int32  ProviderType;

					//Get Set Properties Methods
					//	Get/Set:Flags
					mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  get_Flags();
					void set_Flags(mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  value);

					//	Get/Set:KeyContainerName
					mscorlib::System::String  get_KeyContainerName();
					void set_KeyContainerName(mscorlib::System::String  value);

					//	Get/Set:KeySpec
					mscorlib::System::Int32  get_KeySpec();
					void set_KeySpec(mscorlib::System::Int32  value);

					//	Get/Set:KeyStore
					mscorlib::System::String  get_KeyStore();
					void set_KeyStore(mscorlib::System::String  value);

					//	Get/Set:ProviderName
					mscorlib::System::String  get_ProviderName();
					void set_ProviderName(mscorlib::System::String  value);

					//	Get/Set:ProviderType
					mscorlib::System::Int32  get_ProviderType();
					void set_ProviderType(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
