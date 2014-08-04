// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: AppDomainSetup
// C++ Typed Name: mscorlib::System::AppDomainSetup


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_AppDomainSetup.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Constructors Tests
		
		//AppDomainSetup()
		TEST(mscorlib_System_AppDomainSetup_Fixture,DefaultConstructor)
		{
			
			mscorlib::System::AppDomainSetup *value = new mscorlib::System::AppDomainSetup();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AppDomainSetup(mscorlib::System::Runtime::Hosting::ActivationArguments activationArguments)
		TEST(mscorlib_System_AppDomainSetup_Fixture,Constructor_2)
		{
			
			mscorlib::System::AppDomainSetup *value = new mscorlib::System::AppDomainSetup();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//AppDomainSetup(mscorlib::System::ActivationContext activationContext)
		TEST(mscorlib_System_AppDomainSetup_Fixture,Constructor_3)
		{
			
			mscorlib::System::AppDomainSetup *value = new mscorlib::System::AppDomainSetup();
			EXPECT_NE(NULL, value->GetNativeObject());
			
			
		}
		
		//Public Methods Tests
		
		// Method GetConfigurationBytes
		//		Signature: 
		TEST(mscorlib_System_AppDomainSetup_Fixture,GetConfigurationBytes_Test)
		{
			
			
		}

		// Method SetConfigurationBytes
		//		Signature: std::vector<mscorlib::System::Byte*> value
		TEST(mscorlib_System_AppDomainSetup_Fixture,SetConfigurationBytes_Test)
		{
			
			
		}

		// Method SetCompatibilitySwitches
		//		Signature: mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> switches
		TEST(mscorlib_System_AppDomainSetup_Fixture,SetCompatibilitySwitches_Test)
		{
			
			
		}

		//Public Properties Tests
		
		// Property ApplicationBase
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ApplicationBase_Test)
		{
			
			
		}

		// Property ApplicationBase
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ApplicationBase_Test)
		{
			
			
		}

		// Property ApplicationName
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ApplicationName_Test)
		{
			
			
		}

		// Property ApplicationName
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ApplicationName_Test)
		{
			
			
		}

		// Property CachePath
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_CachePath_Test)
		{
			
			
		}

		// Property CachePath
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_CachePath_Test)
		{
			
			
		}

		// Property ConfigurationFile
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ConfigurationFile_Test)
		{
			
			
		}

		// Property ConfigurationFile
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ConfigurationFile_Test)
		{
			
			
		}

		// Property DisallowPublisherPolicy
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_DisallowPublisherPolicy_Test)
		{
			
			
		}

		// Property DisallowPublisherPolicy
		//		Return Type: mscorlib::System::Boolean
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_DisallowPublisherPolicy_Test)
		{
			
			
		}

		// Property DynamicBase
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_DynamicBase_Test)
		{
			
			
		}

		// Property DynamicBase
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_DynamicBase_Test)
		{
			
			
		}

		// Property LicenseFile
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_LicenseFile_Test)
		{
			
			
		}

		// Property LicenseFile
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_LicenseFile_Test)
		{
			
			
		}

		// Property LoaderOptimization
		//		Return Type: mscorlib::System::LoaderOptimization::__ENUM__
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_LoaderOptimization_Test)
		{
			
			
		}

		// Property LoaderOptimization
		//		Return Type: mscorlib::System::LoaderOptimization::__ENUM__
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_LoaderOptimization_Test)
		{
			
			
		}

		// Property PrivateBinPath
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_PrivateBinPath_Test)
		{
			
			
		}

		// Property PrivateBinPath
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_PrivateBinPath_Test)
		{
			
			
		}

		// Property PrivateBinPathProbe
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_PrivateBinPathProbe_Test)
		{
			
			
		}

		// Property PrivateBinPathProbe
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_PrivateBinPathProbe_Test)
		{
			
			
		}

		// Property ShadowCopyDirectories
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ShadowCopyDirectories_Test)
		{
			
			
		}

		// Property ShadowCopyDirectories
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ShadowCopyDirectories_Test)
		{
			
			
		}

		// Property ShadowCopyFiles
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ShadowCopyFiles_Test)
		{
			
			
		}

		// Property ShadowCopyFiles
		//		Return Type: mscorlib::System::String
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ShadowCopyFiles_Test)
		{
			
			
		}

		// Property DisallowBindingRedirects
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_DisallowBindingRedirects_Test)
		{
			
			
		}

		// Property DisallowBindingRedirects
		//		Return Type: mscorlib::System::Boolean
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_DisallowBindingRedirects_Test)
		{
			
			
		}

		// Property DisallowCodeDownload
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_DisallowCodeDownload_Test)
		{
			
			
		}

		// Property DisallowCodeDownload
		//		Return Type: mscorlib::System::Boolean
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_DisallowCodeDownload_Test)
		{
			
			
		}

		// Property ActivationArguments
		//		Return Type: mscorlib::System::Runtime::Hosting::ActivationArguments
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ActivationArguments_Test)
		{
			
			
		}

		// Property ActivationArguments
		//		Return Type: mscorlib::System::Runtime::Hosting::ActivationArguments
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ActivationArguments_Test)
		{
			
			
		}

		// Property AppDomainInitializer
		//		Return Type: mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> 
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_AppDomainInitializer_Test)
		{
			
			
		}

		// Property AppDomainInitializer
		//		Return Type: mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> 
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_AppDomainInitializer_Test)
		{
			
			
		}

		// Property AppDomainInitializerArguments
		//		Return Type: mscorlib::System::String*
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_AppDomainInitializerArguments_Test)
		{
			
			
		}

		// Property AppDomainInitializerArguments
		//		Return Type: mscorlib::System::String*
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_AppDomainInitializerArguments_Test)
		{
			
			
		}

		// Property ApplicationTrust
		//		Return Type: mscorlib::System::Security::Policy::ApplicationTrust
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_ApplicationTrust_Test)
		{
			
			
		}

		// Property ApplicationTrust
		//		Return Type: mscorlib::System::Security::Policy::ApplicationTrust
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_ApplicationTrust_Test)
		{
			
			
		}

		// Property DisallowApplicationBaseProbing
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,get_DisallowApplicationBaseProbing_Test)
		{
			
			
		}

		// Property DisallowApplicationBaseProbing
		//		Return Type: mscorlib::System::Boolean
		//			Property Set Method
		TEST(mscorlib_System_AppDomainSetup_Fixture,set_DisallowApplicationBaseProbing_Test)
		{
			
			
		}


	}
}
