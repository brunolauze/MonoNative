#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_QualifiedAce.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceQualifier.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceType.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Byte;
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
			namespace AccessControl
			{

				class GenericAce;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class CommonAce
					: public mscorlib::System::Security::AccessControl::QualifiedAce
				{
				public:
					CommonAce(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__ flags, mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__ qualifier, mscorlib::System::Int32 accessMask, mscorlib::System::Security::Principal::SecurityIdentifier sid, mscorlib::System::Boolean isCallback, std::vector<mscorlib::System::Byte*> opaque)
					: mscorlib::System::Security::AccessControl::QualifiedAce(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CommonAce"))
					{
						MonoType *__parameter_types__[6];
						void *__parameters__[6];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.AccessControl", "AceFlags");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "AceQualifier");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						__parameter_types__[4] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						int __param_flags__ = flags;
						__parameters__[0] = &__param_flags__;
						int __param_qualifier__ = qualifier;
						__parameters__[1] = &__param_qualifier__;
						__parameters__[2] = &accessMask;
						__parameters__[3] = (MonoObject*)sid;
						__parameters__[4] = reinterpret_cast<void*>(isCallback);
						__parameters__[5] = Global::FromArray<mscorlib::System::Byte*>(opaque, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CommonAce", 6, __parameter_types__, __parameters__);
					};
				
					CommonAce(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::QualifiedAce(nativeTypeInfo)
					{
					};
				
					CommonAce(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::QualifiedAce(nativeObject)
					{
					};
				
					~CommonAce()
					{
					};
				

					CommonAce & operator=(CommonAce &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset) override;
					static mscorlib::System::Int32  MaxOpaqueLength(mscorlib::System::Boolean isCallback);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_AceQualifier)) mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__  AceQualifier;
					__declspec(property(get=get_IsCallback)) mscorlib::System::Boolean  IsCallback;
					__declspec(property(get=get_OpaqueLength)) mscorlib::System::Int32  OpaqueLength;
					__declspec(property(get=get_AccessMask, put=set_AccessMask)) mscorlib::System::Int32  AccessMask;
					__declspec(property(get=get_SecurityIdentifier, put=set_SecurityIdentifier)) mscorlib::System::Security::Principal::SecurityIdentifier  SecurityIdentifier;
					__declspec(property(get=get_AceFlags, put=set_AceFlags)) mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  AceFlags;
					__declspec(property(get=get_AceType)) mscorlib::System::Security::AccessControl::AceType::__ENUM__  AceType;
					__declspec(property(get=get_AuditFlags)) mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  AuditFlags;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

					//	Get:AceQualifier
					mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__  get_AceQualifier() const;

					//	Get:IsCallback
					mscorlib::System::Boolean  get_IsCallback() const;

					//	Get:OpaqueLength
					mscorlib::System::Int32  get_OpaqueLength() const;

					//	Get/Set:AccessMask
					mscorlib::System::Int32  get_AccessMask() const;
					void set_AccessMask(mscorlib::System::Int32  value);

					//	Get/Set:SecurityIdentifier
					mscorlib::System::Security::Principal::SecurityIdentifier  get_SecurityIdentifier() const;
					void set_SecurityIdentifier(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get/Set:AceFlags
					mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  get_AceFlags() const;
					void set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value);

					//	Get:AceType
					mscorlib::System::Security::AccessControl::AceType::__ENUM__  get_AceType() const;

					//	Get:AuditFlags
					mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  get_AuditFlags() const;

					//	Get:InheritanceFlags
					mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  get_InheritanceFlags() const;

					//	Get:IsInherited
					mscorlib::System::Boolean  get_IsInherited() const;

					//	Get:PropagationFlags
					mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  get_PropagationFlags() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
