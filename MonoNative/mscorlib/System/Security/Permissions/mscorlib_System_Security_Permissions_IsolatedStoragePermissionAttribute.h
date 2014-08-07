#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_CodeAccessSecurityAttribute.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IsolatedStorageContainment.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
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

				class IsolatedStoragePermissionAttribute
					: public mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					IsolatedStoragePermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					IsolatedStoragePermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::CodeAccessSecurityAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~IsolatedStoragePermissionAttribute()
					{
					};
				

					IsolatedStoragePermissionAttribute & operator=(IsolatedStoragePermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					bool operator==(IsolatedStoragePermissionAttribute &value) { return mscorlib::System::Object::Equals(value); };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_UsageAllowed, put=set_UsageAllowed)) mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  UsageAllowed;
					__declspec(property(get=get_UserQuota, put=set_UserQuota)) mscorlib::System::Int64  UserQuota;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:UsageAllowed
					mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  get_UsageAllowed() const;
					void set_UsageAllowed(mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  value);

					//	Get/Set:UserQuota
					mscorlib::System::Int64  get_UserQuota() const;
					void set_UserQuota(mscorlib::System::Int64  value);

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
