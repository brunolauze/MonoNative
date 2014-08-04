#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_KnownAce.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceQualifier.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AceFlags.h>
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
			namespace Principal
			{

				class SecurityIdentifier;
				

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

				class QualifiedAce
					: public mscorlib::System::Security::AccessControl::KnownAce
				{
				public:
					QualifiedAce(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::KnownAce(nativeTypeInfo)
					{
					};
				
					QualifiedAce(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::KnownAce(nativeObject)
					{
					};
				
					~QualifiedAce()
					{
					};
				

					QualifiedAce & operator=(QualifiedAce &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					std::vector<mscorlib::System::Byte*>  GetOpaque();
					void  SetOpaque(std::vector<mscorlib::System::Byte*> opaque);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_AceQualifier)) mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__  AceQualifier;
					__declspec(property(get=get_IsCallback)) mscorlib::System::Boolean  IsCallback;
					__declspec(property(get=get_OpaqueLength)) mscorlib::System::Int32  OpaqueLength;
					__declspec(property(get=get_AccessMask, put=set_AccessMask)) mscorlib::System::Int32  AccessMask;
					__declspec(property(get=get_SecurityIdentifier, put=set_SecurityIdentifier)) mscorlib::System::Security::Principal::SecurityIdentifier  SecurityIdentifier;
					__declspec(property(get=get_AceFlags, put=set_AceFlags)) mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  AceFlags;
					__declspec(property(get=get_AceType)) mscorlib::System::Security::AccessControl::AceType::__ENUM__  AceType;
					__declspec(property(get=get_AuditFlags)) mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  AuditFlags;
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:AceQualifier
					mscorlib::System::Security::AccessControl::AceQualifier::__ENUM__  get_AceQualifier();

					//	Get:IsCallback
					mscorlib::System::Boolean  get_IsCallback();

					//	Get:OpaqueLength
					mscorlib::System::Int32  get_OpaqueLength();

					//	Get/Set:AccessMask
					mscorlib::System::Int32  get_AccessMask();
					void set_AccessMask(mscorlib::System::Int32  value);

					//	Get/Set:SecurityIdentifier
					mscorlib::System::Security::Principal::SecurityIdentifier  get_SecurityIdentifier();
					void set_SecurityIdentifier(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get/Set:AceFlags
					mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  get_AceFlags();
					void set_AceFlags(mscorlib::System::Security::AccessControl::AceFlags::__ENUM__  value);

					//	Get:AceType
					mscorlib::System::Security::AccessControl::AceType::__ENUM__  get_AceType();

					//	Get:AuditFlags
					mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  get_AuditFlags();

					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength();

					//	Get:InheritanceFlags
					mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  get_InheritanceFlags();

					//	Get:IsInherited
					mscorlib::System::Boolean  get_IsInherited();

					//	Get:PropagationFlags
					mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  get_PropagationFlags();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
