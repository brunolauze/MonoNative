#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_ReflectionPermissionFlag.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IUnrestrictedPermission.h>
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

				class ReflectionPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					ReflectionPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.ReflectionPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "ReflectionPermission", 1, __parameter_types__, __parameters__);
					};
				
					ReflectionPermission(mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__ flag)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.ReflectionPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "ReflectionPermissionFlag");
						__parameters__[0] = reinterpret_cast<void*>(flag);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "ReflectionPermission", 1, __parameter_types__, __parameters__);
					};
				
					ReflectionPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					ReflectionPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~ReflectionPermission()
					{
					};
				

					ReflectionPermission & operator=(ReflectionPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsUnrestricted();
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission other) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  Flags;

					//Get Set Properties Methods
					//	Get/Set:Flags
					mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  get_Flags();
					void set_Flags(mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
