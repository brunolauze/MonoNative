#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_GACINSTALLED_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_GACINSTALLED_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
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

				class GacInstalled
					: public mscorlib::System::Security::Policy::EvidenceBase
					, public virtual mscorlib::System::Security::Policy::IIdentityPermissionFactory
				{
				public:
					GacInstalled()
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.GacInstalled"))
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "GacInstalled");
					};
				
					GacInstalled(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
					};
				
					GacInstalled(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(nativeObject)
					{
					};
				
					~GacInstalled()
					{
					};
				

					GacInstalled & operator=(GacInstalled &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(GacInstalled &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					mscorlib::System::Object  Copy();
					virtual mscorlib::System::Security::IPermission  CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
