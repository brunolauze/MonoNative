#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_GenericSecurityDescriptor.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_ControlFlags.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_RawAcl.h>
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

				class RawSecurityDescriptor
					: public mscorlib::System::Security::AccessControl::GenericSecurityDescriptor
				{
				public:
					RawSecurityDescriptor(mscorlib::System::String sddlForm)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RawSecurityDescriptor"))
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)sddlForm;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 1, __parameter_types__, __parameters__);
					};
				
					RawSecurityDescriptor(std::vector<mscorlib::System::Byte*> binaryForm, mscorlib::System::Int32 offset)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RawSecurityDescriptor"))
					{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType("mscorlib", "System", "Byte"))->eklass);
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "Int32");
						__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(binaryForm, "mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089", "System", "Byte");
						__parameters__[1] = &offset;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 2, __parameter_types__, __parameters__);
					};
				
					RawSecurityDescriptor(mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__ flags, mscorlib::System::Security::Principal::SecurityIdentifier owner, mscorlib::System::Security::Principal::SecurityIdentifier group, mscorlib::System::Security::AccessControl::RawAcl systemAcl, mscorlib::System::Security::AccessControl::RawAcl discretionaryAcl)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.RawSecurityDescriptor"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.AccessControl", "ControlFlags");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.Principal", "SecurityIdentifier");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "RawAcl");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "RawAcl");
						__parameters__[0] = reinterpret_cast<void*>(flags);
						__parameters__[1] = (MonoObject*)owner;
						__parameters__[2] = (MonoObject*)group;
						__parameters__[3] = (MonoObject*)systemAcl;
						__parameters__[4] = (MonoObject*)discretionaryAcl;
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "RawSecurityDescriptor", 5, __parameter_types__, __parameters__);
					};
				
					RawSecurityDescriptor(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(nativeTypeInfo)
					{
					};
				
					RawSecurityDescriptor(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::GenericSecurityDescriptor(nativeObject)
					{
					};
				
					~RawSecurityDescriptor()
					{
					};
				

					RawSecurityDescriptor & operator=(RawSecurityDescriptor &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					void  SetFlags(mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__ flags);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_ControlFlags)) mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  ControlFlags;
					__declspec(property(get=get_DiscretionaryAcl, put=set_DiscretionaryAcl)) mscorlib::System::Security::AccessControl::RawAcl  DiscretionaryAcl;
					__declspec(property(get=get_Group, put=set_Group)) mscorlib::System::Security::Principal::SecurityIdentifier  Group;
					__declspec(property(get=get_Owner, put=set_Owner)) mscorlib::System::Security::Principal::SecurityIdentifier  Owner;
					__declspec(property(get=get_ResourceManagerControl, put=set_ResourceManagerControl)) mscorlib::System::Byte  ResourceManagerControl;
					__declspec(property(get=get_SystemAcl, put=set_SystemAcl)) mscorlib::System::Security::AccessControl::RawAcl  SystemAcl;
					__declspec(property(get=get_BinaryLength)) mscorlib::System::Int32  BinaryLength;

					//Get Set Properties Methods
					//	Get:ControlFlags
					mscorlib::System::Security::AccessControl::ControlFlags::__ENUM__  get_ControlFlags();

					//	Get/Set:DiscretionaryAcl
					mscorlib::System::Security::AccessControl::RawAcl  get_DiscretionaryAcl();
					void set_DiscretionaryAcl(mscorlib::System::Security::AccessControl::RawAcl  value);

					//	Get/Set:Group
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Group();
					void set_Group(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get/Set:Owner
					mscorlib::System::Security::Principal::SecurityIdentifier  get_Owner();
					void set_Owner(mscorlib::System::Security::Principal::SecurityIdentifier  value);

					//	Get/Set:ResourceManagerControl
					mscorlib::System::Byte  get_ResourceManagerControl();
					void set_ResourceManagerControl(mscorlib::System::Byte  value);

					//	Get/Set:SystemAcl
					mscorlib::System::Security::AccessControl::RawAcl  get_SystemAcl();
					void set_SystemAcl(mscorlib::System::Security::AccessControl::RawAcl  value);

					//	Get:BinaryLength
					mscorlib::System::Int32  get_BinaryLength();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
