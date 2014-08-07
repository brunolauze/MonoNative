#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEFILEPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEFILEPERMISSION_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IsolatedStoragePermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IUnrestrictedPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IStackWalk.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IsolatedStorageContainment.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class IsolatedStorageFilePermission
					: public mscorlib::System::Security::Permissions::IsolatedStoragePermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					IsolatedStorageFilePermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::Permissions::IsolatedStoragePermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.IsolatedStorageFilePermission"))
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
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "IsolatedStorageFilePermission", 1, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFilePermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::IsolatedStoragePermission(nativeTypeInfo)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					IsolatedStorageFilePermission(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::IsolatedStoragePermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~IsolatedStorageFilePermission()
					{
					};
				

					IsolatedStorageFilePermission & operator=(IsolatedStorageFilePermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(IsolatedStorageFilePermission &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_UserQuota, put=set_UserQuota)) mscorlib::System::Int64  UserQuota;
					__declspec(property(get=get_UsageAllowed, put=set_UsageAllowed)) mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  UsageAllowed;

					//Get Set Properties Methods
					//	Get/Set:UserQuota
					mscorlib::System::Int64  get_UserQuota() const;
					void set_UserQuota(mscorlib::System::Int64  value);

					//	Get/Set:UsageAllowed
					mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  get_UsageAllowed() const;
					void set_UsageAllowed(mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
