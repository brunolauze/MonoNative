#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMPOUNDACE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMPOUNDACE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_KnownAce.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_CompoundAceType.h>
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

				class CompoundAce
					: public mscorlib::System::Security::AccessControl::KnownAce
				{
				public:
					CompoundAce(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__ flags, mscorlib::System::Int32 accessMask, mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__ compoundAceType, mscorlib::System::Security::Principal::SecurityIdentifier sid)
					: mscorlib::System::Security::AccessControl::KnownAce(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CompoundAce"))
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.AccessControl", "AceFlags");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "CompoundAceType");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						int __param_flags__ = flags;
						__parameters__[0] = &__param_flags__;
						__parameters__[1] = &accessMask;
						int __param_compoundAceType__ = compoundAceType;
						__parameters__[2] = &__param_compoundAceType__;
						__parameters__[3] = (MonoObject*)sid;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CompoundAce", 4, __parameter_types__, __parameters__);
					};
				
					CompoundAce(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::KnownAce(nativeTypeInfo)
					{
					};
				
					CompoundAce(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::KnownAce(nativeObject)
					{
					};
				
					~CompoundAce()
					{
					};
				

					CompoundAce & operator=(CompoundAce &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual void  GetBinaryForm(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset) override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_CompoundAceType, put=set_CompoundAceType)) mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__  CompoundAceType;
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

					//	Get/Set:CompoundAceType
					mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__  get_CompoundAceType() const;
					void set_CompoundAceType(mscorlib::System::Security::AccessControl::CompoundAceType::__ENUM__  value);

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
