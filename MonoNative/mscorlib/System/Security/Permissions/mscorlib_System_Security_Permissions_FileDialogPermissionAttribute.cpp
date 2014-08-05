#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_FileDialogPermissionAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Security::IPermission FileDialogPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileDialogPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Open
				mscorlib::System::Boolean  FileDialogPermissionAttribute::get_Open() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileDialogPermissionAttribute", 0, NULL, "get_Open", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void FileDialogPermissionAttribute::set_Open(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileDialogPermissionAttribute", 0, NULL, "set_Open", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Save
				mscorlib::System::Boolean  FileDialogPermissionAttribute::get_Save() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileDialogPermissionAttribute", 0, NULL, "get_Save", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void FileDialogPermissionAttribute::set_Save(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileDialogPermissionAttribute", 0, NULL, "set_Save", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  FileDialogPermissionAttribute::get_Unrestricted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void FileDialogPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  FileDialogPermissionAttribute::get_Action() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__*)mono_object_unbox(__result__);
				}

				void FileDialogPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  FileDialogPermissionAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
