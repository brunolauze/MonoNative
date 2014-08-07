#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_PUBLISHERIDENTITYPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_PUBLISHERIDENTITYPERMISSIONATTRIBUTE_H

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

				class PublisherIdentityPermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					PublisherIdentityPermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.PublisherIdentityPermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						mscorlib::System::Int32 __param_action__ = action;
						__parameters__[0] = &__param_action__;
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "PublisherIdentityPermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					PublisherIdentityPermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					PublisherIdentityPermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~PublisherIdentityPermissionAttribute()
					{
					};
				

					PublisherIdentityPermissionAttribute & operator=(PublisherIdentityPermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(PublisherIdentityPermissionAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_CertFile, put=set_CertFile)) mscorlib::System::String  CertFile;
					__declspec(property(get=get_SignedFile, put=set_SignedFile)) mscorlib::System::String  SignedFile;
					__declspec(property(get=get_X509Certificate, put=set_X509Certificate)) mscorlib::System::String  X509Certificate;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:CertFile
					mscorlib::System::String  get_CertFile() const;
					void set_CertFile(mscorlib::System::String  value);

					//	Get/Set:SignedFile
					mscorlib::System::String  get_SignedFile() const;
					void set_SignedFile(mscorlib::System::String  value);

					//	Get/Set:X509Certificate
					mscorlib::System::String  get_X509Certificate() const;
					void set_X509Certificate(mscorlib::System::String  value);

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
