#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEFILEPERMISSIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGEFILEPERMISSIONATTRIBUTE_H

#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IsolatedStoragePermissionAttribute.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityAction.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IsolatedStorageContainment.h>
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

				class IsolatedStorageFilePermissionAttribute
					: public mscorlib::System::Security::Permissions::IsolatedStoragePermissionAttribute
					, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
				{
				public:
					IsolatedStorageFilePermissionAttribute(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__ action)
					: mscorlib::System::Security::Permissions::IsolatedStoragePermissionAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Security.Permissions.IsolatedStorageFilePermissionAttribute"))
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System.Security.Permissions", "SecurityAction");
						__parameters__[0] = reinterpret_cast<void*>(action);
						__native_object__ = Global::New("mscorlib", "System.Security.Permissions", "IsolatedStorageFilePermissionAttribute", 1, __parameter_types__, __parameters__);
					};
				
					IsolatedStorageFilePermissionAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Security::Permissions::IsolatedStoragePermissionAttribute(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
					{
					};
				
					IsolatedStorageFilePermissionAttribute(MonoObject *nativeObject)
					: mscorlib::System::Security::Permissions::IsolatedStoragePermissionAttribute(nativeObject)
					, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
					{
					};
				
					~IsolatedStorageFilePermissionAttribute()
					{
					};
				

					IsolatedStorageFilePermissionAttribute & operator=(IsolatedStorageFilePermissionAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Security::IPermission  CreatePermission() override;
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					//Public Properties
					__declspec(property(get=get_UsageAllowed, put=set_UsageAllowed)) mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  UsageAllowed;
					__declspec(property(get=get_UserQuota, put=set_UserQuota)) mscorlib::System::Int64  UserQuota;
					__declspec(property(get=get_Unrestricted, put=set_Unrestricted)) mscorlib::System::Boolean  Unrestricted;
					__declspec(property(get=get_Action, put=set_Action)) mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  Action;
					__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

					//Get Set Properties Methods
					//	Get/Set:UsageAllowed
					mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  get_UsageAllowed();
					void set_UsageAllowed(mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  value);

					//	Get/Set:UserQuota
					mscorlib::System::Int64  get_UserQuota();
					void set_UserQuota(mscorlib::System::Int64  value);

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
