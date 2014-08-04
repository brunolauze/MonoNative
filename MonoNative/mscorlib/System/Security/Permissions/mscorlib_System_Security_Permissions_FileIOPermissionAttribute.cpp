#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_FileIOPermissionAttribute.h>
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
				mscorlib::System::Security::IPermission FileIOPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:All
				mscorlib::System::String  FileIOPermissionAttribute::get_All()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_All", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_All(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_All", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Append
				mscorlib::System::String  FileIOPermissionAttribute::get_Append()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_Append", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_Append(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_Append", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:PathDiscovery
				mscorlib::System::String  FileIOPermissionAttribute::get_PathDiscovery()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_PathDiscovery", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_PathDiscovery(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_PathDiscovery", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Read
				mscorlib::System::String  FileIOPermissionAttribute::get_Read()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_Read", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_Read(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_Read", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Write
				mscorlib::System::String  FileIOPermissionAttribute::get_Write()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_Write", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_Write(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AllFiles
				mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  FileIOPermissionAttribute::get_AllFiles()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_AllFiles", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__*)mono_object_unbox(__result__);
				}

				void FileIOPermissionAttribute::set_AllFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_AllFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AllLocalFiles
				mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  FileIOPermissionAttribute::get_AllLocalFiles()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_AllLocalFiles", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__*)mono_object_unbox(__result__);
				}

				void FileIOPermissionAttribute::set_AllLocalFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_AllLocalFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ChangeAccessControl
				mscorlib::System::String  FileIOPermissionAttribute::get_ChangeAccessControl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_ChangeAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_ChangeAccessControl(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_ChangeAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ViewAccessControl
				mscorlib::System::String  FileIOPermissionAttribute::get_ViewAccessControl()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_ViewAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_ViewAccessControl(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_ViewAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ViewAndModify
				mscorlib::System::String  FileIOPermissionAttribute::get_ViewAndModify()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "get_ViewAndModify", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void FileIOPermissionAttribute::set_ViewAndModify(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermissionAttribute", 0, NULL, "set_ViewAndModify", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  FileIOPermissionAttribute::get_Unrestricted()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void FileIOPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  FileIOPermissionAttribute::get_Action()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__*)mono_object_unbox(__result__);
				}

				void FileIOPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  FileIOPermissionAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
