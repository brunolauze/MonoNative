#include <mscorlib/System/mscorlib_System_AppDomainManager.h>
#include <mscorlib/System/Runtime/Hosting/mscorlib_System_Runtime_Hosting_ApplicationActivator.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_HostExecutionContextManager.h>
#include <mscorlib/System/Security/mscorlib_System_Security_HostSecurityManager.h>
#include <mscorlib/System/mscorlib_System_AppDomain.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_AppDomainSetup.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityState.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::AppDomain AppDomainManager::CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup appDomainInfo)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(appDomainInfo).name());
				__parameters__[0] = (MonoObject*)friendlyName;
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)appDomainInfo;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "CreateDomain", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		void AppDomainManager::InitializeNewDomain(mscorlib::System::AppDomainSetup appDomainInfo)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(appDomainInfo).name());
				__parameters__[0] = (MonoObject*)appDomainInfo;
				Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "InitializeNewDomain", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Boolean AppDomainManager::CheckSecuritySettings(mscorlib::System::Security::SecurityState state)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(state).name());
				__parameters__[0] = (MonoObject*)state;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "CheckSecuritySettings", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		//Get Set Properties Methods
		//	Get:ApplicationActivator
		mscorlib::System::Runtime::Hosting::ApplicationActivator  AppDomainManager::get_ApplicationActivator()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "get_ApplicationActivator", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Runtime::Hosting::ApplicationActivator(__result__);
		}


		//	Get:EntryAssembly
		mscorlib::System::Reflection::Assembly  AppDomainManager::get_EntryAssembly()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "get_EntryAssembly", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::Assembly(__result__);
		}


		//	Get:HostExecutionContextManager
		mscorlib::System::Threading::HostExecutionContextManager  AppDomainManager::get_HostExecutionContextManager()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "get_HostExecutionContextManager", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Threading::HostExecutionContextManager(__result__);
		}


		//	Get:HostSecurityManager
		mscorlib::System::Security::HostSecurityManager  AppDomainManager::get_HostSecurityManager()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "get_HostSecurityManager", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Security::HostSecurityManager(__result__);
		}


		//	Get/Set:InitializationFlags
		mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__  AppDomainManager::get_InitializationFlags()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "get_InitializationFlags", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__*)mono_object_unbox(__result__);
		}

		void AppDomainManager::set_InitializationFlags(mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomainManager", 0, NULL, "set_InitializationFlags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}



	}
}
