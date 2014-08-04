#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSRULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSRULE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuthorizationRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IdentityReference;
				

			}
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
			namespace AccessControl
			{

				class AccessRuleBase
					: public mscorlib::System::Security::AccessControl::AuthorizationRule
				{
				public:
					AccessRuleBase(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AuthorizationRule(nativeTypeInfo)
					{
					};
				
					AccessRuleBase(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AuthorizationRule(nativeObject)
					{
					};
				
					~AccessRuleBase()
					{
					};
				

					AccessRuleBase & operator=(AccessRuleBase &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AccessControlType)) mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  AccessControlType;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:AccessControlType
					mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  get_AccessControlType();

					//	Get:IdentityReference
					mscorlib::System::Security::Principal::IdentityReference  get_IdentityReference();

					//	Get:InheritanceFlags
					mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  get_InheritanceFlags();

					//	Get:IsInherited
					mscorlib::System::Boolean  get_IsInherited();

					//	Get:PropagationFlags
					mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  get_PropagationFlags();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
