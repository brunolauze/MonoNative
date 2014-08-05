#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_FileIOPermission.h>
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
				void FileIOPermission::AddPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::String path)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(path).name());
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), path);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "AddPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void FileIOPermission::AddPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, const char *path)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(path).name());
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), path);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "AddPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void FileIOPermission::AddPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, std::vector<mscorlib::System::String*> pathList)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(pathList).name()))->eklass);
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(pathList, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "AddPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::IPermission FileIOPermission::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				void FileIOPermission::FromXml(mscorlib::System::Security::SecurityElement esd)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(esd).name());
						__parameters__[0] = (MonoObject*)esd;
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "FromXml", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				std::vector<mscorlib::System::String*> FileIOPermission::GetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "GetPathList", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::String*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::String (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Security::IPermission FileIOPermission::Intersect(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "Intersect", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean FileIOPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameters__[0] = (MonoObject*)target;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "IsSubsetOf", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean FileIOPermission::IsUnrestricted()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "IsUnrestricted", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void FileIOPermission::SetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, mscorlib::System::String path)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(path).name());
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), path);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "SetPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void FileIOPermission::SetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, const char *path)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = Global::GetType(typeid(path).name());
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = mono_string_new(Global::GetDomain(), path);
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "SetPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				void FileIOPermission::SetPathList(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__ access, std::vector<mscorlib::System::String*> pathList)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(access).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(pathList).name()))->eklass);
						int __param_access__ = access;
						__parameters__[0] = &__param_access__;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(pathList, typeid(mscorlib::System::String).name());
						Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "SetPathList", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Security::SecurityElement FileIOPermission::ToXml()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "ToXml", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::SecurityElement(__result__);
				}

				mscorlib::System::Security::IPermission FileIOPermission::Union(mscorlib::System::Security::IPermission other)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(other).name());
						__parameters__[0] = (MonoObject*)other;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "Union", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean FileIOPermission::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 FileIOPermission::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:AllFiles
				mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  FileIOPermission::get_AllFiles() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "get_AllFiles", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__>(*(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__*)mono_object_unbox(__result__));
				}

				void FileIOPermission::set_AllFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					int __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "set_AllFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:AllLocalFiles
				mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  FileIOPermission::get_AllLocalFiles() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "get_AllLocalFiles", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__>(*(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__*)mono_object_unbox(__result__));
				}

				void FileIOPermission::set_AllLocalFiles(mscorlib::System::Security::Permissions::FileIOPermissionAccess::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					int __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "FileIOPermission", 0, NULL, "set_AllLocalFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
