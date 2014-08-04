// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: AppDomainManager
// C++ Typed Name: mscorlib::System::AppDomainManager


#include <gtest/gtest.h>
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

		//Constructors Tests
		
		//AppDomainManager()
		TEST(mscorlib_System_AppDomainManager_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::AppDomainManager *value = new mscorlib::System::AppDomainManager();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup appDomainInfo
		TEST(mscorlib_System_AppDomainManager_Fixture,CreateDomain_Test)
		{
			
			
		}

		// Method InitializeNewDomain
		//		Signature: mscorlib::System::AppDomainSetup appDomainInfo
		TEST(mscorlib_System_AppDomainManager_Fixture,InitializeNewDomain_Test)
		{
			
			
		}

		// Method CheckSecuritySettings
		//		Signature: mscorlib::System::Security::SecurityState state
		TEST(mscorlib_System_AppDomainManager_Fixture,CheckSecuritySettings_Test)
		{
			
			
		}

		//Public Properties Tests
		
		// Property ApplicationActivator
		//		Return Type: mscorlib::System::Runtime::Hosting::ApplicationActivator
		//			Property Get Method
		TEST(mscorlib_System_AppDomainManager_Fixture,get_ApplicationActivator_Test)
		{
			
			
		}

		// Property EntryAssembly
		//		Return Type: mscorlib::System::Reflection::Assembly
		//			Property Get Method
		TEST(mscorlib_System_AppDomainManager_Fixture,get_EntryAssembly_Test)
		{
			
			
		}

		// Property HostExecutionContextManager
		//		Return Type: mscorlib::System::Threading::HostExecutionContextManager
		//			Property Get Method
		TEST(mscorlib_System_AppDomainManager_Fixture,get_HostExecutionContextManager_Test)
		{
			
			
		}

		// Property HostSecurityManager
		//		Return Type: mscorlib::System::Security::HostSecurityManager
		//			Property Get Method
		TEST(mscorlib_System_AppDomainManager_Fixture,get_HostSecurityManager_Test)
		{
			
			
		}

		// Property InitializationFlags
		//		Return Type: mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__
		//			Property Get Method
		TEST(mscorlib_System_AppDomainManager_Fixture,get_InitializationFlags_Test)
		{
			
			
		}

		// Property InitializationFlags
		//		Return Type: mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__
		//			Property Set Method
		TEST(mscorlib_System_AppDomainManager_Fixture,set_InitializationFlags_Test)
		{
			
			
		}


	}
}
