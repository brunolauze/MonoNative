#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
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

				class IsolatedStoragePermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					IsolatedStoragePermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					IsolatedStoragePermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~IsolatedStoragePermission()
					{
					};
				

					IsolatedStoragePermission & operator=(IsolatedStoragePermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  IsUnrestricted();
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
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
