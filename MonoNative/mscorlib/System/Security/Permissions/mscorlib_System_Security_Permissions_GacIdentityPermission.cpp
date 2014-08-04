#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_GacIdentityPermission.h>
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
				mscorlib::System::Security::IPermission GacIdentityPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "GacIdentityPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Security::IPermission GacIdentityPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "GacIdentityPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean GacIdentityPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "GacIdentityPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::IPermission GacIdentityPermission::Union(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "GacIdentityPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				void GacIdentityPermission::FromXml(mscorlib::System::Security::SecurityElement securityElement)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(securityElement).name());
						__parameters__[0] = (MonoObject*)securityElement;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "GacIdentityPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::SecurityElement GacIdentityPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "GacIdentityPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}


			}
		}
	}
}
