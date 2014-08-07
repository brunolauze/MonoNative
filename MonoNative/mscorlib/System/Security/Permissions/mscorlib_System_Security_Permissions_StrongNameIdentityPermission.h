#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_STRONGNAMEIDENTITYPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_STRONGNAMEIDENTITYPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_StrongNamePublicKeyBlob.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Version.h>
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

				class StrongNameIdentityPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					StrongNameIdentityPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.StrongNameIdentityPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						mscorlib::System::Int32 __param_state__ = state;
						__parameters__[0] = &__param_state__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "StrongNameIdentityPermission", 1, __parameter_types__, __parameters__);
					};
				
					StrongNameIdentityPermission(mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob blob, mscorlib::System::String name, mscorlib::System::Version version)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.StrongNameIdentityPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "StrongNamePublicKeyBlob");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Version");
						__parameters__[0] = (MonoObject*)blob;
						__parameters__[1] = (MonoObject*)name;
						__parameters__[2] = (MonoObject*)version;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "StrongNameIdentityPermission", 3, __parameter_types__, __parameters__);
					};
				
					StrongNameIdentityPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					StrongNameIdentityPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~StrongNameIdentityPermission()
					{
					};
				

					StrongNameIdentityPermission & operator=(StrongNameIdentityPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(StrongNameIdentityPermission &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement e) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_PublicKey, put=set_PublicKey)) mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  PublicKey;
					__declspec(property(get=get_Version, put=set_Version)) mscorlib::System::Version  Version;

					//Get Set Properties Methods
					//	Get/Set:Name
					mscorlib::System::String  get_Name() const;
					void set_Name(mscorlib::System::String  value);

					//	Get/Set:PublicKey
					mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  get_PublicKey() const;
					void set_PublicKey(mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  value);

					//	Get/Set:Version
					mscorlib::System::Version  get_Version() const;
					void set_Version(mscorlib::System::Version  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
