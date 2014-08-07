#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_ReflectionPermissionFlag.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
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
			namespace Permissions
			{

				class ReflectionPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					ReflectionPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.ReflectionPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						mscorlib::System::Int32 __param_action__ = action;
						__parameters__[0] = &__param_action__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					ReflectionPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					ReflectionPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~ReflectionPermissionAttribute()
					{
					};
				

					ReflectionPermissionAttribute & operator=(ReflectionPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(ReflectionPermissionAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Flags, put=set_Flags)) mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  Flags;
					__declspec(property(get=get_MemberAccess, put=set_MemberAccess)) mscorlib::System::Boolean  MemberAccess;
					__declspec(property(get=get_ReflectionEmit, put=set_ReflectionEmit)) mscorlib::System::Boolean  ReflectionEmit;
					__declspec(property(get=get_RestrictedMemberAccess, put=set_RestrictedMemberAccess)) mscorlib::System::Boolean  RestrictedMemberAccess;
					__declspec(property(get=get_TypeInformation, put=set_TypeInformation)) mscorlib::System::Boolean  TypeInformation;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:Flags
					mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  get_Flags() const;
					void set_Flags(mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  value);

					//	Get/Set:MemberAccess
					mscorlib::System::Boolean  get_MemberAccess() const;
					void set_MemberAccess(mscorlib::System::Boolean  value);

					//	Get/Set:ReflectionEmit
					mscorlib::System::Boolean  get_ReflectionEmit() const;
					void set_ReflectionEmit(mscorlib::System::Boolean  value);

					//	Get/Set:RestrictedMemberAccess
					mscorlib::System::Boolean  get_RestrictedMemberAccess() const;
					void set_RestrictedMemberAccess(mscorlib::System::Boolean  value);

					//	Get/Set:TypeInformation
					mscorlib::System::Boolean  get_TypeInformation() const;
					void set_TypeInformation(mscorlib::System::Boolean  value);

					//	Get/Set:Unrestricted
					mscorlib::System::Boolean  get_Unrestricted() const;
					void set_Unrestricted(mscorlib::System::Boolean  value);

					//	Get/Set:Action
					mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  get_Action() const;
					void set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId() const;

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
