#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMSPRINCIPAL_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Claims
			{

				class ClaimsIdentity;
				class Claim;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
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

				class ClaimsPrincipal
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Security::Principal::IPrincipal
				{
				public:
					ClaimsPrincipal()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsPrincipal"))
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsPrincipal");
					};
				
					ClaimsPrincipal(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> identities)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsPrincipal"))
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						MonoType *__generic_types__identities__[1];
						__generic_types__identities__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1");
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Collections.Generic", "IEnumerable`1", 1,__generic_types__identities__);
						__parameters__[0] = (MonoObject*)identities;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 1, __parameter_types__, __parameters__);
					};
				
					ClaimsPrincipal(mscorlib::System::Security::Principal::IIdentity identity)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsPrincipal"))
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IIdentity");
						__parameters__[0] = (MonoObject*)identity;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 1, __parameter_types__, __parameters__);
					};
				
					ClaimsPrincipal(mscorlib::System::Security::Principal::IPrincipal principal)
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Claims.ClaimsPrincipal"))
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IPrincipal");
						__parameters__[0] = (MonoObject*)principal;
						__native_object__ = Global::New("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 1, __parameter_types__, __parameters__);
					};
				
					ClaimsPrincipal(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Security::Principal::IPrincipal(NULL)
					{
					};
				
					ClaimsPrincipal(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Security::Principal::IPrincipal(nativeObject)
					{
					};
				
					~ClaimsPrincipal()
					{
					};
				

					ClaimsPrincipal & operator=(ClaimsPrincipal &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  AddIdentities(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> identities);
					virtual void  AddIdentity(mscorlib::System::Security::Claims::ClaimsIdentity identity);
					virtual mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  FindAll(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match);
					virtual mscorlib::System::Security::Claims::Claim  FindFirst(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match);
					virtual mscorlib::System::Boolean  HasClaim(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match);
					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::String role);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Claims)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  Claims;
					__declspec(property(get=get_Identities)) mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity>  Identities;
					__declspec(property(get=get_Identity)) mscorlib::System::Security::Principal::IIdentity  Identity;

					//Public Static Properties
					static Property<mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()> , mscorlib::System::Security::Claims::ClaimsPrincipal> ClaimsPrincipalSelector;
					static Property<mscorlib::System::Security::Claims::ClaimsPrincipal , mscorlib::System::Security::Claims::ClaimsPrincipal> Current;
					static Property<mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )> , mscorlib::System::Security::Claims::ClaimsPrincipal> PrimaryIdentitySelector;

					//Get Set Properties Methods
					//	Get:Claims
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  get_Claims() const;

					//	Get:Identities
					mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity>  get_Identities() const;

					//	Get:Identity
					mscorlib::System::Security::Principal::IIdentity  get_Identity() const;

					//Get Set Static Properties Methods
					//	Get/Set:ClaimsPrincipalSelector
					static mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()>  get_ClaimsPrincipalSelector();
					static void set_ClaimsPrincipalSelector(mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()>  value);

					//	Get:Current
					static mscorlib::System::Security::Claims::ClaimsPrincipal  get_Current();
					static void set_Current(mscorlib::System::Security::Claims::ClaimsPrincipal  value);

					//	Get/Set:PrimaryIdentitySelector
					static mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )>  get_PrimaryIdentitySelector();
					static void set_PrimaryIdentitySelector(mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )>  value);


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
