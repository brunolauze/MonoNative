#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_RegistryPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				void RegistryPermission::AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::String pathList)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(pathList).name());
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = (MonoObject*)pathList;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "AddPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void RegistryPermission::AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, const char *pathList)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), pathList);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "AddPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void RegistryPermission::AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, mscorlib::System::String pathList)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(control).name());
						__parameter_types__[2] = Global::GetType(typeid(pathList).name());
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						mscorlib::System::Int32 __param_control__ = control;
						__parameters__[1] = &__param_control__;
						__parameters__[2] = (MonoObject*)pathList;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "AddPathList", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void RegistryPermission::AddPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::Security::AccessControl::AccessControlActions::__ENUM__ control, const char *pathList)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(control).name());
						__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						mscorlib::System::Int32 __param_control__ = control;
						__parameters__[1] = &__param_control__;
						__parameters__[2] = mono_string_new(Global::GetDomain(), pathList);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "AddPathList", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String RegistryPermission::GetPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "GetPathList", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				void RegistryPermission::SetPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, mscorlib::System::String pathList)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(pathList).name());
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = (MonoObject*)pathList;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "SetPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void RegistryPermission::SetPathList(mscorlib::System::Security::Permissions::RegistryPermissionAccess::__ENUM__ access, const char *pathList)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						mscorlib::System::Int32 __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), pathList);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "SetPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::IPermission RegistryPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				void RegistryPermission::FromXml(mscorlib::System::Security::SecurityElement esd)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(esd).name());
						__parameters__[0] = (MonoObject*)esd;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::IPermission RegistryPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean RegistryPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RegistryPermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::SecurityElement RegistryPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::IPermission RegistryPermission::Union(mscorlib::System::Security::IPermission other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}


			}
		}
	}
}
