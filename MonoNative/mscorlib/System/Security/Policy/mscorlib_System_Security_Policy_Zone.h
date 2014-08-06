#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_ZONE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_ZONE_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityZone.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_IIdentityPermissionFactory.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>

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

		class String;
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

				class Zone
					: public mscorlib::System::Security::Policy::EvidenceBase
					, public virtual mscorlib::System::Security::Policy::IIdentityPermissionFactory
				{
				public:
					Zone(mscorlib::System::Security::SecurityZone::__ENUM__ zone)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.Zone"))
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "SecurityZone");
						mscorlib::System::Int32 __param_zone__ = zone;
						__parameters__[0] = &__param_zone__;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "Zone", 1, __parameter_types__, __parameters__);
					};
				
					Zone(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
					};
				
					Zone(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(nativeObject)
					{
					};
				
					~Zone()
					{
					};
				

					Zone & operator=(Zone &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Object  Copy();
					virtual mscorlib::System::Security::IPermission  CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence);
					static mscorlib::System::Security::Policy::Zone  CreateFromUrl(mscorlib::System::String url);
					static mscorlib::System::Security::Policy::Zone  CreateFromUrl(const char *url);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_SecurityZone)) mscorlib::System::Security::SecurityZone::__ENUM__  SecurityZone;

					//Get Set Properties Methods
					//	Get:SecurityZone
					mscorlib::System::Security::SecurityZone::__ENUM__  get_SecurityZone() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
