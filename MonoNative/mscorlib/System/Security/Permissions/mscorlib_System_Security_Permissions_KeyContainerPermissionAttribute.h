#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionFlags.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace Permissions
			{

				class KeyContainerPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					KeyContainerPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						__parameters__[0] = reinterpret_cast<void*>(action);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					KeyContainerPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~KeyContainerPermissionAttribute()
					{
					};
				

					KeyContainerPermissionAttribute & operator=(KeyContainerPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  Flags;
					__declspec(property(get=get_KeyContainerName, put=set_KeyContainerName)) mscorlib::System::String  KeyContainerName;
					__declspec(property(get=get_KeySpec, put=set_KeySpec)) mscorlib::System::Int32  KeySpec;
					__declspec(property(get=get_KeyStore, put=set_KeyStore)) mscorlib::System::String  KeyStore;
					__declspec(property(get=get_ProviderName, put=set_ProviderName)) mscorlib::System::String  ProviderName;
					__declspec(property(get=get_ProviderType, put=set_ProviderType)) mscorlib::System::Int32  ProviderType;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:Flags
					mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  get_Flags() const;
					void set_Flags(mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  value);

					//	Get/Set:KeyContainerName
					mscorlib::System::String  get_KeyContainerName() const;
					void set_KeyContainerName(mscorlib::System::String  value);

					//	Get/Set:KeySpec
					mscorlib::System::Int32  get_KeySpec() const;
					void set_KeySpec(mscorlib::System::Int32  value);

					//	Get/Set:KeyStore
					mscorlib::System::String  get_KeyStore() const;
					void set_KeyStore(mscorlib::System::String  value);

					//	Get/Set:ProviderName
					mscorlib::System::String  get_ProviderName() const;
					void set_ProviderName(mscorlib::System::String  value);

					//	Get/Set:ProviderType
					mscorlib::System::Int32  get_ProviderType() const;
					void set_ProviderType(mscorlib::System::Int32  value);

					//	Get/Set:Unrestricted
					mscorlib::System::Boolean  get_Unrestricted() const;
					void set_Unrestricted(mscorlib::System::Boolean  value);

					//	Get/Set:Action
					mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  get_Action() const;
					void set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
