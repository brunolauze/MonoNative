#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ZONEIDENTITYPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ZONEIDENTITYPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityZone.h>
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

				class ZoneIdentityPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					ZoneIdentityPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.ZoneIdentityPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						mscorlib::System::Int32 __param_state__ = state;
						__parameters__[0] = &__param_state__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "ZoneIdentityPermission", 1, __parameter_types__, __parameters__);
					};
				
					ZoneIdentityPermission(mscorlib::System::Security::SecurityZone::__ENUM__ zone)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.ZoneIdentityPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "SecurityZone");
						mscorlib::System::Int32 __param_zone__ = zone;
						__parameters__[0] = &__param_zone__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "ZoneIdentityPermission", 1, __parameter_types__, __parameters__);
					};
				
					ZoneIdentityPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					ZoneIdentityPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~ZoneIdentityPermission()
					{
					};
				

					ZoneIdentityPermission & operator=(ZoneIdentityPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ZoneIdentityPermission &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_SecurityZone, put=set_SecurityZone)) mscorlib::System::Security::SecurityZone::__ENUM__  SecurityZone;

					//Get Set Properties Methods
					//	Get/Set:SecurityZone
					mscorlib::System::Security::SecurityZone::__ENUM__  get_SecurityZone() const;
					void set_SecurityZone(mscorlib::System::Security::SecurityZone::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
