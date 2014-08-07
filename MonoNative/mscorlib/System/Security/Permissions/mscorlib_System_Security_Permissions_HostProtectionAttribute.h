#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_HOSTPROTECTIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_HOSTPROTECTIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_HostProtectionResource.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
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
			namespace Permissions
			{

				class HostProtectionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					HostProtectionAttribute()
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.HostProtectionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "HostProtectionAttribute");
					};
				
					HostProtectionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.HostProtectionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						mscorlib::System::Int32 __param_action__ = action;
						__parameters__[0] = &__param_action__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					HostProtectionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					HostProtectionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~HostProtectionAttribute()
					{
					};
				

					HostProtectionAttribute & operator=(HostProtectionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(HostProtectionAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ExternalProcessMgmt, put=set_ExternalProcessMgmt)) mscorlib::System::Boolean  ExternalProcessMgmt;
					__declspec(property(get=get_ExternalThreading, put=set_ExternalThreading)) mscorlib::System::Boolean  ExternalThreading;
					__declspec(property(get=get_MayLeakOnAbort, put=set_MayLeakOnAbort)) mscorlib::System::Boolean  MayLeakOnAbort;
					__declspec(property(get=get_SecurityInfrastructure, put=set_SecurityInfrastructure)) mscorlib::System::Boolean  SecurityInfrastructure;
					__declspec(property(get=get_SelfAffectingProcessMgmt, put=set_SelfAffectingProcessMgmt)) mscorlib::System::Boolean  SelfAffectingProcessMgmt;
					__declspec(property(get=get_SelfAffectingThreading, put=set_SelfAffectingThreading)) mscorlib::System::Boolean  SelfAffectingThreading;
					__declspec(property(get=get_SharedState, put=set_SharedState)) mscorlib::System::Boolean  SharedState;
					__declspec(property(get=get_Synchronization, put=set_Synchronization)) mscorlib::System::Boolean  Synchronization;
					__declspec(property(get=get_UI, put=set_UI)) mscorlib::System::Boolean  UI;
					__declspec(property(get=get_Resources, put=set_Resources)) mscorlib::System::Security::Permissions::HostProtectionResource::__ENUM__  Resources;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:ExternalProcessMgmt
					mscorlib::System::Boolean  get_ExternalProcessMgmt() const;
					void set_ExternalProcessMgmt(mscorlib::System::Boolean  value);

					//	Get/Set:ExternalThreading
					mscorlib::System::Boolean  get_ExternalThreading() const;
					void set_ExternalThreading(mscorlib::System::Boolean  value);

					//	Get/Set:MayLeakOnAbort
					mscorlib::System::Boolean  get_MayLeakOnAbort() const;
					void set_MayLeakOnAbort(mscorlib::System::Boolean  value);

					//	Get/Set:SecurityInfrastructure
					mscorlib::System::Boolean  get_SecurityInfrastructure() const;
					void set_SecurityInfrastructure(mscorlib::System::Boolean  value);

					//	Get/Set:SelfAffectingProcessMgmt
					mscorlib::System::Boolean  get_SelfAffectingProcessMgmt() const;
					void set_SelfAffectingProcessMgmt(mscorlib::System::Boolean  value);

					//	Get/Set:SelfAffectingThreading
					mscorlib::System::Boolean  get_SelfAffectingThreading() const;
					void set_SelfAffectingThreading(mscorlib::System::Boolean  value);

					//	Get/Set:SharedState
					mscorlib::System::Boolean  get_SharedState() const;
					void set_SharedState(mscorlib::System::Boolean  value);

					//	Get/Set:Synchronization
					mscorlib::System::Boolean  get_Synchronization() const;
					void set_Synchronization(mscorlib::System::Boolean  value);

					//	Get/Set:UI
					mscorlib::System::Boolean  get_UI() const;
					void set_UI(mscorlib::System::Boolean  value);

					//	Get/Set:Resources
					mscorlib::System::Security::Permissions::HostProtectionResource::__ENUM__  get_Resources() const;
					void set_Resources(mscorlib::System::Security::Permissions::HostProtectionResource::__ENUM__  value);

					//	Get/Set:Unrestricted
					mscorlib::System::Boolean  get_Unrestricted() const;
					void set_Unrestricted(mscorlib::System::Boolean  value);

					//	Get/Set:Action
					mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  get_Action() const;
					void set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
