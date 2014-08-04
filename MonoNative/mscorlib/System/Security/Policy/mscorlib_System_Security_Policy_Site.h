#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_SITE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICY_SITE_H

#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_EvidenceBase.h>
#include <mscorlib/System/mscorlib_System_String.h>
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

				class Site
					: public mscorlib::System::Security::Policy::EvidenceBase
					, public virtual mscorlib::System::Security::Policy::IIdentityPermissionFactory
				{
				public:
					Site(mscorlib::System::String name)
					: mscorlib::System::Security::Policy::EvidenceBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Policy.Site"))
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)name;
						__native_object__ = Global::New("mscorlib", "System.Security.Policy", "Site", 1, __parameter_types__, __parameters__);
					};
				
					Site(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeTypeInfo)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(NULL)
					{
					};
				
					Site(MonoObject *nativeObject)
					: mscorlib::System::Security::Policy::EvidenceBase(nativeObject)
					, mscorlib::System::Security::Policy::IIdentityPermissionFactory(nativeObject)
					{
					};
				
					~Site()
					{
					};
				

					Site & operator=(Site &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					static mscorlib::System::Security::Policy::Site  CreateFromUrl(mscorlib::System::String url);
					mscorlib::System::Object  Copy();
					virtual mscorlib::System::Security::IPermission  CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::String  ToString() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  get_Name();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
