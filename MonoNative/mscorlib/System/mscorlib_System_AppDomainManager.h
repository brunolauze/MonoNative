#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_APPDOMAINMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_APPDOMAINMANAGER_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_AppDomainManagerInitializationOptions.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Hosting
			{

				class ApplicationActivator;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Assembly;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class HostExecutionContextManager;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class HostSecurityManager;
			class SecurityState;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class AppDomain;
		class String;
		class AppDomainSetup;
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

				class Evidence;
				

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
	namespace System
	{

		class AppDomainManager
			: public mscorlib::System::MarshalByRefObject
		{
		public:
			AppDomainManager()
			: mscorlib::System::MarshalByRefObject(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.AppDomainManager"))
			{
				__native_object__ = Global::New("mscorlib", "System", "AppDomainManager");
			};
		
			AppDomainManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
			{
			};
		
			AppDomainManager(MonoObject *nativeObject)
			: mscorlib::System::MarshalByRefObject(nativeObject)
			{
			};
		
			~AppDomainManager()
			{
			};
		

			AppDomainManager & operator=(AppDomainManager &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup appDomainInfo);
			virtual void  InitializeNewDomain(mscorlib::System::AppDomainSetup appDomainInfo);
			virtual mscorlib::System::Boolean  CheckSecuritySettings(mscorlib::System::Security::SecurityState state);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_ApplicationActivator)) mscorlib::System::Runtime::Hosting::ApplicationActivator  ApplicationActivator;
			__declspec(property(get=get_EntryAssembly)) mscorlib::System::Reflection::Assembly  EntryAssembly;
			__declspec(property(get=get_HostExecutionContextManager)) mscorlib::System::Threading::HostExecutionContextManager  HostExecutionContextManager;
			__declspec(property(get=get_HostSecurityManager)) mscorlib::System::Security::HostSecurityManager  HostSecurityManager;
			__declspec(property(get=get_InitializationFlags, put=set_InitializationFlags)) mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__  InitializationFlags;

			//Get Set Properties Methods
			//	Get:ApplicationActivator
			mscorlib::System::Runtime::Hosting::ApplicationActivator  get_ApplicationActivator();

			//	Get:EntryAssembly
			mscorlib::System::Reflection::Assembly  get_EntryAssembly();

			//	Get:HostExecutionContextManager
			mscorlib::System::Threading::HostExecutionContextManager  get_HostExecutionContextManager();

			//	Get:HostSecurityManager
			mscorlib::System::Security::HostSecurityManager  get_HostSecurityManager();

			//	Get/Set:InitializationFlags
			mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__  get_InitializationFlags();
			void set_InitializationFlags(mscorlib::System::AppDomainManagerInitializationOptions::__ENUM__  value);

		
		protected:
		
		private:
		
		};

	}
}
#endif
