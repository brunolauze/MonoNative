#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMTYPES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMTYPES_H

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
			namespace Claims
			{

				class ClaimTypes
					: public mscorlib::System::Object
				{
				public:
					ClaimTypes(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ClaimTypes(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ClaimTypes()
					{
					};
				

					ClaimTypes & operator=(ClaimTypes &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Actor;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Anonymous;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Authentication;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> AuthenticationInstant;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> AuthenticationMethod;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> AuthorizationDecision;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> ClaimsType2005Namespace;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> ClaimsType2009Namespace;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> ClaimsTypeNamespace;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> CookiePath;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Country;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> DateOfBirth;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> DenyOnlyPrimaryGroup;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> DenyOnlyPrimarySid;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> DenyOnlySid;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Dns;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Dsa;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Email;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Expiration;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Expired;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Gender;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> GivenName;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> GroupSid;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Hash;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> HomePhone;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> IsPersistent;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Locality;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> MobilePhone;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Name;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> NameIdentifier;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> OtherPhone;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> PostalCode;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> PPID;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> PrimaryGroupSid;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> PrimarySid;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Role;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Rsa;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> SerialNumber;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Sid;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Spn;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> StateOrProvince;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> StreetAddress;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Surname;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> System;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Thumbprint;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Upn;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Uri;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> UserData;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Version;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> Webpage;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> WindowsAccountName;
					static Property<mscorlib::System::String , mscorlib::System::Security::Claims::ClaimTypes> X500DistinguishedName;

					//	Get/Set:Actor
					static mscorlib::System::String  get_Actor();
					static void set_Actor(mscorlib::System::String  value);

					//	Get/Set:Anonymous
					static mscorlib::System::String  get_Anonymous();
					static void set_Anonymous(mscorlib::System::String  value);

					//	Get/Set:Authentication
					static mscorlib::System::String  get_Authentication();
					static void set_Authentication(mscorlib::System::String  value);

					//	Get/Set:AuthenticationInstant
					static mscorlib::System::String  get_AuthenticationInstant();
					static void set_AuthenticationInstant(mscorlib::System::String  value);

					//	Get/Set:AuthenticationMethod
					static mscorlib::System::String  get_AuthenticationMethod();
					static void set_AuthenticationMethod(mscorlib::System::String  value);

					//	Get/Set:AuthorizationDecision
					static mscorlib::System::String  get_AuthorizationDecision();
					static void set_AuthorizationDecision(mscorlib::System::String  value);

					//	Get/Set:ClaimsType2005Namespace
					static mscorlib::System::String  get_ClaimsType2005Namespace();
					static void set_ClaimsType2005Namespace(mscorlib::System::String  value);

					//	Get/Set:ClaimsType2009Namespace
					static mscorlib::System::String  get_ClaimsType2009Namespace();
					static void set_ClaimsType2009Namespace(mscorlib::System::String  value);

					//	Get/Set:ClaimsTypeNamespace
					static mscorlib::System::String  get_ClaimsTypeNamespace();
					static void set_ClaimsTypeNamespace(mscorlib::System::String  value);

					//	Get/Set:CookiePath
					static mscorlib::System::String  get_CookiePath();
					static void set_CookiePath(mscorlib::System::String  value);

					//	Get/Set:Country
					static mscorlib::System::String  get_Country();
					static void set_Country(mscorlib::System::String  value);

					//	Get/Set:DateOfBirth
					static mscorlib::System::String  get_DateOfBirth();
					static void set_DateOfBirth(mscorlib::System::String  value);

					//	Get/Set:DenyOnlyPrimaryGroup
					static mscorlib::System::String  get_DenyOnlyPrimaryGroup();
					static void set_DenyOnlyPrimaryGroup(mscorlib::System::String  value);

					//	Get/Set:DenyOnlyPrimarySid
					static mscorlib::System::String  get_DenyOnlyPrimarySid();
					static void set_DenyOnlyPrimarySid(mscorlib::System::String  value);

					//	Get/Set:DenyOnlySid
					static mscorlib::System::String  get_DenyOnlySid();
					static void set_DenyOnlySid(mscorlib::System::String  value);

					//	Get/Set:Dns
					static mscorlib::System::String  get_Dns();
					static void set_Dns(mscorlib::System::String  value);

					//	Get/Set:Dsa
					static mscorlib::System::String  get_Dsa();
					static void set_Dsa(mscorlib::System::String  value);

					//	Get/Set:Email
					static mscorlib::System::String  get_Email();
					static void set_Email(mscorlib::System::String  value);

					//	Get/Set:Expiration
					static mscorlib::System::String  get_Expiration();
					static void set_Expiration(mscorlib::System::String  value);

					//	Get/Set:Expired
					static mscorlib::System::String  get_Expired();
					static void set_Expired(mscorlib::System::String  value);

					//	Get/Set:Gender
					static mscorlib::System::String  get_Gender();
					static void set_Gender(mscorlib::System::String  value);

					//	Get/Set:GivenName
					static mscorlib::System::String  get_GivenName();
					static void set_GivenName(mscorlib::System::String  value);

					//	Get/Set:GroupSid
					static mscorlib::System::String  get_GroupSid();
					static void set_GroupSid(mscorlib::System::String  value);

					//	Get/Set:Hash
					static mscorlib::System::String  get_Hash();
					static void set_Hash(mscorlib::System::String  value);

					//	Get/Set:HomePhone
					static mscorlib::System::String  get_HomePhone();
					static void set_HomePhone(mscorlib::System::String  value);

					//	Get/Set:IsPersistent
					static mscorlib::System::String  get_IsPersistent();
					static void set_IsPersistent(mscorlib::System::String  value);

					//	Get/Set:Locality
					static mscorlib::System::String  get_Locality();
					static void set_Locality(mscorlib::System::String  value);

					//	Get/Set:MobilePhone
					static mscorlib::System::String  get_MobilePhone();
					static void set_MobilePhone(mscorlib::System::String  value);

					//	Get/Set:Name
					static mscorlib::System::String  get_Name();
					static void set_Name(mscorlib::System::String  value);

					//	Get/Set:NameIdentifier
					static mscorlib::System::String  get_NameIdentifier();
					static void set_NameIdentifier(mscorlib::System::String  value);

					//	Get/Set:OtherPhone
					static mscorlib::System::String  get_OtherPhone();
					static void set_OtherPhone(mscorlib::System::String  value);

					//	Get/Set:PostalCode
					static mscorlib::System::String  get_PostalCode();
					static void set_PostalCode(mscorlib::System::String  value);

					//	Get/Set:PPID
					static mscorlib::System::String  get_PPID();
					static void set_PPID(mscorlib::System::String  value);

					//	Get/Set:PrimaryGroupSid
					static mscorlib::System::String  get_PrimaryGroupSid();
					static void set_PrimaryGroupSid(mscorlib::System::String  value);

					//	Get/Set:PrimarySid
					static mscorlib::System::String  get_PrimarySid();
					static void set_PrimarySid(mscorlib::System::String  value);

					//	Get/Set:Role
					static mscorlib::System::String  get_Role();
					static void set_Role(mscorlib::System::String  value);

					//	Get/Set:Rsa
					static mscorlib::System::String  get_Rsa();
					static void set_Rsa(mscorlib::System::String  value);

					//	Get/Set:SerialNumber
					static mscorlib::System::String  get_SerialNumber();
					static void set_SerialNumber(mscorlib::System::String  value);

					//	Get/Set:Sid
					static mscorlib::System::String  get_Sid();
					static void set_Sid(mscorlib::System::String  value);

					//	Get/Set:Spn
					static mscorlib::System::String  get_Spn();
					static void set_Spn(mscorlib::System::String  value);

					//	Get/Set:StateOrProvince
					static mscorlib::System::String  get_StateOrProvince();
					static void set_StateOrProvince(mscorlib::System::String  value);

					//	Get/Set:StreetAddress
					static mscorlib::System::String  get_StreetAddress();
					static void set_StreetAddress(mscorlib::System::String  value);

					//	Get/Set:Surname
					static mscorlib::System::String  get_Surname();
					static void set_Surname(mscorlib::System::String  value);

					//	Get/Set:System
					static mscorlib::System::String  get_System();
					static void set_System(mscorlib::System::String  value);

					//	Get/Set:Thumbprint
					static mscorlib::System::String  get_Thumbprint();
					static void set_Thumbprint(mscorlib::System::String  value);

					//	Get/Set:Upn
					static mscorlib::System::String  get_Upn();
					static void set_Upn(mscorlib::System::String  value);

					//	Get/Set:Uri
					static mscorlib::System::String  get_Uri();
					static void set_Uri(mscorlib::System::String  value);

					//	Get/Set:UserData
					static mscorlib::System::String  get_UserData();
					static void set_UserData(mscorlib::System::String  value);

					//	Get/Set:Version
					static mscorlib::System::String  get_Version();
					static void set_Version(mscorlib::System::String  value);

					//	Get/Set:Webpage
					static mscorlib::System::String  get_Webpage();
					static void set_Webpage(mscorlib::System::String  value);

					//	Get/Set:WindowsAccountName
					static mscorlib::System::String  get_WindowsAccountName();
					static void set_WindowsAccountName(mscorlib::System::String  value);

					//	Get/Set:X500DistinguishedName
					static mscorlib::System::String  get_X500DistinguishedName();
					static void set_X500DistinguishedName(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
