#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REGISTRYPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_REGISTRYPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

				class RegistryPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					RegistryPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.RegistryPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						int __param_action__ = action;
						__parameters__[0] = &__param_action__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					RegistryPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					RegistryPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~RegistryPermissionAttribute()
					{
					};
				

					RegistryPermissionAttribute & operator=(RegistryPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_All, put=set_All)) mscorlib::System::String  All;
					__declspec(property(get=get_Create, put=set_Create)) mscorlib::System::String  Create;
					__declspec(property(get=get_Read, put=set_Read)) mscorlib::System::String  Read;
					__declspec(property(get=get_Write, put=set_Write)) mscorlib::System::String  Write;
					__declspec(property(get=get_ChangeAccessControl, put=set_ChangeAccessControl)) mscorlib::System::String  ChangeAccessControl;
					__declspec(property(get=get_ViewAccessControl, put=set_ViewAccessControl)) mscorlib::System::String  ViewAccessControl;
					__declspec(property(get=get_ViewAndModify, put=set_ViewAndModify)) mscorlib::System::String  ViewAndModify;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:All
					mscorlib::System::String  get_All() const;
					void set_All(mscorlib::System::String  value);

					//	Get/Set:Create
					mscorlib::System::String  get_Create() const;
					void set_Create(mscorlib::System::String  value);

					//	Get/Set:Read
					mscorlib::System::String  get_Read() const;
					void set_Read(mscorlib::System::String  value);

					//	Get/Set:Write
					mscorlib::System::String  get_Write() const;
					void set_Write(mscorlib::System::String  value);

					//	Get/Set:ChangeAccessControl
					mscorlib::System::String  get_ChangeAccessControl() const;
					void set_ChangeAccessControl(mscorlib::System::String  value);

					//	Get/Set:ViewAccessControl
					mscorlib::System::String  get_ViewAccessControl() const;
					void set_ViewAccessControl(mscorlib::System::String  value);

					//	Get/Set:ViewAndModify
					mscorlib::System::String  get_ViewAndModify() const;
					void set_ViewAndModify(mscorlib::System::String  value);

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
