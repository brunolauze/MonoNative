#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEIOPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEIOPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_FileIOPermissionAccess.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlActions.h>
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

				class FileIOPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					FileIOPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.FileIOPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "FileIOPermission", 1, __parameter_types__, __parameters__);
					};
				
					FileIOPermission(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::String path)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.FileIOPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "FileIOPermissionAccess");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = reinterpret_cast<void*>(access);
						__parameters__[1] = (MonoObject*)path;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "FileIOPermission", 2, __parameter_types__, __parameters__);
					};
				
					FileIOPermission(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, std::vector<mscorlib::System::String*> pathList)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.FileIOPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "FileIOPermissionAccess");
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "String"))->eklass);
						__parameters__[0] = reinterpret_cast<void*>(access);
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(pathList, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "String");
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "FileIOPermission", 2, __parameter_types__, __parameters__);
					};
				
					FileIOPermission(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, mscorlib::System::String path)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.FileIOPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "FileIOPermissionAccess");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlActions");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = reinterpret_cast<void*>(access);
						__parameters__[1] = reinterpret_cast<void*>(control);
						__parameters__[2] = (MonoObject*)path;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "FileIOPermission", 3, __parameter_types__, __parameters__);
					};
				
					FileIOPermission(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, std::vector<mscorlib::System::String*> pathList)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.FileIOPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "FileIOPermissionAccess");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlActions");
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "String"))->eklass);
						__parameters__[0] = reinterpret_cast<void*>(access);
						__parameters__[1] = reinterpret_cast<void*>(control);
						__parameters__[2] = Global::FromArray<mscorlib::System::String*>(pathList, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "String");
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "FileIOPermission", 3, __parameter_types__, __parameters__);
					};
				
					FileIOPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					FileIOPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~FileIOPermission()
					{
					};
				

					FileIOPermission & operator=(FileIOPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  AddPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::String path);
					void  AddPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, std::vector<mscorlib::System::String*> pathList);
					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
					std::vector<mscorlib::System::String*>  GetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access);
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsUnrestricted();
					void  SetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::String path);
					void  SetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, std::vector<mscorlib::System::String*> pathList);
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission other) override;
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object obj) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AllFiles, put=set_AllFiles)) mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  AllFiles;
					__declspec(property(get=get_AllLocalFiles, put=set_AllLocalFiles)) mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  AllLocalFiles;

					//Get Set Properties Methods
					//	Get/Set:AllFiles
					mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  get_AllFiles();
					void set_AllFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value);

					//	Get/Set:AllLocalFiles
					mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  get_AllLocalFiles();
					void set_AllLocalFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
