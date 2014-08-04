#include <mscorlib/System/mscorlib_System_AppDomainSetup.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		std::vector<mscorlib::System::Byte*> AppDomainSetup::GetConfigurationBytes()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "GetConfigurationBytes", __native_object__, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
				}
				return __array_result__;
		}

		void AppDomainSetup::SetConfigurationBytes(std::vector<mscorlib::System::Byte*> value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(value, typeid(mscorlib::System::Byte).name());
				Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "SetConfigurationBytes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomainSetup::SetCompatibilitySwitches(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> switches)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(switches).name());
				__parameters__[0] = (MonoObject*)switches;
				Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "SetCompatibilitySwitches", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		//Get Set Properties Methods
		//	Get/Set:ApplicationBase
		mscorlib::System::String  AppDomainSetup::get_ApplicationBase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ApplicationBase", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_ApplicationBase(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ApplicationBase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ApplicationName
		mscorlib::System::String  AppDomainSetup::get_ApplicationName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ApplicationName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_ApplicationName(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ApplicationName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:CachePath
		mscorlib::System::String  AppDomainSetup::get_CachePath()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_CachePath", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_CachePath(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_CachePath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ConfigurationFile
		mscorlib::System::String  AppDomainSetup::get_ConfigurationFile()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ConfigurationFile", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_ConfigurationFile(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ConfigurationFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:DisallowPublisherPolicy
		mscorlib::System::Boolean  AppDomainSetup::get_DisallowPublisherPolicy()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_DisallowPublisherPolicy", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AppDomainSetup::set_DisallowPublisherPolicy(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_DisallowPublisherPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:DynamicBase
		mscorlib::System::String  AppDomainSetup::get_DynamicBase()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_DynamicBase", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_DynamicBase(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_DynamicBase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:LicenseFile
		mscorlib::System::String  AppDomainSetup::get_LicenseFile()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_LicenseFile", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_LicenseFile(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_LicenseFile", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:LoaderOptimization
		mscorlib::System::LoaderOptimization::__ENUM__  AppDomainSetup::get_LoaderOptimization()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_LoaderOptimization", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::LoaderOptimization::__ENUM__*)mono_object_unbox(__result__);
		}

		void AppDomainSetup::set_LoaderOptimization(mscorlib::System::LoaderOptimization::__ENUM__  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_LoaderOptimization", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:PrivateBinPath
		mscorlib::System::String  AppDomainSetup::get_PrivateBinPath()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_PrivateBinPath", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_PrivateBinPath(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_PrivateBinPath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:PrivateBinPathProbe
		mscorlib::System::String  AppDomainSetup::get_PrivateBinPathProbe()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_PrivateBinPathProbe", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_PrivateBinPathProbe(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_PrivateBinPathProbe", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ShadowCopyDirectories
		mscorlib::System::String  AppDomainSetup::get_ShadowCopyDirectories()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ShadowCopyDirectories", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_ShadowCopyDirectories(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ShadowCopyDirectories", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ShadowCopyFiles
		mscorlib::System::String  AppDomainSetup::get_ShadowCopyFiles()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ShadowCopyFiles", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}

		void AppDomainSetup::set_ShadowCopyFiles(mscorlib::System::String  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ShadowCopyFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:DisallowBindingRedirects
		mscorlib::System::Boolean  AppDomainSetup::get_DisallowBindingRedirects()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_DisallowBindingRedirects", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AppDomainSetup::set_DisallowBindingRedirects(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_DisallowBindingRedirects", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:DisallowCodeDownload
		mscorlib::System::Boolean  AppDomainSetup::get_DisallowCodeDownload()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_DisallowCodeDownload", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AppDomainSetup::set_DisallowCodeDownload(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_DisallowCodeDownload", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ActivationArguments
		mscorlib::System::Runtime::Hosting::ActivationArguments  AppDomainSetup::get_ActivationArguments()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ActivationArguments", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Runtime::Hosting::ActivationArguments(__result__);
		}

		void AppDomainSetup::set_ActivationArguments(mscorlib::System::Runtime::Hosting::ActivationArguments  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ActivationArguments", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:AppDomainInitializer
		mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )>  AppDomainSetup::get_AppDomainInitializer()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_AppDomainInitializer", __native_object__, 0, NULL, NULL, NULL);
			void* __delegate_result__ = mono_object_unbox(__result__);
			return mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> ();
		}

		void AppDomainSetup::set_AppDomainInitializer(mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )>  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = &value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_AppDomainInitializer", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:AppDomainInitializerArguments
		std::vector<mscorlib::System::String*>  AppDomainSetup::get_AppDomainInitializerArguments()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_AppDomainInitializerArguments", __native_object__, 0, NULL, NULL, NULL);
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

		void AppDomainSetup::set_AppDomainInitializerArguments(std::vector<mscorlib::System::String*>  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
			__parameters__[0] = Global::FromArray<mscorlib::System::String*>(value, typeid(mscorlib::System::String).name());
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_AppDomainInitializerArguments", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:ApplicationTrust
		mscorlib::System::Security::Policy::ApplicationTrust  AppDomainSetup::get_ApplicationTrust()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_ApplicationTrust", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
		}

		void AppDomainSetup::set_ApplicationTrust(mscorlib::System::Security::Policy::ApplicationTrust  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_ApplicationTrust", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get/Set:DisallowApplicationBaseProbing
		mscorlib::System::Boolean  AppDomainSetup::get_DisallowApplicationBaseProbing()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "get_DisallowApplicationBaseProbing", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AppDomainSetup::set_DisallowApplicationBaseProbing(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomainSetup", 0, NULL, "set_DisallowApplicationBaseProbing", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}



	}
}
