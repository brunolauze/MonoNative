#include <mscorlib/Microsoft/Win32/mscorlib_Microsoft_Win32_RegistryKey.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/Microsoft/Win32/SafeHandles/mscorlib_Microsoft_Win32_SafeHandles_SafeRegistryHandle.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RegistrySecurity.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			//Public Methods
			void RegistryKey::Dispose()
			{
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
			}

			void RegistryKey::Flush()
			{
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "Flush", __native_object__, 0, NULL, NULL, NULL);
			}

			void RegistryKey::Close()
			{
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "Close", __native_object__, 0, NULL, NULL, NULL);
			}

			void RegistryKey::SetValue(mscorlib::System::String name, mscorlib::System::Object value)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "SetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void RegistryKey::SetValue(mscorlib::System::String name, mscorlib::System::Object value, mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ valueKind)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(value).name());
					__parameter_types__[2] = Global::GetType(typeid(valueKind).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)value;
					__parameters__[2] = reinterpret_cast<void*>(valueKind);
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "SetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenSubKey(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenSubKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenSubKey(mscorlib::System::String name, mscorlib::System::Boolean writable)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(writable).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(writable);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenSubKey", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::System::Object RegistryKey::GetValue(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object RegistryKey::GetValue(mscorlib::System::String name, mscorlib::System::Object defaultValue)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(defaultValue).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)defaultValue;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::System::Object RegistryKey::GetValue(mscorlib::System::String name, mscorlib::System::Object defaultValue, mscorlib::Microsoft::Win32::RegistryValueOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(defaultValue).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = (MonoObject*)defaultValue;
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetValue", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Object(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__ RegistryKey::GetValueKind(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetValueKind", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::Microsoft::Win32::RegistryValueKind::__ENUM__*)mono_object_unbox(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::CreateSubKey(mscorlib::System::String subkey)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameters__[0] = (MonoObject*)subkey;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "CreateSubKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameter_types__[1] = Global::GetType(typeid(permissionCheck).name());
					__parameters__[0] = (MonoObject*)subkey;
					__parameters__[1] = reinterpret_cast<void*>(permissionCheck);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "CreateSubKey", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::System::Security::AccessControl::RegistrySecurity registrySecurity)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameter_types__[1] = Global::GetType(typeid(permissionCheck).name());
					__parameter_types__[2] = Global::GetType(typeid(registrySecurity).name());
					__parameters__[0] = (MonoObject*)subkey;
					__parameters__[1] = reinterpret_cast<void*>(permissionCheck);
					__parameters__[2] = (MonoObject*)registrySecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "CreateSubKey", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::Microsoft::Win32::RegistryOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameter_types__[1] = Global::GetType(typeid(permissionCheck).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)subkey;
					__parameters__[1] = reinterpret_cast<void*>(permissionCheck);
					__parameters__[2] = reinterpret_cast<void*>(options);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "CreateSubKey", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::CreateSubKey(mscorlib::System::String subkey, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::Microsoft::Win32::RegistryOptions::__ENUM__ registryOptions, mscorlib::System::Security::AccessControl::RegistrySecurity registrySecurity)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameter_types__[1] = Global::GetType(typeid(permissionCheck).name());
					__parameter_types__[2] = Global::GetType(typeid(registryOptions).name());
					__parameter_types__[3] = Global::GetType(typeid(registrySecurity).name());
					__parameters__[0] = (MonoObject*)subkey;
					__parameters__[1] = reinterpret_cast<void*>(permissionCheck);
					__parameters__[2] = reinterpret_cast<void*>(registryOptions);
					__parameters__[3] = (MonoObject*)registrySecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "CreateSubKey", __native_object__, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			void RegistryKey::DeleteSubKey(mscorlib::System::String subkey)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameters__[0] = (MonoObject*)subkey;
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "DeleteSubKey", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void RegistryKey::DeleteSubKey(mscorlib::System::String subkey, mscorlib::System::Boolean throwOnMissingSubKey)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameter_types__[1] = Global::GetType(typeid(throwOnMissingSubKey).name());
					__parameters__[0] = (MonoObject*)subkey;
					__parameters__[1] = reinterpret_cast<void*>(throwOnMissingSubKey);
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "DeleteSubKey", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void RegistryKey::DeleteSubKeyTree(mscorlib::System::String subkey)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameters__[0] = (MonoObject*)subkey;
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "DeleteSubKeyTree", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void RegistryKey::DeleteSubKeyTree(mscorlib::System::String subkey, mscorlib::System::Boolean throwOnMissingSubKey)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(subkey).name());
					__parameter_types__[1] = Global::GetType(typeid(throwOnMissingSubKey).name());
					__parameters__[0] = (MonoObject*)subkey;
					__parameters__[1] = reinterpret_cast<void*>(throwOnMissingSubKey);
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "DeleteSubKeyTree", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void RegistryKey::DeleteValue(mscorlib::System::String name)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameters__[0] = (MonoObject*)name;
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "DeleteValue", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void RegistryKey::DeleteValue(mscorlib::System::String name, mscorlib::System::Boolean throwOnMissingValue)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(throwOnMissingValue).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(throwOnMissingValue);
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "DeleteValue", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Security::AccessControl::RegistrySecurity RegistryKey::GetAccessControl()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::RegistrySecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::RegistrySecurity RegistryKey::GetAccessControl(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(includeSections).name());
					__parameters__[0] = reinterpret_cast<void*>(includeSections);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::RegistrySecurity(__result__);
			}

			std::vector<mscorlib::System::String*> RegistryKey::GetSubKeyNames()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetSubKeyNames", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::String (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::String*> RegistryKey::GetValueNames()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "GetValueNames", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::String (__array_item__));
					}
					return __array_result__;
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::FromHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle handle)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(handle).name());
					__parameters__[0] = (MonoObject*)handle;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "FromHandle", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::FromHandle(mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle handle, mscorlib::Microsoft::Win32::RegistryView::__ENUM__ view)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(handle).name());
					__parameter_types__[1] = Global::GetType(typeid(view).name());
					__parameters__[0] = (MonoObject*)handle;
					__parameters__[1] = reinterpret_cast<void*>(view);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "FromHandle", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenRemoteBaseKey(mscorlib::Microsoft::Win32::RegistryHive::__ENUM__ hKey, mscorlib::System::String machineName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(hKey).name());
					__parameter_types__[1] = Global::GetType(typeid(machineName).name());
					__parameters__[0] = reinterpret_cast<void*>(hKey);
					__parameters__[1] = (MonoObject*)machineName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenRemoteBaseKey", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenRemoteBaseKey(mscorlib::Microsoft::Win32::RegistryHive::__ENUM__ hKey, mscorlib::System::String machineName, mscorlib::Microsoft::Win32::RegistryView::__ENUM__ view)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(hKey).name());
					__parameter_types__[1] = Global::GetType(typeid(machineName).name());
					__parameter_types__[2] = Global::GetType(typeid(view).name());
					__parameters__[0] = reinterpret_cast<void*>(hKey);
					__parameters__[1] = (MonoObject*)machineName;
					__parameters__[2] = reinterpret_cast<void*>(view);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenRemoteBaseKey", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenBaseKey(mscorlib::Microsoft::Win32::RegistryHive::__ENUM__ hKey, mscorlib::Microsoft::Win32::RegistryView::__ENUM__ view)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(hKey).name());
					__parameter_types__[1] = Global::GetType(typeid(view).name());
					__parameters__[0] = reinterpret_cast<void*>(hKey);
					__parameters__[1] = reinterpret_cast<void*>(view);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenBaseKey", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenSubKey(mscorlib::System::String name, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(permissionCheck).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(permissionCheck);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenSubKey", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			mscorlib::Microsoft::Win32::RegistryKey RegistryKey::OpenSubKey(mscorlib::System::String name, mscorlib::Microsoft::Win32::RegistryKeyPermissionCheck::__ENUM__ permissionCheck, mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__ rights)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(name).name());
					__parameter_types__[1] = Global::GetType(typeid(permissionCheck).name());
					__parameter_types__[2] = Global::GetType(typeid(rights).name());
					__parameters__[0] = (MonoObject*)name;
					__parameters__[1] = reinterpret_cast<void*>(permissionCheck);
					__parameters__[2] = reinterpret_cast<void*>(rights);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "OpenSubKey", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::Microsoft::Win32::RegistryKey(__result__);
			}

			void RegistryKey::SetAccessControl(mscorlib::System::Security::AccessControl::RegistrySecurity registrySecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(registrySecurity).name());
					__parameters__[0] = (MonoObject*)registrySecurity;
					Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "SetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::String RegistryKey::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:Name
			mscorlib::System::String  RegistryKey::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:SubKeyCount
			mscorlib::System::Int32  RegistryKey::get_SubKeyCount() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "get_SubKeyCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:ValueCount
			mscorlib::System::Int32  RegistryKey::get_ValueCount() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "get_ValueCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:Handle
			mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle  RegistryKey::get_Handle() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "get_Handle", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::Microsoft::Win32::SafeHandles::SafeRegistryHandle(__result__);
			}


			//	Get:View
			mscorlib::Microsoft::Win32::RegistryView::__ENUM__  RegistryKey::get_View() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "Microsoft.Win32", "RegistryKey", 0, NULL, "get_View", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::Microsoft::Win32::RegistryView::__ENUM__*)mono_object_unbox(__result__);
			}



		}
	}
}
