#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYKEY_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYKEY_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryView.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryValueKind.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryValueOptions.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryKeyPermissionCheck.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryOptions.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RegistryRights.h>
#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryHive.h>

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
	namespace Microsoft
	{
		namespace Win32
		{
			namespace SafeHandles
			{

				class SafeRegistryHandle;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class RegistrySecurity;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			class RegistryKey
				: public mscorlib::System::MarshalByRefObject
				, public virtual mscorlib::System::IDisposable
			{
			public:
				RegistryKey(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
				, mscorlib::System::IDisposable(NULL)
				{
				};
			
				RegistryKey(MonoObject *nativeObject)
				: mscorlib::System::MarshalByRefObject(nativeObject)
				, mscorlib::System::IDisposable(nativeObject)
				{
				};
			
				~RegistryKey()
				{
				};
			

				RegistryKey & operator=(RegistryKey &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual void  Dispose();
				void  Flush();
				void  Close();
				void  SetValue(mscorlib::System::String name, mscorlib::System::Object value);
				void  SetValue(mscorlib::System::String name, mscorlib::System::Object value, mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ valueKind);
				mscorlib::Microsoft::Win32::RegistryKey  OpenSubKey(mscorlib::System::String name);
				mscorlib::Microsoft::Win32::RegistryKey  OpenSubKey(mscorlib::System::String name, mscorlib::System::Boolean writable);
				mscorlib::System::Object  GetValue(mscorlib::System::String name);
				mscorlib::System::Object  GetValue(mscorlib::System::String name, mscorlib::System::Object defaultValue);
				mscorlib::System::Object  GetValue(mscorlib::System::String name, mscorlib::System::Object defaultValue, mscorlib::Microsoft::Win32::RegistryValueOptions::__ENUM__ options);
				mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__  GetValueKind(mscorlib::System::String name);
				mscorlib::Microsoft::Win32::RegistryKey  CreateSubKey(mscorlib::System::String subkey);
				mscorlib::Microsoft::Win32::RegistryKey  CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck);
				mscorlib::Microsoft::Win32::RegistryKey  CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::System::Security::AccessControl::RegistrySecurity registrySecurity);
				mscorlib::Microsoft::Win32::RegistryKey  CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::Microsoft::Win32::RegistryOptions::__ENUM__ options);
				mscorlib::Microsoft::Win32::RegistryKey  CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::Microsoft::Win32::RegistryOptions::__ENUM__ registryOptions, mscorlib::System::Security::AccessControl::RegistrySecurity registrySecurity);
				void  DeleteSubKey(mscorlib::System::String subkey);
				void  DeleteSubKey(mscorlib::System::String subkey, mscorlib::System::Boolean throwOnMissingSubKey);
				void  DeleteSubKeyTree(mscorlib::System::String subkey);
				void  DeleteSubKeyTree(mscorlib::System::String subkey, mscorlib::System::Boolean throwOnMissingSubKey);
				void  DeleteValue(mscorlib::System::String name);
				void  DeleteValue(mscorlib::System::String name, mscorlib::System::Boolean throwOnMissingValue);
				mscorlib::System::Security::AccessControl::RegistrySecurity  GetAccessControl();
				mscorlib::System::Security::AccessControl::RegistrySecurity  GetAccessControl(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				std::vector<mscorlib::System::String*>  GetSubKeyNames();
				std::vector<mscorlib::System::String*>  GetValueNames();
				static mscorlib::Microsoft::Win32::RegistryKey  FromHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle handle);
				static mscorlib::Microsoft::Win32::RegistryKey  FromHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle handle, mscorlib::Microsoft::Win32::RegistryView::__ENUM__ view);
				static mscorlib::Microsoft::Win32::RegistryKey  OpenRemoteBaseKey(mscorlib::Microsoft::Win32::RegistryHive::__ENUM__ hKey, mscorlib::System::String machineName);
				static mscorlib::Microsoft::Win32::RegistryKey  OpenRemoteBaseKey(mscorlib::Microsoft::Win32::RegistryHive::__ENUM__ hKey, mscorlib::System::String machineName, mscorlib::Microsoft::Win32::RegistryView::__ENUM__ view);
				static mscorlib::Microsoft::Win32::RegistryKey  OpenBaseKey(mscorlib::Microsoft::Win32::RegistryHive::__ENUM__ hKey, mscorlib::Microsoft::Win32::RegistryView::__ENUM__ view);
				mscorlib::Microsoft::Win32::RegistryKey  OpenSubKey(mscorlib::System::String name, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck);
				mscorlib::Microsoft::Win32::RegistryKey  OpenSubKey(mscorlib::System::String name, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__ rights);
				void  SetAccessControl(mscorlib::System::Security::AccessControl::RegistrySecurity registrySecurity);
				virtual mscorlib::System::String  ToString() override;
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_SubKeyCount)) mscorlib::System::Int32  SubKeyCount;
				__declspec(property(get=get_ValueCount)) mscorlib::System::Int32  ValueCount;
				__declspec(property(get=get_Handle)) mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle  Handle;
				__declspec(property(get=get_View)) mscorlib::Microsoft::Win32::RegistryView::__ENUM__  View;

				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:SubKeyCount
				mscorlib::System::Int32  get_SubKeyCount() const;

				//	Get:ValueCount
				mscorlib::System::Int32  get_ValueCount() const;

				//	Get:Handle
				mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle  get_Handle() const;

				//	Get:View
				mscorlib::Microsoft::Win32::RegistryView::__ENUM__  get_View() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
