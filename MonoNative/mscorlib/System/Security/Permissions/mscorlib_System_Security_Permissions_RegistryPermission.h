#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REGISTRYPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REGISTRYPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_RegistryPermissionAccess.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlActions.h>
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

			class SecurityElement;
			

		}
	}
}
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

				class RegistryPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					RegistryPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.RegistryPermission"))
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
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "RegistryPermission", 1, __parameter_types__, __parameters__);
					};
				
					RegistryPermission(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::String pathList)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.RegistryPermission"))
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "RegistryPermissionAccess");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = (MonoObject*)pathList;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "RegistryPermission", 2, __parameter_types__, __parameters__);
					};
				
					RegistryPermission(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, mscorlib::System::String pathList)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.RegistryPermission"))
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "RegistryPermissionAccess");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlActions");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						mscorlib::System::Int32 __param_control__ = control;
						__parameters__[1] = &__param_control__;
						__parameters__[2] = (MonoObject*)pathList;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "RegistryPermission", 3, __parameter_types__, __parameters__);
					};
				
					RegistryPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					RegistryPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~RegistryPermission()
					{
					};
				

					RegistryPermission & operator=(RegistryPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(RegistryPermission &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::String pathList);
					void  AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, const char *pathList);
					void  AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, mscorlib::System::String pathList);
					void  AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, const char *pathList);
					mscorlib::System::String  GetPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access);
					void  SetPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::String pathList);
					void  SetPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, const char *pathList);
					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsUnrestricted();
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission other) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
