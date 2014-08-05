#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONTRUST_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_APPLICATIONTRUST_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IList_1.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class StrongName;
				class PolicyStatement;
				

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

			class SecurityElement;
			

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
			namespace Policy
			{

				class ApplicationTrust
					: public mscorlib::System::Security::Policy::EvidenceBase
					, public virtual mscorlib::System::Security::ISecurityEncodable
				{
				public:
					ApplicationTrust()
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.ApplicationTrust"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "ApplicationTrust");
					};
				
					ApplicationTrust(mscorlib::System::ApplicationIdentity applicationIdentity)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.ApplicationTrust"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "ApplicationIdentity");
						__parameters__[0] = (MonoObject*)applicationIdentity;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "ApplicationTrust", 1, __parameter_types__, __parameters__);
					};
				
					ApplicationTrust(mscorlib::System::Security::PermissionSet defaultGrantSet, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Policy::StrongName> fullTrustAssemblies)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.ApplicationTrust"))
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security", "PermissionSet");
						MonoType *__generic_types__fullTrustAssemblies__[1];
						__generic_types__fullTrustAssemblies__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__fullTrustAssemblies__);
						__parameters__[0] = (MonoObject*)defaultGrantSet;
						__parameters__[1] = (MonoObject*)fullTrustAssemblies;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "ApplicationTrust", 2, __parameter_types__, __parameters__);
					};
				
					ApplicationTrust(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					, mscorlib::System::Security::ISecurityEncodable(NULL)
					{
					};
				
					ApplicationTrust(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					, mscorlib::System::Security::ISecurityEncodable(nativeObject)
					{
					};
				
					~ApplicationTrust()
					{
					};
				

					ApplicationTrust & operator=(ApplicationTrust &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  FromXml(mscorlib::System::Security::SecurityElement element);
					virtual mscorlib::System::Security::SecurityElement  ToXml();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ApplicationIdentity, put=set_ApplicationIdentity)) mscorlib::System::ApplicationIdentity  ApplicationIdentity;
					__declspec(property(get=get_DefaultGrantSet, put=set_DefaultGrantSet)) mscorlib::System::Security::Policy::PolicyStatement  DefaultGrantSet;
					__declspec(property(get=get_ExtraInfo, put=set_ExtraInfo)) mscorlib::System::Object  ExtraInfo;
					__declspec(property(get=get_IsApplicationTrustedToRun, put=set_IsApplicationTrustedToRun)) mscorlib::System::Boolean  IsApplicationTrustedToRun;
					__declspec(property(get=get_Persist, put=set_Persist)) mscorlib::System::Boolean  Persist;
					__declspec(property(get=get_FullTrustAssemblies)) mscorlib::System::Collections::Generic::IList<mscorlib::System::Security::Policy::StrongName>  FullTrustAssemblies;

					//Get Set Properties Methods
					//	Get/Set:ApplicationIdentity
					mscorlib::System::ApplicationIdentity  get_ApplicationIdentity() const;
					void set_ApplicationIdentity(mscorlib::System::ApplicationIdentity  value);

					//	Get/Set:DefaultGrantSet
					mscorlib::System::Security::Policy::PolicyStatement  get_DefaultGrantSet() const;
					void set_DefaultGrantSet(mscorlib::System::Security::Policy::PolicyStatement  value);

					//	Get/Set:ExtraInfo
					mscorlib::System::Object  get_ExtraInfo() const;
					void set_ExtraInfo(mscorlib::System::Object  value);

					//	Get/Set:IsApplicationTrustedToRun
					mscorlib::System::Boolean  get_IsApplicationTrustedToRun() const;
					void set_IsApplicationTrustedToRun(mscorlib::System::Boolean  value);

					//	Get/Set:Persist
					mscorlib::System::Boolean  get_Persist() const;
					void set_Persist(mscorlib::System::Boolean  value);

					//	Get:FullTrustAssemblies
					mscorlib::System::Collections::Generic::IList<mscorlib::System::Security::Policy::StrongName>  get_FullTrustAssemblies() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
