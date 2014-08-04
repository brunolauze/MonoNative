#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_WINDOWSIDENTITY_H

#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsIdentity.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsAccountType.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/mscorlib_System_IDisposable.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_TokenImpersonationLevel.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_TokenAccessLevels.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class WindowsImpersonationContext;
				class IdentityReferenceCollection;
				class SecurityIdentifier;
				

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
			namespace Claims
			{

				class Claim;
				

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
			namespace Principal
			{

				class WindowsIdentity
					: public mscorlib::System::Security::Claims::ClaimsIdentity
					, public virtual mscorlib::System::Runtime::Serialization::ISerializable
					, public virtual mscorlib::System::IDisposable
					, public virtual mscorlib::System::Security::Principal::IIdentity
					, public virtual mscorlib::System::Runtime::Serialization::IDeserializationCallback
				{
				public:
					WindowsIdentity(mscorlib::System::IntPtr userToken)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameters__[0] = (MonoObject*)userToken;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 1, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::System::IntPtr userToken, mscorlib::System::String type)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)userToken;
						__parameters__[1] = (MonoObject*)type;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 2, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::System::IntPtr userToken, mscorlib::System::String type, mscorlib::System::Security::Principal::WindowsAccountType::__ENUM__ acctType)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Principal", "WindowsAccountType");
						__parameters__[0] = (MonoObject*)userToken;
						__parameters__[1] = (MonoObject*)type;
						__parameters__[2] = reinterpret_cast<void*>(acctType);
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 3, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::System::IntPtr userToken, mscorlib::System::String type, mscorlib::System::Security::Principal::WindowsAccountType::__ENUM__ acctType, mscorlib::System::Boolean isAuthenticated)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Principal", "WindowsAccountType");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Boolean");
						__parameters__[0] = (MonoObject*)userToken;
						__parameters__[1] = (MonoObject*)type;
						__parameters__[2] = reinterpret_cast<void*>(acctType);
						__parameters__[3] = reinterpret_cast<void*>(isAuthenticated);
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 4, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::System::String sUserPrincipalName)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)sUserPrincipalName;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 1, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::System::String sUserPrincipalName, mscorlib::System::String type)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)sUserPrincipalName;
						__parameters__[1] = (MonoObject*)type;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 2, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
					: mscorlib::System::Security::Claims::ClaimsIdentity(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.WindowsIdentity"))
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Serialization", "SerializationInfo");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Runtime.Serialization", "StreamingContext");
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "WindowsIdentity", 2, __parameter_types__, __parameters__);
					};
				
					WindowsIdentity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Claims::ClaimsIdentity(nativeTypeInfo)
					, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
					, mscorlib::System::IDisposable(NULL)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(NULL)
					{
					};
				
					WindowsIdentity(MonoObject *nativeObject)
					: mscorlib::System::Security::Claims::ClaimsIdentity(nativeObject)
					, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
					, mscorlib::System::IDisposable(nativeObject)
					, mscorlib::System::Security::Principal::IIdentity(nativeObject)
					, mscorlib::System::Runtime::Serialization::IDeserializationCallback(nativeObject)
					{
					};
				
					~WindowsIdentity()
					{
					};
				

					WindowsIdentity & operator=(WindowsIdentity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  Dispose();
					static mscorlib::System::Security::Principal::WindowsIdentity  GetAnonymous();
					static mscorlib::System::Security::Principal::WindowsIdentity  GetCurrent();
					static mscorlib::System::Security::Principal::WindowsIdentity  GetCurrent(mscorlib::System::Boolean ifImpersonating);
					static mscorlib::System::Security::Principal::WindowsIdentity  GetCurrent(mscorlib::System::Security::Principal::TokenAccessLevels::__ENUM__ desiredAccess);
					virtual mscorlib::System::Security::Principal::WindowsImpersonationContext  Impersonate();
					static mscorlib::System::Security::Principal::WindowsImpersonationContext  Impersonate(mscorlib::System::IntPtr userToken);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AuthenticationType)) mscorlib::System::String  AuthenticationType;
					__declspec(property(get=get_IsAnonymous)) mscorlib::System::Boolean  IsAnonymous;
					__declspec(property(get=get_IsAuthenticated)) mscorlib::System::Boolean  IsAuthenticated;
					__declspec(property(get=get_IsGuest)) mscorlib::System::Boolean  IsGuest;
					__declspec(property(get=get_IsSystem)) mscorlib::System::Boolean  IsSystem;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_Token)) mscorlib::System::IntPtr  Token;
					__declspec(property(get=get_Groups)) mscorlib::System::Security::Principal::IdentityReferenceCollection  Groups;
					__declspec(property(get=get_ImpersonationLevel)) mscorlib::System::Security::Principal::TokenImpersonationLevel::__ENUM__  ImpersonationLevel;
					__declspec(property(get=get_Owner)) mscorlib::System::Security::Principal::SecurityIdentifier  Owner;
					__declspec(property(get=get_User)) mscorlib::System::Security::Principal::SecurityIdentifier  User;
					__declspec(property(get=get_Actor, put=set_Actor)) mscorlib::System::Security::Claims::ClaimsIdentity  Actor;
					__declspec(property(get=get_BootstrapContext, put=set_BootstrapContext)) mscorlib::System::Object  BootstrapContext;
					__declspec(property(get=get_Label, put=set_Label)) mscorlib::System::String  Label;
					__declspec(property(get=get_NameClaimType, put=set_NameClaimType)) mscorlib::System::String  NameClaimType;
					__declspec(property(get=get_RoleClaimType, put=set_RoleClaimType)) mscorlib::System::String  RoleClaimType;
					__declspec(property(get=get_Claims)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  Claims;

					//Get Set Properties Methods
					//	Get:AuthenticationType
					mscorlib::System::String  get_AuthenticationType();

					//	Get:IsAnonymous
					mscorlib::System::Boolean  get_IsAnonymous();

					//	Get:IsAuthenticated
					mscorlib::System::Boolean  get_IsAuthenticated();

					//	Get:IsGuest
					mscorlib::System::Boolean  get_IsGuest();

					//	Get:IsSystem
					mscorlib::System::Boolean  get_IsSystem();

					//	Get:Name
					mscorlib::System::String  get_Name();

					//	Get:Token
					mscorlib::System::IntPtr  get_Token();

					//	Get:Groups
					mscorlib::System::Security::Principal::IdentityReferenceCollection  get_Groups();

					//	Get:ImpersonationLevel
					mscorlib::System::Security::Principal::TokenImpersonationLevel::__ENUM__  get_ImpersonationLevel();

					//	Get:Owner
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Owner();

					//	Get:User
					mscorlib::System::Security::Principal::SecurityIdentifier  get_User();

					//	Get/Set:Actor
					mscorlib::System::Security::Claims::ClaimsIdentity  get_Actor();
					void set_Actor(mscorlib::System::Security::Claims::ClaimsIdentity  value);

					//	Get/Set:BootstrapContext
					mscorlib::System::Object  get_BootstrapContext();
					void set_BootstrapContext(mscorlib::System::Object  value);

					//	Get/Set:Label
					mscorlib::System::String  get_Label();
					void set_Label(mscorlib::System::String  value);

					//	Get/Set:NameClaimType
					mscorlib::System::String  get_NameClaimType();
					void set_NameClaimType(mscorlib::System::String  value);

					//	Get/Set:RoleClaimType
					mscorlib::System::String  get_RoleClaimType();
					void set_RoleClaimType(mscorlib::System::String  value);

					//	Get:Claims
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  get_Claims();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
