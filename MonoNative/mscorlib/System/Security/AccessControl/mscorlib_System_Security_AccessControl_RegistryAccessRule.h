#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_REGISTRYACCESSRULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_REGISTRYACCESSRULE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RegistryRights.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
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

				class RegistryAccessRule
					: public mscorlib::System::Security::AccessControl::AccessRuleBase
				{
				public:
					RegistryAccessRule(mscorlib::System::Security::Principal::IdentityReference identity, mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__ registryRights, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RegistryAccessRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "RegistryRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						mscorlib::System::Int32 __param_registryRights__ = registryRights;
						__parameters__[1] = &__param_registryRights__;
						mscorlib::System::Int32 __param_type__ = type;
						__parameters__[2] = &__param_type__;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RegistryAccessRule", 3, __parameter_types__, __parameters__);
					};
				
					RegistryAccessRule(mscorlib::System::String identity, mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__ registryRights, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RegistryAccessRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "RegistryRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						mscorlib::System::Int32 __param_registryRights__ = registryRights;
						__parameters__[1] = &__param_registryRights__;
						mscorlib::System::Int32 __param_type__ = type;
						__parameters__[2] = &__param_type__;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RegistryAccessRule", 3, __parameter_types__, __parameters__);
					};
				
					RegistryAccessRule(mscorlib::System::Security::Principal::IdentityReference identity, mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__ registryRights, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RegistryAccessRule"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "RegistryRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "InheritanceFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "PropagationFlags");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						mscorlib::System::Int32 __param_registryRights__ = registryRights;
						__parameters__[1] = &__param_registryRights__;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[2] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[3] = &__param_propagationFlags__;
						mscorlib::System::Int32 __param_type__ = type;
						__parameters__[4] = &__param_type__;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RegistryAccessRule", 5, __parameter_types__, __parameters__);
					};
				
					RegistryAccessRule(mscorlib::System::String identity, mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__ registryRights, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RegistryAccessRule"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "RegistryRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "InheritanceFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "PropagationFlags");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						mscorlib::System::Int32 __param_registryRights__ = registryRights;
						__parameters__[1] = &__param_registryRights__;
						mscorlib::System::Int32 __param_inheritanceFlags__ = inheritanceFlags;
						__parameters__[2] = &__param_inheritanceFlags__;
						mscorlib::System::Int32 __param_propagationFlags__ = propagationFlags;
						__parameters__[3] = &__param_propagationFlags__;
						mscorlib::System::Int32 __param_type__ = type;
						__parameters__[4] = &__param_type__;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RegistryAccessRule", 5, __parameter_types__, __parameters__);
					};
				
					RegistryAccessRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(nativeTypeInfo)
					{
					};
				
					RegistryAccessRule(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(nativeObject)
					{
					};
				
					~RegistryAccessRule()
					{
					};
				

					RegistryAccessRule & operator=(RegistryAccessRule &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_RegistryRights)) mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__  RegistryRights;
					__declspec(property(get=get_AccessControlType)) mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  AccessControlType;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:RegistryRights
					mscorlib::System::Security::AccessControl::RegistryRights::__ENUM__  get_RegistryRights() const;

					//	Get:AccessControlType
					mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  get_AccessControlType() const;

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
