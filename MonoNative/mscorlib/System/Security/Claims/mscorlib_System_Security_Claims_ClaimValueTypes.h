#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMVALUETYPES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_CLAIMS_CLAIMVALUETYPES_H

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

				class ClaimValueTypes
					: public mscorlib::System::Object
				{
				public:
					ClaimValueTypes(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					{
					};
				
					ClaimValueTypes(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					{
					};
				
					~ClaimValueTypes()
					{
					};
				

					ClaimValueTypes & operator=(ClaimValueTypes &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Static Fields
					static Property<mscorlib::System::String> Base64Binary;
					static Property<mscorlib::System::String> Base64Octet;
					static Property<mscorlib::System::String> Boolean;
					static Property<mscorlib::System::String> Date;
					static Property<mscorlib::System::String> DateTime;
					static Property<mscorlib::System::String> DaytimeDuration;
					static Property<mscorlib::System::String> DnsName;
					static Property<mscorlib::System::String> Double;
					static Property<mscorlib::System::String> DsaKeyValue;
					static Property<mscorlib::System::String> Email;
					static Property<mscorlib::System::String> Fqbn;
					static Property<mscorlib::System::String> HexBinary;
					static Property<mscorlib::System::String> Integer;
					static Property<mscorlib::System::String> Integer32;
					static Property<mscorlib::System::String> Integer64;
					static Property<mscorlib::System::String> KeyInfo;
					static Property<mscorlib::System::String> Rfc822Name;
					static Property<mscorlib::System::String> Rsa;
					static Property<mscorlib::System::String> RsaKeyValue;
					static Property<mscorlib::System::String> Sid;
					static Property<mscorlib::System::String> String;
					static Property<mscorlib::System::String> Time;
					static Property<mscorlib::System::String> UInteger32;
					static Property<mscorlib::System::String> UInteger64;
					static Property<mscorlib::System::String> UpnName;
					static Property<mscorlib::System::String> X500Name;
					static Property<mscorlib::System::String> YearMonthDuration;

					//	Get/Set:Base64Binary
					static mscorlib::System::String  get_Base64Binary();
					static void set_Base64Binary(mscorlib::System::String  value);

					//	Get/Set:Base64Octet
					static mscorlib::System::String  get_Base64Octet();
					static void set_Base64Octet(mscorlib::System::String  value);

					//	Get/Set:Boolean
					static mscorlib::System::String  get_Boolean();
					static void set_Boolean(mscorlib::System::String  value);

					//	Get/Set:Date
					static mscorlib::System::String  get_Date();
					static void set_Date(mscorlib::System::String  value);

					//	Get/Set:DateTime
					static mscorlib::System::String  get_DateTime();
					static void set_DateTime(mscorlib::System::String  value);

					//	Get/Set:DaytimeDuration
					static mscorlib::System::String  get_DaytimeDuration();
					static void set_DaytimeDuration(mscorlib::System::String  value);

					//	Get/Set:DnsName
					static mscorlib::System::String  get_DnsName();
					static void set_DnsName(mscorlib::System::String  value);

					//	Get/Set:Double
					static mscorlib::System::String  get_Double();
					static void set_Double(mscorlib::System::String  value);

					//	Get/Set:DsaKeyValue
					static mscorlib::System::String  get_DsaKeyValue();
					static void set_DsaKeyValue(mscorlib::System::String  value);

					//	Get/Set:Email
					static mscorlib::System::String  get_Email();
					static void set_Email(mscorlib::System::String  value);

					//	Get/Set:Fqbn
					static mscorlib::System::String  get_Fqbn();
					static void set_Fqbn(mscorlib::System::String  value);

					//	Get/Set:HexBinary
					static mscorlib::System::String  get_HexBinary();
					static void set_HexBinary(mscorlib::System::String  value);

					//	Get/Set:Integer
					static mscorlib::System::String  get_Integer();
					static void set_Integer(mscorlib::System::String  value);

					//	Get/Set:Integer32
					static mscorlib::System::String  get_Integer32();
					static void set_Integer32(mscorlib::System::String  value);

					//	Get/Set:Integer64
					static mscorlib::System::String  get_Integer64();
					static void set_Integer64(mscorlib::System::String  value);

					//	Get/Set:KeyInfo
					static mscorlib::System::String  get_KeyInfo();
					static void set_KeyInfo(mscorlib::System::String  value);

					//	Get/Set:Rfc822Name
					static mscorlib::System::String  get_Rfc822Name();
					static void set_Rfc822Name(mscorlib::System::String  value);

					//	Get/Set:Rsa
					static mscorlib::System::String  get_Rsa();
					static void set_Rsa(mscorlib::System::String  value);

					//	Get/Set:RsaKeyValue
					static mscorlib::System::String  get_RsaKeyValue();
					static void set_RsaKeyValue(mscorlib::System::String  value);

					//	Get/Set:Sid
					static mscorlib::System::String  get_Sid();
					static void set_Sid(mscorlib::System::String  value);

					//	Get/Set:String
					static mscorlib::System::String  get_String();
					static void set_String(mscorlib::System::String  value);

					//	Get/Set:Time
					static mscorlib::System::String  get_Time();
					static void set_Time(mscorlib::System::String  value);

					//	Get/Set:UInteger32
					static mscorlib::System::String  get_UInteger32();
					static void set_UInteger32(mscorlib::System::String  value);

					//	Get/Set:UInteger64
					static mscorlib::System::String  get_UInteger64();
					static void set_UInteger64(mscorlib::System::String  value);

					//	Get/Set:UpnName
					static mscorlib::System::String  get_UpnName();
					static void set_UpnName(mscorlib::System::String  value);

					//	Get/Set:X500Name
					static mscorlib::System::String  get_X500Name();
					static void set_X500Name(mscorlib::System::String  value);

					//	Get/Set:YearMonthDuration
					static mscorlib::System::String  get_YearMonthDuration();
					static void set_YearMonthDuration(mscorlib::System::String  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
