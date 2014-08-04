#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEIOPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_FILEIOPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_FileIOPermissionAccess.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class FileIOPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					FileIOPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.FileIOPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						__parameters__[0] = reinterpret_cast<void*>(action);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					FileIOPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					FileIOPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~FileIOPermissionAttribute()
					{
					};
				

					FileIOPermissionAttribute & operator=(FileIOPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_All, put=set_All)) mscorlib::System::String  All;
					__declspec(property(get=get_Append, put=set_Append)) mscorlib::System::String  Append;
					__declspec(property(get=get_PathDiscovery, put=set_PathDiscovery)) mscorlib::System::String  PathDiscovery;
					__declspec(property(get=get_Read, put=set_Read)) mscorlib::System::String  Read;
					__declspec(property(get=get_Write, put=set_Write)) mscorlib::System::String  Write;
					__declspec(property(get=get_AllFiles, put=set_AllFiles)) mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  AllFiles;
					__declspec(property(get=get_AllLocalFiles, put=set_AllLocalFiles)) mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  AllLocalFiles;
					__declspec(property(get=get_ChangeAccessControl, put=set_ChangeAccessControl)) mscorlib::System::String  ChangeAccessControl;
					__declspec(property(get=get_ViewAccessControl, put=set_ViewAccessControl)) mscorlib::System::String  ViewAccessControl;
					__declspec(property(get=get_ViewAndModify, put=set_ViewAndModify)) mscorlib::System::String  ViewAndModify;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:All
					mscorlib::System::String  get_All();
					void set_All(mscorlib::System::String  value);

					//	Get/Set:Append
					mscorlib::System::String  get_Append();
					void set_Append(mscorlib::System::String  value);

					//	Get/Set:PathDiscovery
					mscorlib::System::String  get_PathDiscovery();
					void set_PathDiscovery(mscorlib::System::String  value);

					//	Get/Set:Read
					mscorlib::System::String  get_Read();
					void set_Read(mscorlib::System::String  value);

					//	Get/Set:Write
					mscorlib::System::String  get_Write();
					void set_Write(mscorlib::System::String  value);

					//	Get/Set:AllFiles
					mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  get_AllFiles();
					void set_AllFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value);

					//	Get/Set:AllLocalFiles
					mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  get_AllLocalFiles();
					void set_AllLocalFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value);

					//	Get/Set:ChangeAccessControl
					mscorlib::System::String  get_ChangeAccessControl();
					void set_ChangeAccessControl(mscorlib::System::String  value);

					//	Get/Set:ViewAccessControl
					mscorlib::System::String  get_ViewAccessControl();
					void set_ViewAccessControl(mscorlib::System::String  value);

					//	Get/Set:ViewAndModify
					mscorlib::System::String  get_ViewAndModify();
					void set_ViewAndModify(mscorlib::System::String  value);

					//	Get/Set:Unrestricted
					mscorlib::System::Boolean  get_Unrestricted();
					void set_Unrestricted(mscorlib::System::Boolean  value);

					//	Get/Set:Action
					mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  get_Action();
					void set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
