#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsIdentity.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsImpersonationContext.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReferenceCollection.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_Claim.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				void WindowsIdentity::Dispose()
				{
						Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "Dispose", __native_object__, 0, NULL, NULL, NULL);
				}

				mscorlib::System::Security::Principal::WindowsIdentity WindowsIdentity::GetAnonymous()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "GetAnonymous", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Principal::WindowsIdentity(__result__);
				}

				mscorlib::System::Security::Principal::WindowsIdentity WindowsIdentity::GetCurrent()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "GetCurrent", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Principal::WindowsIdentity(__result__);
				}

				mscorlib::System::Security::Principal::WindowsIdentity WindowsIdentity::GetCurrent(mscorlib::System::Boolean ifImpersonating)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ifImpersonating).name());
						__parameters__[0] = reinterpret_cast<void*>(ifImpersonating);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "GetCurrent", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::WindowsIdentity(__result__);
				}

				mscorlib::System::Security::Principal::WindowsIdentity WindowsIdentity::GetCurrent(mscorlib::System::Security::Principal::TokenAccessLevels::__ENUM__ desiredAccess)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(desiredAccess).name());
						mscorlib::System::Int32 __param_desiredAccess__ = desiredAccess;
						__parameters__[0] = &__param_desiredAccess__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "GetCurrent", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::WindowsIdentity(__result__);
				}

				mscorlib::System::Security::Principal::WindowsImpersonationContext WindowsIdentity::Impersonate()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "Impersonate", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Principal::WindowsImpersonationContext(__result__);
				}

				mscorlib::System::Security::Principal::WindowsImpersonationContext WindowsIdentity::Impersonate(mscorlib::System::IntPtr userToken)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(userToken).name());
						__parameters__[0] = userToken;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "Impersonate", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Principal::WindowsImpersonationContext(__result__);
				}

				//Get Set Properties Methods
				//	Get:AuthenticationType
				mscorlib::System::String  WindowsIdentity::get_AuthenticationType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_AuthenticationType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:IsAnonymous
				mscorlib::System::Boolean  WindowsIdentity::get_IsAnonymous() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_IsAnonymous", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsAuthenticated
				mscorlib::System::Boolean  WindowsIdentity::get_IsAuthenticated() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_IsAuthenticated", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsGuest
				mscorlib::System::Boolean  WindowsIdentity::get_IsGuest() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_IsGuest", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:IsSystem
				mscorlib::System::Boolean  WindowsIdentity::get_IsSystem() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_IsSystem", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Name
				mscorlib::System::String  WindowsIdentity::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:Token
				mscorlib::System::IntPtr  WindowsIdentity::get_Token() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_Token", __native_object__, 0, NULL, NULL, NULL);
					return mono_object_unbox (__result__);
				}


				//	Get:Groups
				mscorlib::System::Security::Principal::IdentityReferenceCollection  WindowsIdentity::get_Groups() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_Groups", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IdentityReferenceCollection(__result__);
				}


				//	Get:ImpersonationLevel
				mscorlib::System::Security::Principal::TokenImpersonationLevel::__ENUM__  WindowsIdentity::get_ImpersonationLevel() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_ImpersonationLevel", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Principal::TokenImpersonationLevel::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:Owner
				mscorlib::System::Security::Principal::SecurityIdentifier  WindowsIdentity::get_Owner() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_Owner", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}


				//	Get:User
				mscorlib::System::Security::Principal::SecurityIdentifier  WindowsIdentity::get_User() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsIdentity", 0, NULL, "get_User", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::SecurityIdentifier(__result__);
				}


				//	Get/Set:Actor
				mscorlib::System::Security::Claims::ClaimsIdentity  WindowsIdentity::get_Actor() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Actor", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Claims::ClaimsIdentity(__result__);
				}

				void WindowsIdentity::set_Actor(mscorlib::System::Security::Claims::ClaimsIdentity  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_Actor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:BootstrapContext
				mscorlib::System::Object  WindowsIdentity::get_BootstrapContext() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_BootstrapContext", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}

				void WindowsIdentity::set_BootstrapContext(mscorlib::System::Object  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_BootstrapContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Label
				mscorlib::System::String  WindowsIdentity::get_Label() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Label", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WindowsIdentity::set_Label(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_Label", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:NameClaimType
				mscorlib::System::String  WindowsIdentity::get_NameClaimType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_NameClaimType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WindowsIdentity::set_NameClaimType(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_NameClaimType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:RoleClaimType
				mscorlib::System::String  WindowsIdentity::get_RoleClaimType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_RoleClaimType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void WindowsIdentity::set_RoleClaimType(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_RoleClaimType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Claims
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  WindowsIdentity::get_Claims() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Claims", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>(__result__);
				}



			}
		}
	}
}
