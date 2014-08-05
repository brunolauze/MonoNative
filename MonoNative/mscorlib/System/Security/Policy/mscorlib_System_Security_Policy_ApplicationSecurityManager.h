#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONSECURITYMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONSECURITYMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IApplicationTrustManager.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class ActivationContext;
		

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

				class ApplicationTrustCollection;
				class TrustManagerContext;
				

			}
		}
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

				class ApplicationSecurityManager
					: public mscorlib::System::Object
				{
				public:
					ApplicationSecurityManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ApplicationSecurityManager(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ApplicationSecurityManager()
					{
					};
				

					ApplicationSecurityManager & operator=(ApplicationSecurityManager &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Boolean  DetermineApplicationTrust(mscorlib::System::ActivationContext activationContext, mscorlib::System::Security::Policy::TrustManagerContext context);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Properties
					static Property<mscorlib::System::Security::Policy::IApplicationTrustManager , mscorlib::System::Security::Policy::ApplicationSecurityManager> ApplicationTrustManager;
					static Property<mscorlib::System::Security::Policy::ApplicationTrustCollection , mscorlib::System::Security::Policy::ApplicationSecurityManager> UserApplicationTrusts;

					//Get Set Static Properties Methods
					//	Get:ApplicationTrustManager
					static mscorlib::System::Security::Policy::IApplicationTrustManager  get_ApplicationTrustManager();
					static void set_ApplicationTrustManager(mscorlib::System::Security::Policy::IApplicationTrustManager  value);

					//	Get:UserApplicationTrusts
					static mscorlib::System::Security::Policy::ApplicationTrustCollection  get_UserApplicationTrusts();
					static void set_UserApplicationTrusts(mscorlib::System::Security::Policy::ApplicationTrustCollection  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
