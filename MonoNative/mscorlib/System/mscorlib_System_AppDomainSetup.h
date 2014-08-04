#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_APPDOMAINSETUP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_APPDOMAINSETUP_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Hosting/mscorlib_System_Runtime_Hosting_ActivationArguments.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_IAppDomainSetup.h>
#include <mscorlib/System/mscorlib_System_LoaderOptimization.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class ApplicationTrust;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class AppDomainSetup
			: public mscorlib::System::Object
			, public virtual mscorlib::System::IAppDomainSetup
		{
		public:
			AppDomainSetup()
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AppDomainSetup"))
			, mscorlib::System::IAppDomainSetup(NULL)
			{
				__native_object__ = Global::New("mscorlib", "System", "AppDomainSetup");
			};
		
			AppDomainSetup(mscorlib::System::Runtime::Hosting::ActivationArguments activationArguments)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AppDomainSetup"))
			, mscorlib::System::IAppDomainSetup(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Hosting", "ActivationArguments");
				__parameters__[0] = (MonoObject*)activationArguments;
				__native_object__ = Global::New("mscorlib", "System", "AppDomainSetup", 1, __parameter_types__, __parameters__);
			};
		
			AppDomainSetup(mscorlib::System::ActivationContext activationContext)
			: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AppDomainSetup"))
			, mscorlib::System::IAppDomainSetup(NULL)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "ActivationContext");
				__parameters__[0] = (MonoObject*)activationContext;
				__native_object__ = Global::New("mscorlib", "System", "AppDomainSetup", 1, __parameter_types__, __parameters__);
			};
		
			AppDomainSetup(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::IAppDomainSetup(NULL)
			{
			};
		
			AppDomainSetup(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::IAppDomainSetup(nativeObject)
			{
			};
		
			~AppDomainSetup()
			{
			};
		

			AppDomainSetup & operator=(AppDomainSetup &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			std::vector<mscorlib::System::Byte*>  GetConfigurationBytes();
			void  SetConfigurationBytes(std::vector<mscorlib::System::Byte*> value);
			void  SetCompatibilitySwitches(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> switches);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_ApplicationBase, put=set_ApplicationBase)) mscorlib::System::String  ApplicationBase;
			__declspec(property(get=get_ApplicationName, put=set_ApplicationName)) mscorlib::System::String  ApplicationName;
			__declspec(property(get=get_CachePath, put=set_CachePath)) mscorlib::System::String  CachePath;
			__declspec(property(get=get_ConfigurationFile, put=set_ConfigurationFile)) mscorlib::System::String  ConfigurationFile;
			__declspec(property(get=get_DisallowPublisherPolicy, put=set_DisallowPublisherPolicy)) mscorlib::System::Boolean  DisallowPublisherPolicy;
			__declspec(property(get=get_DynamicBase, put=set_DynamicBase)) mscorlib::System::String  DynamicBase;
			__declspec(property(get=get_LicenseFile, put=set_LicenseFile)) mscorlib::System::String  LicenseFile;
			__declspec(property(get=get_LoaderOptimization, put=set_LoaderOptimization)) mscorlib::System::LoaderOptimization::__ENUM__  LoaderOptimization;
			__declspec(property(get=get_PrivateBinPath, put=set_PrivateBinPath)) mscorlib::System::String  PrivateBinPath;
			__declspec(property(get=get_PrivateBinPathProbe, put=set_PrivateBinPathProbe)) mscorlib::System::String  PrivateBinPathProbe;
			__declspec(property(get=get_ShadowCopyDirectories, put=set_ShadowCopyDirectories)) mscorlib::System::String  ShadowCopyDirectories;
			__declspec(property(get=get_ShadowCopyFiles, put=set_ShadowCopyFiles)) mscorlib::System::String  ShadowCopyFiles;
			__declspec(property(get=get_DisallowBindingRedirects, put=set_DisallowBindingRedirects)) mscorlib::System::Boolean  DisallowBindingRedirects;
			__declspec(property(get=get_DisallowCodeDownload, put=set_DisallowCodeDownload)) mscorlib::System::Boolean  DisallowCodeDownload;
			__declspec(property(get=get_ActivationArguments, put=set_ActivationArguments)) mscorlib::System::Runtime::Hosting::ActivationArguments  ActivationArguments;
			__declspec(property(get=get_AppDomainInitializer, put=set_AppDomainInitializer)) mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )>  AppDomainInitializer;
			__declspec(property(get=get_AppDomainInitializerArguments, put=set_AppDomainInitializerArguments)) std::vector<mscorlib::System::String*>  AppDomainInitializerArguments;
			__declspec(property(get=get_ApplicationTrust, put=set_ApplicationTrust)) mscorlib::System::Security::Policy::ApplicationTrust  ApplicationTrust;
			__declspec(property(get=get_DisallowApplicationBaseProbing, put=set_DisallowApplicationBaseProbing)) mscorlib::System::Boolean  DisallowApplicationBaseProbing;

			//Get Set Properties Methods
			//	Get/Set:ApplicationBase
			mscorlib::System::String  get_ApplicationBase();
			void set_ApplicationBase(mscorlib::System::String  value);

			//	Get/Set:ApplicationName
			mscorlib::System::String  get_ApplicationName();
			void set_ApplicationName(mscorlib::System::String  value);

			//	Get/Set:CachePath
			mscorlib::System::String  get_CachePath();
			void set_CachePath(mscorlib::System::String  value);

			//	Get/Set:ConfigurationFile
			mscorlib::System::String  get_ConfigurationFile();
			void set_ConfigurationFile(mscorlib::System::String  value);

			//	Get/Set:DisallowPublisherPolicy
			mscorlib::System::Boolean  get_DisallowPublisherPolicy();
			void set_DisallowPublisherPolicy(mscorlib::System::Boolean  value);

			//	Get/Set:DynamicBase
			mscorlib::System::String  get_DynamicBase();
			void set_DynamicBase(mscorlib::System::String  value);

			//	Get/Set:LicenseFile
			mscorlib::System::String  get_LicenseFile();
			void set_LicenseFile(mscorlib::System::String  value);

			//	Get/Set:LoaderOptimization
			mscorlib::System::LoaderOptimization::__ENUM__  get_LoaderOptimization();
			void set_LoaderOptimization(mscorlib::System::LoaderOptimization::__ENUM__  value);

			//	Get/Set:PrivateBinPath
			mscorlib::System::String  get_PrivateBinPath();
			void set_PrivateBinPath(mscorlib::System::String  value);

			//	Get/Set:PrivateBinPathProbe
			mscorlib::System::String  get_PrivateBinPathProbe();
			void set_PrivateBinPathProbe(mscorlib::System::String  value);

			//	Get/Set:ShadowCopyDirectories
			mscorlib::System::String  get_ShadowCopyDirectories();
			void set_ShadowCopyDirectories(mscorlib::System::String  value);

			//	Get/Set:ShadowCopyFiles
			mscorlib::System::String  get_ShadowCopyFiles();
			void set_ShadowCopyFiles(mscorlib::System::String  value);

			//	Get/Set:DisallowBindingRedirects
			mscorlib::System::Boolean  get_DisallowBindingRedirects();
			void set_DisallowBindingRedirects(mscorlib::System::Boolean  value);

			//	Get/Set:DisallowCodeDownload
			mscorlib::System::Boolean  get_DisallowCodeDownload();
			void set_DisallowCodeDownload(mscorlib::System::Boolean  value);

			//	Get/Set:ActivationArguments
			mscorlib::System::Runtime::Hosting::ActivationArguments  get_ActivationArguments();
			void set_ActivationArguments(mscorlib::System::Runtime::Hosting::ActivationArguments  value);

			//	Get/Set:AppDomainInitializer
			mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )>  get_AppDomainInitializer();
			void set_AppDomainInitializer(mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )>  value);

			//	Get/Set:AppDomainInitializerArguments
			std::vector<mscorlib::System::String*>  get_AppDomainInitializerArguments();
			void set_AppDomainInitializerArguments(std::vector<mscorlib::System::String*>  value);

			//	Get/Set:ApplicationTrust
			mscorlib::System::Security::Policy::ApplicationTrust  get_ApplicationTrust();
			void set_ApplicationTrust(mscorlib::System::Security::Policy::ApplicationTrust  value);

			//	Get/Set:DisallowApplicationBaseProbing
			mscorlib::System::Boolean  get_DisallowApplicationBaseProbing();
			void set_DisallowApplicationBaseProbing(mscorlib::System::Boolean  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
