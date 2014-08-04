#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_PRINCIPALPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_PRINCIPALPERMISSION_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IUnrestrictedPermission.h>

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

				class PrincipalPermission
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
				{
				public:
					PrincipalPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.PrincipalPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "PrincipalPermission", 1, __parameter_types__, __parameters__);
					};
				
					PrincipalPermission(mscorlib::System::String name, mscorlib::System::String role)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.PrincipalPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)role;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "PrincipalPermission", 2, __parameter_types__, __parameters__);
					};
				
					PrincipalPermission(mscorlib::System::String name, mscorlib::System::String role, mscorlib::System::Boolean isAuthenticated)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.PrincipalPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)name;
						__parameters__[1] = (MonoObject*)role;
						__parameters__[2] = reinterpret_cast<void*>(isAuthenticated);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "PrincipalPermission", 3, __parameter_types__, __parameters__);
					};
				
					PrincipalPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					{
					};
				
					PrincipalPermission(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					{
					};
				
					~PrincipalPermission()
					{
					};
				

					PrincipalPermission & operator=(PrincipalPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy();
					virtual void  Demand();
					virtual void  FromXml(mscorlib::System::Security::SecurityElement elem);
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target);
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target);
					virtual mscorlib::System::Boolean  IsUnrestricted();
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Security::SecurityElement  ToXml();
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission other);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
