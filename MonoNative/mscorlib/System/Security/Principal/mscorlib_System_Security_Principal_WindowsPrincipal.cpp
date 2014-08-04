#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_WindowsPrincipal.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_SecurityIdentifier.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				//Public Methods
				mscorlib::System::Boolean WindowsPrincipal::IsInRole(mscorlib::System::Int32 rid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(rid).name());
						__parameters__[0] = &rid;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsPrincipal", 0, NULL, "IsInRole", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean WindowsPrincipal::IsInRole(mscorlib::System::String role)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(role).name());
						__parameters__[0] = (MonoObject*)role;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsPrincipal", 0, NULL, "IsInRole", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean WindowsPrincipal::IsInRole(mscorlib::System::Security::Principal::WindowsBuiltInRole::__ENUM__ role)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(role).name());
						__parameters__[0] = reinterpret_cast<void*>(role);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsPrincipal", 0, NULL, "IsInRole", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean WindowsPrincipal::IsInRole(mscorlib::System::Security::Principal::SecurityIdentifier sid)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sid).name());
						__parameters__[0] = (MonoObject*)sid;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsPrincipal", 0, NULL, "IsInRole", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Identity
				mscorlib::System::Security::Principal::IIdentity  WindowsPrincipal::get_Identity()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Principal", "WindowsPrincipal", 0, NULL, "get_Identity", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Principal::IIdentity(__result__);
				}



			}
		}
	}
}
