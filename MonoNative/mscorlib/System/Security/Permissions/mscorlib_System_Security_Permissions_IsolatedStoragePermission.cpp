#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_IsolatedStoragePermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityElement.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				mscorlib::System::Boolean IsolatedStoragePermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::SecurityElement IsolatedStoragePermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				void IsolatedStoragePermission::FromXml(mscorlib::System::Security::SecurityElement esd)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(esd).name());
						__parameters__[0] = (MonoObject*)esd;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:UserQuota
				mscorlib::System::Int64  IsolatedStoragePermission::get_UserQuota() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "get_UserQuota", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
				}

				void IsolatedStoragePermission::set_UserQuota(mscorlib::System::Int64  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "set_UserQuota", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:UsageAllowed
				mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  IsolatedStoragePermission::get_UsageAllowed() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "get_UsageAllowed", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void IsolatedStoragePermission::set_UsageAllowed(mscorlib::System::Security::Permissions::IsolatedStorageContainment::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "IsolatedStoragePermission", 0, NULL, "set_UsageAllowed", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
