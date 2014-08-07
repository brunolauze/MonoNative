#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTAUDITRULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTAUDITRULE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditRule.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ObjectAceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AuditFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
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

				class IdentityReference;
				

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

				class ObjectAuditRule
					: public mscorlib::System::Security::AccessControl::AuditRuleBase
				{
				public:
					ObjectAuditRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(nativeTypeInfo)
					{
					};
				
					ObjectAuditRule(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AuditRuleBase(nativeObject)
					{
					};
				
					~ObjectAuditRule()
					{
					};
				

					ObjectAuditRule & operator=(ObjectAuditRule &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ObjectAuditRule &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_InheritedObjectType)) mscorlib::System::Guid  InheritedObjectType;
					__declspec(property(get=get_ObjectFlags)) mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__  ObjectFlags;
					__declspec(property(get=get_ObjectType)) mscorlib::System::Guid  ObjectType;
					__declspec(property(get=get_AuditFlags)) mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  AuditFlags;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:InheritedObjectType
					mscorlib::System::Guid  get_InheritedObjectType() const;

					//	Get:ObjectFlags
					mscorlib::System::Security::AccessControl::ObjectAceFlags::__ENUM__  get_ObjectFlags() const;

					//	Get:ObjectType
					mscorlib::System::Guid  get_ObjectType() const;

					//	Get:AuditFlags
					mscorlib::System::Security::AccessControl::AuditFlags::__ENUM__  get_AuditFlags() const;

					//	Get:IdentityReference
					mscorlib::System::Security::Principal::IdentityReference  get_IdentityReference() const;

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
