#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IAPPDOMAINSETUP_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IAPPDOMAINSETUP_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{

		class IAppDomainSetup
		{
		public:
			IAppDomainSetup(MonoObject *nativeObject)
			{
				__mscorlib_System_IAppDomainSetup = nativeObject;
			};
		
			~IAppDomainSetup()
			{
			};
		

			IAppDomainSetup & operator=(IAppDomainSetup &value) { __mscorlib_System_IAppDomainSetup = value.__mscorlib_System_IAppDomainSetup; return value; };
			operator MonoObject*() { return __mscorlib_System_IAppDomainSetup; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System_IAppDomainSetup = value; return value; };




			//Public Properties
			__declspec(property(get=get_ApplicationBase, put=set_ApplicationBase)) mscorlib::System::String  ApplicationBase;
			__declspec(property(get=get_ApplicationName, put=set_ApplicationName)) mscorlib::System::String  ApplicationName;
			__declspec(property(get=get_CachePath, put=set_CachePath)) mscorlib::System::String  CachePath;
			__declspec(property(get=get_ConfigurationFile, put=set_ConfigurationFile)) mscorlib::System::String  ConfigurationFile;
			__declspec(property(get=get_DynamicBase, put=set_DynamicBase)) mscorlib::System::String  DynamicBase;
			__declspec(property(get=get_LicenseFile, put=set_LicenseFile)) mscorlib::System::String  LicenseFile;
			__declspec(property(get=get_PrivateBinPath, put=set_PrivateBinPath)) mscorlib::System::String  PrivateBinPath;
			__declspec(property(get=get_PrivateBinPathProbe, put=set_PrivateBinPathProbe)) mscorlib::System::String  PrivateBinPathProbe;
			__declspec(property(get=get_ShadowCopyDirectories, put=set_ShadowCopyDirectories)) mscorlib::System::String  ShadowCopyDirectories;
			__declspec(property(get=get_ShadowCopyFiles, put=set_ShadowCopyFiles)) mscorlib::System::String  ShadowCopyFiles;

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

			//	Get/Set:DynamicBase
			mscorlib::System::String  get_DynamicBase();
			void set_DynamicBase(mscorlib::System::String  value);

			//	Get/Set:LicenseFile
			mscorlib::System::String  get_LicenseFile();
			void set_LicenseFile(mscorlib::System::String  value);

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

		
		protected:
			MonoObject *__mscorlib_System_IAppDomainSetup;
		
		private:
		
		};

	}
}
#endif
