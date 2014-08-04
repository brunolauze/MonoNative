#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SITEIDENTITYPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SITEIDENTITYPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/mscorlib_System_String.h>
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

				class SiteIdentityPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					SiteIdentityPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.SiteIdentityPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 1, __parameter_types__, __parameters__);
					};
				
					SiteIdentityPermission(mscorlib::System::String site)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.SiteIdentityPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)site;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 1, __parameter_types__, __parameters__);
					};
				
					SiteIdentityPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					SiteIdentityPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~SiteIdentityPermission()
					{
					};
				

					SiteIdentityPermission & operator=(SiteIdentityPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Site, put=set_Site)) mscorlib::System::String  Site;

					//Get Set Properties Methods
					//	Get/Set:Site
					mscorlib::System::String  get_Site();
					void set_Site(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
