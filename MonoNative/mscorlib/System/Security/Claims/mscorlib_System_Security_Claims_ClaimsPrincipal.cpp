#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsPrincipal.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsIdentity.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_Claim.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Claims
			{

				Property<mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()> , mscorlib::System::Security::Claims::ClaimsPrincipal> mscorlib::System::Security::Claims::ClaimsPrincipal::ClaimsPrincipalSelector(&mscorlib::System::Security::Claims::ClaimsPrincipal::get_ClaimsPrincipalSelector, &mscorlib::System::Security::Claims::ClaimsPrincipal::set_ClaimsPrincipalSelector);
				Property<mscorlib::System::Security::Claims::ClaimsPrincipal , mscorlib::System::Security::Claims::ClaimsPrincipal> mscorlib::System::Security::Claims::ClaimsPrincipal::Current(&mscorlib::System::Security::Claims::ClaimsPrincipal::get_Current, &mscorlib::System::Security::Claims::ClaimsPrincipal::set_Current);
				Property<mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )> , mscorlib::System::Security::Claims::ClaimsPrincipal> mscorlib::System::Security::Claims::ClaimsPrincipal::PrimaryIdentitySelector(&mscorlib::System::Security::Claims::ClaimsPrincipal::get_PrimaryIdentitySelector, &mscorlib::System::Security::Claims::ClaimsPrincipal::set_PrimaryIdentitySelector);
				//Public Methods
				void ClaimsPrincipal::AddIdentities(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> identities)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identities).name());
						__parameters__[0] = (MonoObject*)identities;
						Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "AddIdentities", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ClaimsPrincipal::AddIdentity(mscorlib::System::Security::Claims::ClaimsIdentity identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "AddIdentity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> ClaimsPrincipal::FindAll(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "FindAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>(__result__);
				}

				mscorlib::System::Security::Claims::Claim ClaimsPrincipal::FindFirst(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "FindFirst", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Claims::Claim(__result__);
				}

				mscorlib::System::Boolean ClaimsPrincipal::HasClaim(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "HasClaim", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ClaimsPrincipal::IsInRole(mscorlib::System::String role)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(role).name());
						__parameters__[0] = (MonoObject*)role;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "IsInRole", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ClaimsPrincipal::IsInRole(const char *role)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), role);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "IsInRole", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Claims
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  ClaimsPrincipal::get_Claims() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "get_Claims", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>(__result__);
				}


				//	Get:Identities
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity>  ClaimsPrincipal::get_Identities() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "get_Identities", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity>(__result__);
				}


				//	Get:Identity
				mscorlib::System::Security::Principal::IIdentity  ClaimsPrincipal::get_Identity() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "get_Identity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IIdentity(__result__);
				}


				//Get Set Static Properties Methods
				//	Get/Set:ClaimsPrincipalSelector
				mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()>  ClaimsPrincipal::get_ClaimsPrincipalSelector()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "get_ClaimsPrincipalSelector", NullMonoObject, 0, NULL, NULL, NULL);
					void* __delegate_result__ = mono_object_unbox(__result__);
					return mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()> ();
				}

				void ClaimsPrincipal::set_ClaimsPrincipalSelector(mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsPrincipal  ()>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "set_ClaimsPrincipalSelector", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Current
				mscorlib::System::Security::Claims::ClaimsPrincipal  ClaimsPrincipal::get_Current()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "get_Current", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Claims::ClaimsPrincipal(__result__);
				}

				void ClaimsPrincipal::set_Current(mscorlib::System::Security::Claims::ClaimsPrincipal  value)
				{
					throw;
				}


				//	Get/Set:PrimaryIdentitySelector
				mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )>  ClaimsPrincipal::get_PrimaryIdentitySelector()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "get_PrimaryIdentitySelector", NullMonoObject, 0, NULL, NULL, NULL);
					void* __delegate_result__ = mono_object_unbox(__result__);
					return mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )> ();
				}

				void ClaimsPrincipal::set_PrimaryIdentitySelector(mscorlib::Callback<mscorlib::System::Security::Claims::ClaimsIdentity  (mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::ClaimsIdentity> )>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsPrincipal", 0, NULL, "set_PrimaryIdentitySelector", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}




			}
		}
	}
}
