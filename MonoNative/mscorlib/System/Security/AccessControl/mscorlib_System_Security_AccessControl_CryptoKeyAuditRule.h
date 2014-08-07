#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_CRYPTOKEYAUDITRULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_CRYPTOKEYAUDITRULE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeyRights.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
			namespace AccessControl
			{

				class CryptoKeyAuditRule
					: public mscorlib::System::Security::AccessControl::AuditRuleBase
				{
				public:
					CryptoKeyAuditRule(mscorlib::System::Security::Principal::IdentityReference identity, mscorlib::System::Security::AccessControl::CryptoKeyRights::__ENUM__ cryptoKeyRights, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CryptoKeyAuditRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "CryptoKeyRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AuditFlags");
						__parameters__[0] = (MonoObject*)identity;
						mscorlib::System::Int32 __param_cryptoKeyRights__ = cryptoKeyRights;
						__parameters__[1] = &__param_cryptoKeyRights__;
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CryptoKeyAuditRule", 3, __parameter_types__, __parameters__);
					};
				
					CryptoKeyAuditRule(mscorlib::System::String identity, mscorlib::System::Security::AccessControl::CryptoKeyRights::__ENUM__ cryptoKeyRights, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CryptoKeyAuditRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "CryptoKeyRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AuditFlags");
						__parameters__[0] = (MonoObject*)identity;
						mscorlib::System::Int32 __param_cryptoKeyRights__ = cryptoKeyRights;
						__parameters__[1] = &__param_cryptoKeyRights__;
						mscorlib::System::Int32 __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CryptoKeyAuditRule", 3, __parameter_types__, __parameters__);
					};
				
					CryptoKeyAuditRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(nativeTypeInfo)
					{
					};
				
					CryptoKeyAuditRule(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(nativeObject)
					{
					};
				
					~CryptoKeyAuditRule()
					{
					};
				

					CryptoKeyAuditRule & operator=(CryptoKeyAuditRule &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(CryptoKeyAuditRule &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CryptoKeyRights)) mscorlib::System::Security::AccessControl::CryptoKeyRights::__ENUM__  CryptoKeyRights;
					__declspec(property(get=get_AuditFlags)) mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  AuditFlags;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:CryptoKeyRights
					mscorlib::System::Security::AccessControl::CryptoKeyRights::__ENUM__  get_CryptoKeyRights() const;

					//	Get:AuditFlags
					mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  get_AuditFlags() const;

					//	Get:IdentityReference
					mscorlib::System::Security::Principal::IdentityReference  get_IdentityReference() const;

					//	Get:InheritanceFlags
					mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  get_InheritanceFlags() const;

					//	Get:IsInherited
					mscorlib::System::Boolean  get_IsInherited() const;

					//	Get:PropagationFlags
					mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  get_PropagationFlags() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
