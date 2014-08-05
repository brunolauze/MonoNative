#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMSIDENTITY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>

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
			namespace Claims
			{

				class ClaimsIdentity
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::Principal::IIdentity
				{
				public:
					ClaimsIdentity()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity");
					};
				
					ClaimsIdentity(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						MonoType *__generic_types__claims__[1];
						__generic_types__claims__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__claims__);
						__parameters__[0] = (MonoObject*)claims;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 1, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::String authenticationType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)authenticationType;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 1, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims, mscorlib::System::String authenticationType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						MonoType *__generic_types__claims__[1];
						__generic_types__claims__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__claims__);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)claims;
						__parameters__[1] = (MonoObject*)authenticationType;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 2, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::String authenticationType, mscorlib::System::String nameType, mscorlib::System::String roleType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)authenticationType;
						__parameters__[1] = (MonoObject*)nameType;
						__parameters__[2] = (MonoObject*)roleType;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 3, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::Security::Principal::IIdentity identity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IIdentity");
						__parameters__[0] = (MonoObject*)identity;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 1, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims, mscorlib::System::String authenticationType, mscorlib::System::String nameType, mscorlib::System::String roleType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						MonoType *__generic_types__claims__[1];
						__generic_types__claims__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__claims__);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)claims;
						__parameters__[1] = (MonoObject*)authenticationType;
						__parameters__[2] = (MonoObject*)nameType;
						__parameters__[3] = (MonoObject*)roleType;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 4, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::Security::Principal::IIdentity identity, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IIdentity");
						MonoType *__generic_types__claims__[1];
						__generic_types__claims__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__claims__);
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = (MonoObject*)claims;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 2, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::System::Security::Principal::IIdentity identity, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims, mscorlib::System::String authenticationType, mscorlib::System::String nameType, mscorlib::System::String roleType)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsIdentity"))
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IIdentity");
						MonoType *__generic_types__claims__[1];
						__generic_types__claims__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__claims__);
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = (MonoObject*)claims;
						__parameters__[2] = (MonoObject*)authenticationType;
						__parameters__[3] = (MonoObject*)nameType;
						__parameters__[4] = (MonoObject*)roleType;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsIdentity", 5, __parameter_types__, __parameters__);
					};
				
					ClaimsIdentity(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::Principal::IIdentity(NULL)
					{
					};
				
					ClaimsIdentity(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::Principal::IIdentity(nativeObject)
					{
					};
				
					~ClaimsIdentity()
					{
					};
				

					ClaimsIdentity & operator=(ClaimsIdentity &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  AddClaim(mscorlib::System::Security::Claims::Claim claim);
					virtual void  AddClaims(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims);
					virtual mscorlib::System::Security::Claims::ClaimsIdentity  Clone();
					virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  FindAll(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match);
					virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  FindAll(mscorlib::System::String type);
					virtual mscorlib::System::Security::Claims::Claim  FindFirst(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match);
					virtual mscorlib::System::Security::Claims::Claim  FindFirst(mscorlib::System::String type);
					virtual mscorlib::System::Boolean  HasClaim(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match);
					virtual mscorlib::System::Boolean  HasClaim(mscorlib::System::String type, mscorlib::System::String value);
					virtual void  RemoveClaim(mscorlib::System::Security::Claims::Claim claim);
					virtual mscorlib::System::Boolean  TryRemoveClaim(mscorlib::System::Security::Claims::Claim claim);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Actor, put=set_Actor)) mscorlib::System::Security::Claims::ClaimsIdentity  Actor;
					__declspec(property(get=get_AuthenticationType)) mscorlib::System::String  AuthenticationType;
					__declspec(property(get=get_BootstrapContext, put=set_BootstrapContext)) mscorlib::System::Object  BootstrapContext;
					__declspec(property(get=get_Label, put=set_Label)) mscorlib::System::String  Label;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_NameClaimType, put=set_NameClaimType)) mscorlib::System::String  NameClaimType;
					__declspec(property(get=get_RoleClaimType, put=set_RoleClaimType)) mscorlib::System::String  RoleClaimType;
					__declspec(property(get=get_Claims)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  Claims;
					__declspec(property(get=get_IsAuthenticated)) mscorlib::System::Boolean  IsAuthenticated;

					//Public Static Fields
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimsIdentity> DefaultNameClaimType;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimsIdentity> DefaultRoleClaimType;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimsIdentity> DefaultIssuer;

					//Get Set Properties Methods
					//	Get/Set:Actor
					mscorlib::System::Security::Claims::ClaimsIdentity  get_Actor() const;
					void set_Actor(mscorlib::System::Security::Claims::ClaimsIdentity  value);

					//	Get:AuthenticationType
					mscorlib::System::String  get_AuthenticationType() const;

					//	Get/Set:BootstrapContext
					mscorlib::System::Object  get_BootstrapContext() const;
					void set_BootstrapContext(mscorlib::System::Object  value);

					//	Get/Set:Label
					mscorlib::System::String  get_Label() const;
					void set_Label(mscorlib::System::String  value);

					//	Get:Name
					mscorlib::System::String  get_Name() const;

					//	Get/Set:NameClaimType
					mscorlib::System::String  get_NameClaimType() const;
					void set_NameClaimType(mscorlib::System::String  value);

					//	Get/Set:RoleClaimType
					mscorlib::System::String  get_RoleClaimType() const;
					void set_RoleClaimType(mscorlib::System::String  value);

					//	Get:Claims
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  get_Claims() const;

					//	Get:IsAuthenticated
					mscorlib::System::Boolean  get_IsAuthenticated() const;

					//	Get/Set:DefaultNameClaimType
					static mscorlib::System::String  get_DefaultNameClaimType();
					static void set_DefaultNameClaimType(mscorlib::System::String  value);

					//	Get/Set:DefaultRoleClaimType
					static mscorlib::System::String  get_DefaultRoleClaimType();
					static void set_DefaultRoleClaimType(mscorlib::System::String  value);

					//	Get/Set:DefaultIssuer
					static mscorlib::System::String  get_DefaultIssuer();
					static void set_DefaultIssuer(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
