#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_UIPermission.h>
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
				mscorlib::System::Security::IPermission UIPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				void UIPermission::FromXml(mscorlib::System::Security::SecurityElement esd)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(esd).name());
						__parameters__[0] = (MonoObject*)esd;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::IPermission UIPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean UIPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean UIPermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::SecurityElement UIPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::IPermission UIPermission::Union(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Clipboard
				mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  UIPermission::get_Clipboard() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "get_Clipboard", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__*)mono_object_unbox(__result__);
				}

				void UIPermission::set_Clipboard(mscorlib::System::Security::Permissions::UIPermissionClipboard::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "set_Clipboard", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Window
				mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  UIPermission::get_Window() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "get_Window", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__*)mono_object_unbox(__result__);
				}

				void UIPermission::set_Window(mscorlib::System::Security::Permissions::UIPermissionWindow::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "UIPermission", 0, NULL, "set_Window", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
