#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_STRONGNAME_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_STRONGNAME_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_StrongNamePublicKeyBlob.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Version.h>
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

				class StrongName
					: public mscorlib::System::Security::Policy::EvidenceBase
					, public virtual mscorlib::System::Security::Policy::IIdentityPermissionFactory
				{
				public:
					StrongName(mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob blob, mscorlib::System::String name, mscorlib::System::Version version)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.StrongName"))
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "StrongNamePublicKeyBlob");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Version");
						__parameters__[0] = (MonoObject*)blob;
						__parameters__[1] = (MonoObject*)name;
						__parameters__[2] = (MonoObject*)version;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "StrongName", 3, __parameter_types__, __parameters__);
					};
				
					StrongName(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
					};
				
					StrongName(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(nativeObject)
					{
					};
				
					~StrongName()
					{
					};
				

					StrongName & operator=(StrongName &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Object  Copy();
					virtual mscorlib::System::Security::IPermission  CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_PublicKey)) mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  PublicKey;
					__declspec(property(get=get_Version)) mscorlib::System::Version  Version;

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get:PublicKey
					mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  get_PublicKey() const;

					//	Get:Version
					mscorlib::System::Version  get_Version() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
