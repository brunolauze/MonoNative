#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_PERMISSIONREQUESTEVIDENCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_PERMISSIONREQUESTEVIDENCE_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class PermissionRequestEvidence
					: public mscorlib::System::Security::Policy::EvidenceBase
				{
				public:
					PermissionRequestEvidence(mscorlib::System::Security::PermissionSet request, mscorlib::System::Security::PermissionSet optional, mscorlib::System::Security::PermissionSet denied)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.PermissionRequestEvidence"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
						__parameters__[0] = (MonoObject*)request;
						__parameters__[1] = (MonoObject*)optional;
						__parameters__[2] = (MonoObject*)denied;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "PermissionRequestEvidence", 3, __parameter_types__, __parameters__);
					};
				
					PermissionRequestEvidence(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					{
					};
				
					PermissionRequestEvidence(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					{
					};
				
					~PermissionRequestEvidence()
					{
					};
				

					PermissionRequestEvidence & operator=(PermissionRequestEvidence &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Security::Policy::PermissionRequestEvidence  Copy();
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_DeniedPermissions)) mscorlib::System::Security::PermissionSet  DeniedPermissions;
					__declspec(property(get=get_OptionalPermissions)) mscorlib::System::Security::PermissionSet  OptionalPermissions;
					__declspec(property(get=get_RequestedPermissions)) mscorlib::System::Security::PermissionSet  RequestedPermissions;

					//Get Set Properties Methods
					//	Get:DeniedPermissions
					mscorlib::System::Security::PermissionSet  get_DeniedPermissions() const;

					//	Get:OptionalPermissions
					mscorlib::System::Security::PermissionSet  get_OptionalPermissions() const;

					//	Get:RequestedPermissions
					mscorlib::System::Security::PermissionSet  get_RequestedPermissions() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
