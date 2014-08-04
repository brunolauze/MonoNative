#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_UIPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_UIPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_CodeAccessPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_PermissionState.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_UIPermissionClipboard.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_UIPermissionWindow.h>
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

				class UIPermission
					: public mscorlib::System::Security::CodeAccessPermission
					, public virtual mscorlib::System::Security::ISecurityEncodable
					, public virtual mscorlib::System::Security::IPermission
					, public virtual mscorlib::System::Security::Permissions::IUnrestrictedPermission
					, public virtual mscorlib::System::Security::IStackWalk
				{
				public:
					UIPermission(mscorlib::System::Security::Permissions::PermissionState::__ENUM__ state)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.UIPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "PermissionState");
						__parameters__[0] = reinterpret_cast<void*>(state);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "UIPermission", 1, __parameter_types__, __parameters__);
					};
				
					UIPermission(mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__ clipboardFlag)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.UIPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "UIPermissionClipboard");
						__parameters__[0] = reinterpret_cast<void*>(clipboardFlag);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "UIPermission", 1, __parameter_types__, __parameters__);
					};
				
					UIPermission(mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__ windowFlag)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.UIPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "UIPermissionWindow");
						__parameters__[0] = reinterpret_cast<void*>(windowFlag);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "UIPermission", 1, __parameter_types__, __parameters__);
					};
				
					UIPermission(mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__ windowFlag, mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__ clipboardFlag)
					: mscorlib::System::Security::CodeAccessPermission(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.UIPermission"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "UIPermissionWindow");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Permissions", "UIPermissionClipboard");
						__parameters__[0] = reinterpret_cast<void*>(windowFlag);
						__parameters__[1] = reinterpret_cast<void*>(clipboardFlag);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "UIPermission", 2, __parameter_types__, __parameters__);
					};
				
					UIPermission(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::CodeAccessPermission(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					, mscorlib::System::Security::IPermission(NULL)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(NULL)
					, mscorlib::System::Security::IStackWalk(NULL)
					{
					};
				
					UIPermission(MonoObject *nativeObject)
					: mscorlib::System::Security::CodeAccessPermission(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					, mscorlib::System::Security::IPermission(nativeObject)
					, mscorlib::System::Security::Permissions::IUnrestrictedPermission(nativeObject)
					, mscorlib::System::Security::IStackWalk(nativeObject)
					{
					};
				
					~UIPermission()
					{
					};
				

					UIPermission & operator=(UIPermission &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  Copy() override;
					virtual void  FromXml(mscorlib::System::Security::SecurityElement esd) override;
					virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target) override;
					virtual mscorlib::System::Boolean  IsUnrestricted();
					virtual mscorlib::System::Security::SecurityElement  ToXml() override;
					virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Clipboard, put=set_Clipboard)) mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  Clipboard;
					__declspec(property(get=get_Window, put=set_Window)) mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  Window;

					//Get Set Properties Methods
					//	Get/Set:Clipboard
					mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  get_Clipboard();
					void set_Clipboard(mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  value);

					//	Get/Set:Window
					mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  get_Window();
					void set_Window(mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
