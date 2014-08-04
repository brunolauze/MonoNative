#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_STRONGNAMEIDENTITYPERMISSIONATTRIBUTE_H

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

				class StrongNameIdentityPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					StrongNameIdentityPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.StrongNameIdentityPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						__parameters__[0] = reinterpret_cast<void*>(action);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "StrongNameIdentityPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					StrongNameIdentityPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					StrongNameIdentityPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~StrongNameIdentityPermissionAttribute()
					{
					};
				

					StrongNameIdentityPermissionAttribute & operator=(StrongNameIdentityPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_PublicKey, put=set_PublicKey)) mscorlib::System::String  PublicKey;
					__declspec(property(get=get_Version, put=set_Version)) mscorlib::System::String  Version;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:Name
					mscorlib::System::String  get_Name();
					void set_Name(mscorlib::System::String  value);

					//	Get/Set:PublicKey
					mscorlib::System::String  get_PublicKey();
					void set_PublicKey(mscorlib::System::String  value);

					//	Get/Set:Version
					mscorlib::System::String  get_Version();
					void set_Version(mscorlib::System::String  value);

					//	Get/Set:Unrestricted
					mscorlib::System::Boolean  get_Unrestricted();
					void set_Unrestricted(mscorlib::System::Boolean  value);

					//	Get/Set:Action
					mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  get_Action();
					void set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value);

					//	Get:TypeId
					mscorlib::System::Object  get_TypeId();

				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
