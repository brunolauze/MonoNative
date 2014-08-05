#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SiteIdentityPermission.h>
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
				mscorlib::System::Security::IPermission SiteIdentityPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				void SiteIdentityPermission::FromXml(mscorlib::System::Security::SecurityElement esd)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(esd).name());
						__parameters__[0] = (MonoObject*)esd;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::IPermission SiteIdentityPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean SiteIdentityPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::SecurityElement SiteIdentityPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::IPermission SiteIdentityPermission::Union(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Site
				mscorlib::System::String  SiteIdentityPermission::get_Site() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "get_Site", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void SiteIdentityPermission::set_Site(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SiteIdentityPermission", 0, NULL, "set_Site", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
