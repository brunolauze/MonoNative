#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_KEYCONTAINERPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionFlags.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_KeyContainerPermissionAccessEntry.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IUnrestrictedPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IStackWalk.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class KeyContainerPermissionAccessEntryCollection;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityElement;
			

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
			namespace Permissions
			{

				class KeyContainerPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					KeyContainerPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermission"))
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						mscorlib::System::Int32 __param_state__ = state;
						__parameters__[0] = &__param_state__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermission", 1, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermission(mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__ flags)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermission"))
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "KeyContainerPermissionFlags");
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[0] = &__param_flags__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermission", 1, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermission(mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__ flags, std::vector<mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry*> accessList)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.KeyContainerPermission"))
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "KeyContainerPermissionFlags");
						__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry")), 1));
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[0] = &__param_flags__;
						__parameters__[1] = Global::FromArray<mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntry*>(accessList, "mscorlib", "System.Security.Permissions", "KeyContainerPermissionAccessEntry");
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "KeyContainerPermission", 2, __parameter_types__, __parameters__);
					};
				
					KeyContainerPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					KeyContainerPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~KeyContainerPermission()
					{
					};
				

					KeyContainerPermission & operator=(KeyContainerPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(KeyContainerPermission &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement securityElement) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsUnrestricted();
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AccessEntries)) mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntryCollection  AccessEntries;
					__declspec(property(get=get_Flags)) mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  Flags;

					//Get Set Properties Methods
					//	Get:AccessEntries
					mscorlib::System::Security::Permissions::KeyContainerPermissionAccessEntryCollection  get_AccessEntries() const;

					//	Get:Flags
					mscorlib::System::Security::Permissions::KeyContainerPermissionFlags::__ENUM__  get_Flags() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
