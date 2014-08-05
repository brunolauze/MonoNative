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
				mscorlib::System::Security::Claims::Claim Claim::Clone()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::Claims::Claim(__result__);
				}

				mscorlib::System::Security::Claims::Claim Claim::Clone(mscorlib::System::Security::Claims::ClaimsIdentity identity)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(identity).name());
						__parameters__[0] = (MonoObject*)identity;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "Clone", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Claims::Claim(__result__);
				}

				mscorlib::System::String Claim::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Type
				mscorlib::System::String  Claim::get_Type() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_Type", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void Claim::set_Type(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_Type", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Value
				mscorlib::System::String  Claim::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void Claim::set_Value(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_Value", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ValueType
				mscorlib::System::String  Claim::get_ValueType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_ValueType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void Claim::set_ValueType(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_ValueType", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Issuer
				mscorlib::System::String  Claim::get_Issuer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_Issuer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void Claim::set_Issuer(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_Issuer", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:OriginalIssuer
				mscorlib::System::String  Claim::get_OriginalIssuer() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_OriginalIssuer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void Claim::set_OriginalIssuer(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_OriginalIssuer", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Subject
				mscorlib::System::Security::Claims::ClaimsIdentity  Claim::get_Subject() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_Subject", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Claims::ClaimsIdentity(__result__);
				}

				void Claim::set_Subject(mscorlib::System::Security::Claims::ClaimsIdentity  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_Subject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Properties
				mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  Claim::get_Properties() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>(__result__);
				}

				void Claim::set_Properties(mscorlib::System::Collections::Generic::IDictionary<mscorlib::System::String,mscorlib::System::String>  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Claims", "Claim", 0, NULL, "set_Properties", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
