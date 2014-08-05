#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericSecurityDescriptor.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RawSecurityDescriptor.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ControlFlags.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_SystemAcl.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DiscretionaryAcl.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
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
			namespace AccessControl
			{

				class CommonSecurityDescriptor
					: public mscorlib::System::Security::AccessControl::GenericSecurityDescriptor
				{
				public:
					CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Security::AccessControl::RawSecurityDescriptor rawSecurityDescriptor)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CommonSecurityDescriptor"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						__parameters__[2] = (MonoObject*)rawSecurityDescriptor;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 3, __parameter_types__, __parameters__);
					};
				
					CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::String sddlForm)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CommonSecurityDescriptor"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						__parameters__[2] = (MonoObject*)sddlForm;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 3, __parameter_types__, __parameters__);
					};
				
					CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CommonSecurityDescriptor"))
					{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[3] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[3] = &offset;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 4, __parameter_types__, __parameters__);
					};
				
					CommonSecurityDescriptor(mscorlib::System::Boolean isContainer, mscorlib::System::Boolean isDS, mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__ flags, mscorlib::System::Security::Principal::SecurityIdentifier owner, mscorlib::System::Security::Principal::SecurityIdentifier group, mscorlib::System::Security::AccessControl::SystemAcl systemAcl, mscorlib::System::Security::AccessControl::DiscretionaryAcl discretionaryAcl)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.CommonSecurityDescriptor"))
					{
						MonoType *__parameter_types__[7];
						void *__parameters__[7];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "ControlFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						__parameter_types__[5] = Global::GetType("mscorlib", "System.Security.AccessControl", "SystemAcl");
						__parameter_types__[6] = Global::GetType("mscorlib", "System.Security.AccessControl", "DiscretionaryAcl");
						__parameters__[0] = reinterpret_cast<void*>(isContainer);
						__parameters__[1] = reinterpret_cast<void*>(isDS);
						int __param_flags__ = flags;
						__parameters__[2] = &__param_flags__;
						__parameters__[3] = (MonoObject*)owner;
						__parameters__[4] = (MonoObject*)group;
						__parameters__[5] = (MonoObject*)systemAcl;
						__parameters__[6] = (MonoObject*)discretionaryAcl;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "CommonSecurityDescriptor", 7, __parameter_types__, __parameters__);
					};
				
					CommonSecurityDescriptor(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(nativeTypeInfo)
					{
					};
				
					CommonSecurityDescriptor(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(nativeObject)
					{
					};
				
					~CommonSecurityDescriptor()
					{
					};
				

					CommonSecurityDescriptor & operator=(CommonSecurityDescriptor &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  PurgeAccessControl(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					void  PurgeAudit(mscorlib::System::Security::Principal::SecurityIdentifier sid);
					void  SetDiscretionaryAclProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance);
					void  SetSystemAclProtection(mscorlib::System::Boolean isProtected, mscorlib::System::Boolean preserveInheritance);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ControlFlags)) mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  ControlFlags;
					__declspec(property(get=get_DiscretionaryAcl, put=set_DiscretionaryAcl)) mscorlib::System::Security::AccessControl::DiscretionaryAcl  DiscretionaryAcl;
					__declspec(property(get=get_Group, put=set_Group)) mscorlib::System::Security::Principal::SecurityIdentifier  Group;
					__declspec(property(get=get_IsContainer)) mscorlib::System::Boolean  IsContainer;
					__declspec(property(get=get_IsDiscretionaryAclCanonical)) mscorlib::System::Boolean  IsDiscretionaryAclCanonical;
					__declspec(property(get=get_IsDS)) mscorlib::System::Boolean  IsDS;
					__declspec(property(get=get_IsSystemAclCanonical)) mscorlib::System::Boolean  IsSystemAclCanonical;
					__declspec(property(get=get_Owner, put=set_Owner)) mscorlib::System::Security::Principal::SecurityIdentifier  Owner;
					__declspec(property(get=get_SystemAcl, put=set_SystemAcl)) mscorlib::System::Security::AccessControl::SystemAcl  SystemAcl;
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;

					//Get Set Properties Methods
					//	Get:ControlFlags
					mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  get_ControlFlags() const;

					//	Get/Set:DiscretionaryAcl
					mscorlib::System::Security::AccessControl::DiscretionaryAcl  get_DiscretionaryAcl() const;
					void set_DiscretionaryAcl(mscorlib::System::Security::AccessControl::DiscretionaryAcl  value);

					//	Get/Set:Group
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Group() const;
					void set_Group(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get:IsContainer
					mscorlib::System::Boolean  get_IsContainer() const;

					//	Get:IsDiscretionaryAclCanonical
					mscorlib::System::Boolean  get_IsDiscretionaryAclCanonical() const;

					//	Get:IsDS
					mscorlib::System::Boolean  get_IsDS() const;

					//	Get:IsSystemAclCanonical
					mscorlib::System::Boolean  get_IsSystemAclCanonical() const;

					//	Get/Set:Owner
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Owner() const;
					void set_Owner(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get/Set:SystemAcl
					mscorlib::System::Security::AccessControl::SystemAcl  get_SystemAcl() const;
					void set_SystemAcl(mscorlib::System::Security::AccessControl::SystemAcl  value);

					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
