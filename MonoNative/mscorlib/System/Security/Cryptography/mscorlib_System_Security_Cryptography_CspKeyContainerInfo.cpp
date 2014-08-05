#include <mscorlib/System/Security/Cryptography/mscorlib_System_Security_Cryptography_CspKeyContainerInfo.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CryptoKeySecurity.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				//	Get:Accessible
				mscorlib::System::Boolean  CspKeyContainerInfo::get_Accessible() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_Accessible", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:CryptoKeySecurity
				mscorlib::System::Security::AccessControl::CryptoKeySecurity  CspKeyContainerInfo::get_CryptoKeySecurity() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_CryptoKeySecurity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::CryptoKeySecurity(__result__);
				}


				//	Get:Exportable
				mscorlib::System::Boolean  CspKeyContainerInfo::get_Exportable() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_Exportable", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:HardwareDevice
				mscorlib::System::Boolean  CspKeyContainerInfo::get_HardwareDevice() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_HardwareDevice", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:KeyContainerName
				mscorlib::System::String  CspKeyContainerInfo::get_KeyContainerName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_KeyContainerName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:KeyNumber
				mscorlib::System::Security::Cryptography::KeyNumber::__ENUM__  CspKeyContainerInfo::get_KeyNumber() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_KeyNumber", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Cryptography::KeyNumber::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:MachineKeyStore
				mscorlib::System::Boolean  CspKeyContainerInfo::get_MachineKeyStore() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_MachineKeyStore", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Protected
				mscorlib::System::Boolean  CspKeyContainerInfo::get_Protected() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_Protected", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:ProviderName
				mscorlib::System::String  CspKeyContainerInfo::get_ProviderName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_ProviderName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ProviderType
				mscorlib::System::Int32  CspKeyContainerInfo::get_ProviderType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_ProviderType", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:RandomlyGenerated
				mscorlib::System::Boolean  CspKeyContainerInfo::get_RandomlyGenerated() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_RandomlyGenerated", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:Removable
				mscorlib::System::Boolean  CspKeyContainerInfo::get_Removable() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_Removable", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:UniqueKeyContainerName
				mscorlib::System::String  CspKeyContainerInfo::get_UniqueKeyContainerName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Cryptography", "CspKeyContainerInfo", 0, NULL, "get_UniqueKeyContainerName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
