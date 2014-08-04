#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONSECURITYINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONSECURITYINFO_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>

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

		class ApplicationId;
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

			class PermissionSet;
			

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

				class ApplicationSecurityInfo
					: public mscorlib::System::Object
				{
				public:
					ApplicationSecurityInfo(mscorlib::System::ActivationContext activationContext)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.ApplicationSecurityInfo"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "ActivationContext");
						__parameters__[0] = (MonoObject*)activationContext;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "ApplicationSecurityInfo", 1, __parameter_types__, __parameters__);
					};
				
					ApplicationSecurityInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ApplicationSecurityInfo(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ApplicationSecurityInfo()
					{
					};
				

					ApplicationSecurityInfo & operator=(ApplicationSecurityInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ApplicationEvidence, put=set_ApplicationEvidence)) mscorlib::System::Security::Policy::Evidence  ApplicationEvidence;
					__declspec(property(get=get_ApplicationId, put=set_ApplicationId)) mscorlib::System::ApplicationId  ApplicationId;
					__declspec(property(get=get_DefaultRequestSet, put=set_DefaultRequestSet)) mscorlib::System::Security::PermissionSet  DefaultRequestSet;
					__declspec(property(get=get_DeploymentId, put=set_DeploymentId)) mscorlib::System::ApplicationId  DeploymentId;

					//Get Set Properties Methods
					//	Get/Set:ApplicationEvidence
					mscorlib::System::Security::Policy::Evidence  get_ApplicationEvidence();
					void set_ApplicationEvidence(mscorlib::System::Security::Policy::Evidence  value);

					//	Get/Set:ApplicationId
					mscorlib::System::ApplicationId  get_ApplicationId();
					void set_ApplicationId(mscorlib::System::ApplicationId  value);

					//	Get/Set:DefaultRequestSet
					mscorlib::System::Security::PermissionSet  get_DefaultRequestSet();
					void set_DefaultRequestSet(mscorlib::System::Security::PermissionSet  value);

					//	Get/Set:DeploymentId
					mscorlib::System::ApplicationId  get_DeploymentId();
					void set_DeploymentId(mscorlib::System::ApplicationId  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
