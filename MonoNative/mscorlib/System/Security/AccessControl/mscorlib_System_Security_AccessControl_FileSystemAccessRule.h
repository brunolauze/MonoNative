#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_FILESYSTEMACCESSRULE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_FILESYSTEMACCESSRULE_H

#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessRule.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IdentityReference.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSystemRights.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlType.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_InheritanceFlags.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_PropagationFlags.h>
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
			namespace AccessControl
			{

				class FileSystemAccessRule
					: public mscorlib::System::Security::AccessControl::AccessRuleBase
				{
				public:
					FileSystemAccessRule(mscorlib::System::Security::Principal::IdentityReference identity, mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__ fileSystemRights, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.FileSystemAccessRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSystemRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = reinterpret_cast<void*>(fileSystemRights);
						__parameters__[2] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "FileSystemAccessRule", 3, __parameter_types__, __parameters__);
					};
				
					FileSystemAccessRule(mscorlib::System::String identity, mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__ fileSystemRights, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.FileSystemAccessRule"))
					{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSystemRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = reinterpret_cast<void*>(fileSystemRights);
						__parameters__[2] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "FileSystemAccessRule", 3, __parameter_types__, __parameters__);
					};
				
					FileSystemAccessRule(mscorlib::System::Security::Principal::IdentityReference identity, mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__ fileSystemRights, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.FileSystemAccessRule"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Principal", "IdentityReference");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSystemRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "InheritanceFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "PropagationFlags");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = reinterpret_cast<void*>(fileSystemRights);
						__parameters__[2] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[3] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[4] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "FileSystemAccessRule", 5, __parameter_types__, __parameters__);
					};
				
					FileSystemAccessRule(mscorlib::System::String identity, mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__ fileSystemRights, mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__ inheritanceFlags, mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__ propagationFlags, mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__ type)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.AccessControl.FileSystemAccessRule"))
					{
						MonoType *__parameter_types__[5];
						void *__parameters__[5];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[1] = Global::GetType("mscorlib", "System.Security.AccessControl", "FileSystemRights");
						__parameter_types__[2] = Global::GetType("mscorlib", "System.Security.AccessControl", "InheritanceFlags");
						__parameter_types__[3] = Global::GetType("mscorlib", "System.Security.AccessControl", "PropagationFlags");
						__parameter_types__[4] = Global::GetType("mscorlib", "System.Security.AccessControl", "AccessControlType");
						__parameters__[0] = (MonoObject*)identity;
						__parameters__[1] = reinterpret_cast<void*>(fileSystemRights);
						__parameters__[2] = reinterpret_cast<void*>(inheritanceFlags);
						__parameters__[3] = reinterpret_cast<void*>(propagationFlags);
						__parameters__[4] = reinterpret_cast<void*>(type);
						__native_object__ = Global::New("mscorlib", "System.Security.AccessControl", "FileSystemAccessRule", 5, __parameter_types__, __parameters__);
					};
				
					FileSystemAccessRule(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(nativeTypeInfo)
					{
					};
				
					FileSystemAccessRule(MonoObject *nativeObject)
					: mscorlib::System::Security::AccessControl::AccessRuleBase(nativeObject)
					{
					};
				
					~FileSystemAccessRule()
					{
					};
				

					FileSystemAccessRule & operator=(FileSystemAccessRule &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_FileSystemRights)) mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__  FileSystemRights;
					__declspec(property(get=get_AccessControlType)) mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  AccessControlType;
					__declspec(property(get=get_IdentityReference)) mscorlib::System::Security::Principal::IdentityReference  IdentityReference;
					__declspec(property(get=get_InheritanceFlags)) mscorlib::System::Security::AccessControl::InheritanceFlags::__ENUM__  InheritanceFlags;
					__declspec(property(get=get_IsInherited)) mscorlib::System::Boolean  IsInherited;
					__declspec(property(get=get_PropagationFlags)) mscorlib::System::Security::AccessControl::PropagationFlags::__ENUM__  PropagationFlags;

					//Get Set Properties Methods
					//	Get:FileSystemRights
					mscorlib::System::Security::AccessControl::FileSystemRights::__ENUM__  get_FileSystemRights();

					//	Get:AccessControlType
					mscorlib::System::Security::AccessControl::AccessControlType::__ENUM__  get_AccessControlType();

					//	Get:IdentityReference
					mscorlib::System::Security::Principal::IdentityReference  get_IdentityReference();

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
