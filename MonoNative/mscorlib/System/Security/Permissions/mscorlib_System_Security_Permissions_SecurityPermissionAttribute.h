#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityPermissionFlag.h>
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

				class SecurityPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					SecurityPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.SecurityPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						mscorlib::System::Int32 __param_action__ = action;
						__parameters__[0] = &__param_action__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					SecurityPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					SecurityPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~SecurityPermissionAttribute()
					{
					};
				

					SecurityPermissionAttribute & operator=(SecurityPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Assertion, put=set_Assertion)) mscorlib::System::Boolean  Assertion;
					__declspec(property(get=get_BindingRedirects, put=set_BindingRedirects)) mscorlib::System::Boolean  BindingRedirects;
					__declspec(property(get=get_ControlAppDomain, put=set_ControlAppDomain)) mscorlib::System::Boolean  ControlAppDomain;
					__declspec(property(get=get_ControlDomainPolicy, put=set_ControlDomainPolicy)) mscorlib::System::Boolean  ControlDomainPolicy;
					__declspec(property(get=get_ControlEvidence, put=set_ControlEvidence)) mscorlib::System::Boolean  ControlEvidence;
					__declspec(property(get=get_ControlPolicy, put=set_ControlPolicy)) mscorlib::System::Boolean  ControlPolicy;
					__declspec(property(get=get_ControlPrincipal, put=set_ControlPrincipal)) mscorlib::System::Boolean  ControlPrincipal;
					__declspec(property(get=get_ControlThread, put=set_ControlThread)) mscorlib::System::Boolean  ControlThread;
					__declspec(property(get=get_Execution, put=set_Execution)) mscorlib::System::Boolean  Execution;
					__declspec(property(get=get_Infrastructure, put=set_Infrastructure)) mscorlib::System::Boolean  Infrastructure;
					__declspec(property(get=get_RemotingConfiguration, put=set_RemotingConfiguration)) mscorlib::System::Boolean  RemotingConfiguration;
					__declspec(property(get=get_SerializationFormatter, put=set_SerializationFormatter)) mscorlib::System::Boolean  SerializationFormatter;
					__declspec(property(get=get_SkipVerification, put=set_SkipVerification)) mscorlib::System::Boolean  SkipVerification;
					__declspec(property(get=get_UnmanagedCode, put=set_UnmanagedCode)) mscorlib::System::Boolean  UnmanagedCode;
					__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  Flags;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:Assertion
					mscorlib::System::Boolean  get_Assertion() const;
					void set_Assertion(mscorlib::System::Boolean  value);

					//	Get/Set:BindingRedirects
					mscorlib::System::Boolean  get_BindingRedirects() const;
					void set_BindingRedirects(mscorlib::System::Boolean  value);

					//	Get/Set:ControlAppDomain
					mscorlib::System::Boolean  get_ControlAppDomain() const;
					void set_ControlAppDomain(mscorlib::System::Boolean  value);

					//	Get/Set:ControlDomainPolicy
					mscorlib::System::Boolean  get_ControlDomainPolicy() const;
					void set_ControlDomainPolicy(mscorlib::System::Boolean  value);

					//	Get/Set:ControlEvidence
					mscorlib::System::Boolean  get_ControlEvidence() const;
					void set_ControlEvidence(mscorlib::System::Boolean  value);

					//	Get/Set:ControlPolicy
					mscorlib::System::Boolean  get_ControlPolicy() const;
					void set_ControlPolicy(mscorlib::System::Boolean  value);

					//	Get/Set:ControlPrincipal
					mscorlib::System::Boolean  get_ControlPrincipal() const;
					void set_ControlPrincipal(mscorlib::System::Boolean  value);

					//	Get/Set:ControlThread
					mscorlib::System::Boolean  get_ControlThread() const;
					void set_ControlThread(mscorlib::System::Boolean  value);

					//	Get/Set:Execution
					mscorlib::System::Boolean  get_Execution() const;
					void set_Execution(mscorlib::System::Boolean  value);

					//	Get/Set:Infrastructure
					mscorlib::System::Boolean  get_Infrastructure() const;
					void set_Infrastructure(mscorlib::System::Boolean  value);

					//	Get/Set:RemotingConfiguration
					mscorlib::System::Boolean  get_RemotingConfiguration() const;
					void set_RemotingConfiguration(mscorlib::System::Boolean  value);

					//	Get/Set:SerializationFormatter
					mscorlib::System::Boolean  get_SerializationFormatter() const;
					void set_SerializationFormatter(mscorlib::System::Boolean  value);

					//	Get/Set:SkipVerification
					mscorlib::System::Boolean  get_SkipVerification() const;
					void set_SkipVerification(mscorlib::System::Boolean  value);

					//	Get/Set:UnmanagedCode
					mscorlib::System::Boolean  get_UnmanagedCode() const;
					void set_UnmanagedCode(mscorlib::System::Boolean  value);

					//	Get/Set:Flags
					mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  get_Flags() const;
					void set_Flags(mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  value);

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
