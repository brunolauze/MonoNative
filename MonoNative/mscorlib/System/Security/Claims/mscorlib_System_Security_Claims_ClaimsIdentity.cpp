#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_ClaimsIdentity.h>
#include <mscorlib/System/Security/Claims/mscorlib_System_Security_Claims_Claim.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Claims
			{

				//Public Methods
				void ClaimsIdentity::AddClaim(mscorlib::System::Security::Claims::Claim claim)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(claim).name());
						__parameters__[0] = (MonoObject*)claim;
						Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "AddClaim", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void ClaimsIdentity::AddClaims(mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> claims)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(claims).name());
						__parameters__[0] = (MonoObject*)claims;
						Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "AddClaims", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::Claims::ClaimsIdentity ClaimsIdentity::Clone()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Claims::ClaimsIdentity(__result__);
				}

				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> ClaimsIdentity::FindAll(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "FindAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>(__result__);
				}

				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim> ClaimsIdentity::FindAll(mscorlib::System::String type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "FindAll", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>(__result__);
				}

				mscorlib::System::Security::Claims::Claim ClaimsIdentity::FindFirst(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "FindFirst", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Claims::Claim(__result__);
				}

				mscorlib::System::Security::Claims::Claim ClaimsIdentity::FindFirst(mscorlib::System::String type)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameters__[0] = (MonoObject*)type;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "FindFirst", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Claims::Claim(__result__);
				}

				mscorlib::System::Boolean ClaimsIdentity::HasClaim(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::Security::Claims::Claim )> match)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(match).name());
						__parameters__[0] = &match;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "HasClaim", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ClaimsIdentity::HasClaim(mscorlib::System::String type, mscorlib::System::String value)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)value;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "HasClaim", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ClaimsIdentity::RemoveClaim(mscorlib::System::Security::Claims::Claim claim)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(claim).name());
						__parameters__[0] = (MonoObject*)claim;
						Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "RemoveClaim", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Boolean ClaimsIdentity::TryRemoveClaim(mscorlib::System::Security::Claims::Claim claim)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(claim).name());
						__parameters__[0] = (MonoObject*)claim;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "TryRemoveClaim", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Actor
				mscorlib::System::Security::Claims::ClaimsIdentity  ClaimsIdentity::get_Actor()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Actor", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Claims::ClaimsIdentity(__result__);
				}

				void ClaimsIdentity::set_Actor(mscorlib::System::Security::Claims::ClaimsIdentity  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_Actor", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:AuthenticationType
				mscorlib::System::String  ClaimsIdentity::get_AuthenticationType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_AuthenticationType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:BootstrapContext
				mscorlib::System::Object  ClaimsIdentity::get_BootstrapContext()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_BootstrapContext", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}

				void ClaimsIdentity::set_BootstrapContext(mscorlib::System::Object  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_BootstrapContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Label
				mscorlib::System::String  ClaimsIdentity::get_Label()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Label", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void ClaimsIdentity::set_Label(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_Label", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Name
				mscorlib::System::String  ClaimsIdentity::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get/Set:NameClaimType
				mscorlib::System::String  ClaimsIdentity::get_NameClaimType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_NameClaimType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void ClaimsIdentity::set_NameClaimType(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_NameClaimType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:RoleClaimType
				mscorlib::System::String  ClaimsIdentity::get_RoleClaimType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_RoleClaimType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void ClaimsIdentity::set_RoleClaimType(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "set_RoleClaimType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:Claims
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>  ClaimsIdentity::get_Claims()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_Claims", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Security::Claims::Claim>(__result__);
				}


				//	Get:IsAuthenticated
				mscorlib::System::Boolean  ClaimsIdentity::get_IsAuthenticated()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "get_IsAuthenticated", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


					//	Get/Set:DefaultNameClaimType
				mscorlib::System::String ClaimsIdentity::get_DefaultNameClaimType()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "DefaultNameClaimType"));
				}

				void ClaimsIdentity::set_DefaultNameClaimType(mscorlib::System::String  value)
				{
				}

					//	Get/Set:DefaultRoleClaimType
				mscorlib::System::String ClaimsIdentity::get_DefaultRoleClaimType()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "DefaultRoleClaimType"));
				}

				void ClaimsIdentity::set_DefaultRoleClaimType(mscorlib::System::String  value)
				{
				}

					//	Get/Set:DefaultIssuer
				mscorlib::System::String ClaimsIdentity::get_DefaultIssuer()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Claims", "ClaimsIdentity", 0, NULL, "DefaultIssuer"));
				}

				void ClaimsIdentity::set_DefaultIssuer(mscorlib::System::String  value)
				{
				}


			}
		}
	}
}
