#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspParameters.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Cryptography
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get/Set:Flags
				mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__  CspParameters::get_Flags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__*)mono_object_unbox(__result__);
				}

				void CspParameters::set_Flags(mscorlib::System::Security::Cryptography::CspProviderFlags::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "set_Flags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:CryptoKeySecurity
				mscorlib::System::Security::AccessControl::CryptoKeySecurity  CspParameters::get_CryptoKeySecurity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "get_CryptoKeySecurity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::CryptoKeySecurity(__result__);
				}

				void CspParameters::set_CryptoKeySecurity(mscorlib::System::Security::AccessControl::CryptoKeySecurity  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "set_CryptoKeySecurity", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeyPassword
				mscorlib::System::Security::SecureString  CspParameters::get_KeyPassword()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "get_KeyPassword", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::SecureString(__result__);
				}

				void CspParameters::set_KeyPassword(mscorlib::System::Security::SecureString  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "set_KeyPassword", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ParentWindowHandle
				mscorlib::System::IntPtr  CspParameters::get_ParentWindowHandle()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "get_ParentWindowHandle", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IntPtr(__result__);
				}

				void CspParameters::set_ParentWindowHandle(mscorlib::System::IntPtr  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspParameters", 0, NULL, "set_ParentWindowHandle", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:KeyContainerName
				mscorlib::System::String CspParameters::get_KeyContainerName()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "KeyContainerName"));
				}

				void CspParameters::set_KeyContainerName(mscorlib::System::String  value)
				{
				}

				//	Get/Set:KeyNumber
				mscorlib::System::Int32 CspParameters::get_KeyNumber()
				{
					return Global::GetFieldInt32Value(__native_object__, "KeyNumber");
				}

				void CspParameters::set_KeyNumber(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:ProviderName
				mscorlib::System::String CspParameters::get_ProviderName()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "ProviderName"));
				}

				void CspParameters::set_ProviderName(mscorlib::System::String  value)
				{
				}

				//	Get/Set:ProviderType
				mscorlib::System::Int32 CspParameters::get_ProviderType()
				{
					return Global::GetFieldInt32Value(__native_object__, "ProviderType");
				}

				void CspParameters::set_ProviderType(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
