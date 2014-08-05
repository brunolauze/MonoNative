#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_SECURITYIDENTIFIER_H

#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WellKnownSidType.h>
#include <mscorlib/System/mscorlib_System_IComparable_1.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class SecurityIdentifier
					: public mscorlib::System::Security::Principal::IdentityReference
					, public virtual mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>
				{
				public:
					SecurityIdentifier(mscorlib::System::String sddlForm)
					: mscorlib::System::Security::Principal::IdentityReference(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.SecurityIdentifier"))
					, mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)sddlForm;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "SecurityIdentifier", 1, __parameter_types__, __parameters__);
					};
				
					SecurityIdentifier(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
					: mscorlib::System::Security::Principal::IdentityReference(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.SecurityIdentifier"))
					, mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[1] = &offset;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "SecurityIdentifier", 2, __parameter_types__, __parameters__);
					};
				
					SecurityIdentifier(mscorlib::System::IntPtr binaryForm)
					: mscorlib::System::Security::Principal::IdentityReference(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.SecurityIdentifier"))
					, mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "IntPtr");
						__parameters__[0] = (MonoObject*)binaryForm;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "SecurityIdentifier", 1, __parameter_types__, __parameters__);
					};
				
					SecurityIdentifier(mscorlib::System::Security::Principal::WellKnownSidType::__ENUM__ sidType, mscorlib::System::Security::Principal::SecurityIdentifier &domainSid)
					: mscorlib::System::Security::Principal::IdentityReference(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.SecurityIdentifier"))
					, mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>(NULL)
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "WellKnownSidType");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						__parameters__[0] = reinterpret_cast<void*>(sidType);
						__parameters__[1] = (MonoObject*)domainSid;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "SecurityIdentifier", 2, __parameter_types__, __parameters__);
					};
				
					SecurityIdentifier(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Principal::IdentityReference(nativeTypeInfo)
					, mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>(NULL)
					{
					};
				
					SecurityIdentifier(MonoObject *nativeObject)
					: mscorlib::System::Security::Principal::IdentityReference(nativeObject)
					, mscorlib::System::IComparable<mscorlib::System::Security::Principal::SecurityIdentifier>(nativeObject)
					{
					};
				
					~SecurityIdentifier()
					{
					};
				

					SecurityIdentifier & operator=(SecurityIdentifier &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Int32  CompareTo(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					mscorlib::System::Boolean  Equals(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset);
					virtual mscorlib::System::Int32  GetHashCode() override;
					mscorlib::System::Boolean  IsAccountSid();
					mscorlib::System::Boolean  IsEqualDomainSid(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					virtual mscorlib::System::Boolean  IsValidTargetType(mscorlib::System::Type targetType) override;
					mscorlib::System::Boolean  IsWellKnown(mscorlib::System::Security::Principal::WellKnownSidType::__ENUM__ type);
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Security::Principal::IdentityReference  Translate(mscorlib::System::Type targetType) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AccountDomainSid)) mscorlib::System::Security::Principal::SecurityIdentifier  AccountDomainSid;
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_Value)) mscorlib::System::String  Value;

					//Public Static Fields
					static Property<mscorlib::System::Int32 , mscorlib::System::Security::Principal::SecurityIdentifier> MaxBinaryLength;
					static Property<mscorlib::System::Int32 , mscorlib::System::Security::Principal::SecurityIdentifier> MinBinaryLength;

					//Get Set Properties Methods
					//	Get:AccountDomainSid
					mscorlib::System::Security::Principal::SecurityIdentifier  get_AccountDomainSid() const;

					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:Value
					mscorlib::System::String  get_Value() const;

					//	Get/Set:MaxBinaryLength
					static mscorlib::System::Int32  get_MaxBinaryLength();
					static void set_MaxBinaryLength(mscorlib::System::Int32  value);

					//	Get/Set:MinBinaryLength
					static mscorlib::System::Int32  get_MinBinaryLength();
					static void set_MinBinaryLength(mscorlib::System::Int32  value);

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
