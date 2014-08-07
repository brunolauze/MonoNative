#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_NTACCOUNT_H

#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

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

				class NTAccount
					: public mscorlib::System::Security::Principal::IdentityReference
				{
				public:
					NTAccount(mscorlib::System::String name)
					: mscorlib::System::Security::Principal::IdentityReference(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.NTAccount"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)name;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "NTAccount", 1, __parameter_types__, __parameters__);
					};
				
					NTAccount(mscorlib::System::String domainName, mscorlib::System::String accountName)
					: mscorlib::System::Security::Principal::IdentityReference(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Principal.NTAccount"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)domainName;
						__parameters__[1] = (MonoObject*)accountName;
						__native_object__ = Global::New("mscorlib", "System.Security.Principal", "NTAccount", 2, __parameter_types__, __parameters__);
					};
				
					NTAccount(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Principal::IdentityReference(nativeTypeInfo)
					{
					};
				
					NTAccount(MonoObject *nativeObject)
					: mscorlib::System::Security::Principal::IdentityReference(nativeObject)
					{
					};
				
					~NTAccount()
					{
					};
				

					NTAccount & operator=(NTAccount &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(NTAccount &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object o) override;
					virtual mscorlib::System::Int32  GetHashCode() override;
					virtual mscorlib::System::Boolean  IsValidTargetType(mscorlib::System::Type targetType) override;
					virtual mscorlib::System::String  ToString() override;
					virtual mscorlib::System::Security::Principal::IdentityReference  Translate(mscorlib::System::Type targetType) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Value)) mscorlib::System::String  Value;

					//Get Set Properties Methods
					//	Get:Value
					mscorlib::System::String  get_Value() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
