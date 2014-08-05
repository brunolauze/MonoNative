#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityPermission.h>
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
				mscorlib::System::Boolean SecurityPermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::IPermission SecurityPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Security::IPermission SecurityPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Security::IPermission SecurityPermission::Union(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean SecurityPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermission::FromXml(mscorlib::System::Security::SecurityElement esd)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(esd).name());
						__parameters__[0] = (MonoObject*)esd;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::SecurityElement SecurityPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Flags
				mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  SecurityPermission::get_Flags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__*)mono_object_unbox(__result__);
				}

				void SecurityPermission::set_Flags(mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermission", 0, NULL, "set_Flags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
