#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_PERMISSIONSETATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_PERMISSIONSETATTRIBUTE_H

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

			class PermissionSet;
			

		}
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

				class PermissionSetAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					PermissionSetAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.PermissionSetAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						__parameters__[0] = reinterpret_cast<void*>(action);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "PermissionSetAttribute", 1, __parameter_types__, __parameters__);
					};
				
					PermissionSetAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					PermissionSetAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~PermissionSetAttribute()
					{
					};
				

					PermissionSetAttribute & operator=(PermissionSetAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					mscorlib::System::Security::PermissionSet  CreatePermissionSet();
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_File, put=set_File)) mscorlib::System::String  File;
					__declspec(property(get=get_Hex, put=set_Hex)) mscorlib::System::String  Hex;
					__declspec(property(get=get_Name, put=set_Name)) mscorlib::System::String  Name;
					__declspec(property(get=get_UnicodeEncoded, put=set_UnicodeEncoded)) mscorlib::System::Boolean  UnicodeEncoded;
					__declspec(property(get=get_XML, put=set_XML)) mscorlib::System::String  XML;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:File
					mscorlib::System::String  get_File();
					void set_File(mscorlib::System::String  value);

					//	Get/Set:Hex
					mscorlib::System::String  get_Hex();
					void set_Hex(mscorlib::System::String  value);

					//	Get/Set:Name
					mscorlib::System::String  get_Name();
					void set_Name(mscorlib::System::String  value);

					//	Get/Set:UnicodeEncoded
					mscorlib::System::Boolean  get_UnicodeEncoded();
					void set_UnicodeEncoded(mscorlib::System::Boolean  value);

					//	Get/Set:XML
					mscorlib::System::String  get_XML();
					void set_XML(mscorlib::System::String  value);

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
