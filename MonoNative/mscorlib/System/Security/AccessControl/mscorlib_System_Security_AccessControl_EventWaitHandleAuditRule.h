#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_EVENTWAITHANDLEAUDITRULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_EVENTWAITHANDLEAUDITRULE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_EventWaitHandleRights.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

				class EventWaitHandleAuditRule
					: public mscorlib::System::Security::AccessControl::AuditRuleBase
				{
				public:
					EventWaitHandleAuditRule(mscorlib::System::Security::Principal::IdentityReference identity, mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__ eventRights, mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__ flags)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.EventWaitHandleAuditRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "EventWaitHandleRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AuditFlags");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = reinterpret_cast<void*>(eventRights);
						__parameters__[2] = reinterpret_cast<void*>(flags);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "EventWaitHandleAuditRule", 3, __parameter_types__, __parameters__);
					};
				
					EventWaitHandleAuditRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(nativeTypeInfo)
					{
					};
				
					EventWaitHandleAuditRule(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(nativeObject)
					{
					};
				
					~EventWaitHandleAuditRule()
					{
					};
				

					EventWaitHandleAuditRule & operator=(EventWaitHandleAuditRule &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_EventWaitHandleRights)) mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__  EventWaitHandleRights;
					__declspec(property(get=get_AuditFlags)) mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  AuditFlags;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:EventWaitHandleRights
					mscorlib::System::Security::AccessControl::EventWaitHandleRights::__ENUM__  get_EventWaitHandleRights();

					//	Get:AuditFlags
					mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  get_AuditFlags();

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
