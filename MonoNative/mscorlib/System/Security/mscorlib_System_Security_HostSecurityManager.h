#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_HOSTSECURITYMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_HOSTSECURITYMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_HostSecurityManagerOptions.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class PolicyLevel;
				class ApplicationTrust;
				class Evidence;
				class TrustManagerContext;
				

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
		namespace Security
		{

			class PermissionSet;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class HostSecurityManager
				: public mscorlib::System::Object
			{
			public:
				HostSecurityManager()
				: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.HostSecurityManager"))
				{
					__native_object__ = Global::New("mscorlib", "System.Security", "HostSecurityManager");
				};
			
				HostSecurityManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				HostSecurityManager(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~HostSecurityManager()
				{
				};
			

				HostSecurityManager & operator=(HostSecurityManager &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(HostSecurityManager &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				virtual mscorlib::System::Security::Policy::ApplicationTrust  DetermineApplicationTrust(mscorlib::System::Security::Policy::Evidence applicationEvidence, mscorlib::System::Security::Policy::Evidence activatorEvidence, mscorlib::System::Security::Policy::TrustManagerContext context);
				virtual mscorlib::System::Security::Policy::Evidence  ProvideAppDomainEvidence(mscorlib::System::Security::Policy::Evidence inputEvidence);
				virtual mscorlib::System::Security::Policy::Evidence  ProvideAssemblyEvidence(mscorlib::System::Reflection::Assembly loadedAssembly, mscorlib::System::Security::Policy::Evidence inputEvidence);
				virtual mscorlib::System::Security::PermissionSet  ResolvePolicy(mscorlib::System::Security::Policy::Evidence evidence);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_DomainPolicy)) mscorlib::System::Security::Policy::PolicyLevel  DomainPolicy;
				__declspec(property(get=get_Flags)) mscorlib::System::Security::HostSecurityManagerOptions::__ENUM__  Flags;

				//Get Set Properties Methods
				//	Get:DomainPolicy
				mscorlib::System::Security::Policy::PolicyLevel  get_DomainPolicy() const;

				//	Get:Flags
				mscorlib::System::Security::HostSecurityManagerOptions::__ENUM__  get_Flags() const;

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
