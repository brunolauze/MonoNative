#include <mscorlib/System/mscorlib_System_IAppDomainSetup.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Get Set Properties Methods
		//	Get/Set:ApplicationBase
		mscorlib::System::String  IAppDomainSetup::get_ApplicationBase() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_ApplicationBase", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_ApplicationBase(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_ApplicationBase", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ApplicationName
		mscorlib::System::String  IAppDomainSetup::get_ApplicationName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_ApplicationName", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_ApplicationName(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_ApplicationName", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:CachePath
		mscorlib::System::String  IAppDomainSetup::get_CachePath() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_CachePath", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_CachePath(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_CachePath", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ConfigurationFile
		mscorlib::System::String  IAppDomainSetup::get_ConfigurationFile() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_ConfigurationFile", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_ConfigurationFile(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_ConfigurationFile", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:DynamicBase
		mscorlib::System::String  IAppDomainSetup::get_DynamicBase() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_DynamicBase", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_DynamicBase(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_DynamicBase", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:LicenseFile
		mscorlib::System::String  IAppDomainSetup::get_LicenseFile() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_LicenseFile", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_LicenseFile(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_LicenseFile", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:PrivateBinPath
		mscorlib::System::String  IAppDomainSetup::get_PrivateBinPath() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_PrivateBinPath", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_PrivateBinPath(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_PrivateBinPath", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:PrivateBinPathProbe
		mscorlib::System::String  IAppDomainSetup::get_PrivateBinPathProbe() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_PrivateBinPathProbe", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_PrivateBinPathProbe(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_PrivateBinPathProbe", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ShadowCopyDirectories
		mscorlib::System::String  IAppDomainSetup::get_ShadowCopyDirectories() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_ShadowCopyDirectories", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_ShadowCopyDirectories(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_ShadowCopyDirectories", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ShadowCopyFiles
		mscorlib::System::String  IAppDomainSetup::get_ShadowCopyFiles() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "get_ShadowCopyFiles", __mscorlib_System_IAppDomainSetup, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void IAppDomainSetup::set_ShadowCopyFiles(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = mono_string_new(Global::GetDomain(), value);
			Global::InvokeMethod("mscorlib", "System", "IAppDomainSetup", 0, NULL, "set_ShadowCopyFiles", __mscorlib_System_IAppDomainSetup, 1, __parameter_types__, __parameters__, NULL);
		}



	}
}
