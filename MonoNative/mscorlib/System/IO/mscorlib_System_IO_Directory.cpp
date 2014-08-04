#include <mscorlib/System/IO/mscorlib_System_IO_Directory.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/IO/mscorlib_System_IO_DirectoryInfo.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DirectorySecurity.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			mscorlib::System::IO::DirectoryInfo Directory::CreateDirectory(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "CreateDirectory", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::DirectoryInfo(__result__);
			}

			mscorlib::System::IO::DirectoryInfo Directory::CreateDirectory(mscorlib::System::String path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(directorySecurity).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)directorySecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "CreateDirectory", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::DirectoryInfo(__result__);
			}

			void Directory::Delete(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "Delete", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Directory::Delete(mscorlib::System::String path, mscorlib::System::Boolean recursive)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(recursive).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(recursive);
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "Delete", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean Directory::Exists(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "Exists", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::DateTime Directory::GetLastAccessTime(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetLastAccessTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Directory::GetLastAccessTimeUtc(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetLastAccessTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Directory::GetLastWriteTime(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetLastWriteTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Directory::GetLastWriteTimeUtc(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetLastWriteTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Directory::GetCreationTime(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetCreationTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime Directory::GetCreationTimeUtc(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetCreationTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::String Directory::GetCurrentDirectory()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetCurrentDirectory", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			std::vector<mscorlib::System::String*> Directory::GetDirectories(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetDirectories", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetDirectories", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[2] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					__parameters__[2] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetDirectories", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::String Directory::GetDirectoryRoot(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetDirectoryRoot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			std::vector<mscorlib::System::String*> Directory::GetFiles(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetFiles", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetFiles(mscorlib::System::String path, mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetFiles", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetFiles(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[2] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					__parameters__[2] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetFiles", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetFileSystemEntries(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetFileSystemEntries", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetFileSystemEntries", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> Directory::GetLogicalDrives()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetLogicalDrives", NullMonoObject, 0, NULL, NULL, NULL);
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

			mscorlib::System::IO::DirectoryInfo Directory::GetParent(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetParent", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::DirectoryInfo(__result__);
			}

			void Directory::Move(mscorlib::System::String sourceDirName, mscorlib::System::String destDirName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(sourceDirName).name());
					__parameter_types__[1] = Global::GetType(typeid(destDirName).name());
					__parameters__[0] = (MonoObject*)sourceDirName;
					__parameters__[1] = (MonoObject*)destDirName;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "Move", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(directorySecurity).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)directorySecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetAccessControl", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetCreationTime(mscorlib::System::String path, mscorlib::System::DateTime creationTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(creationTime).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)creationTime;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetCreationTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetCreationTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime creationTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(creationTimeUtc).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)creationTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetCreationTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetCurrentDirectory(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetCurrentDirectory", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetLastAccessTime(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastAccessTime).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastAccessTime;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetLastAccessTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetLastAccessTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastAccessTimeUtc).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastAccessTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetLastAccessTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetLastWriteTime(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastWriteTime).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastWriteTime;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetLastWriteTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void Directory::SetLastWriteTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastWriteTimeUtc).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastWriteTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "SetLastWriteTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			std::vector<mscorlib::System::String*> Directory::GetFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[2] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					__parameters__[2] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetFileSystemEntries", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[2] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					__parameters__[2] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateDirectories", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateDirectories", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateDirectories(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateDirectories", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateFiles(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[2] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					__parameters__[2] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateFiles", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateFiles(mscorlib::System::String path, mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateFiles", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateFiles(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateFiles", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[2] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					__parameters__[2] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateFileSystemEntries", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateFileSystemEntries", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> Directory::EnumerateFileSystemEntries(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "EnumerateFileSystemEntries", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Security::AccessControl::DirectorySecurity Directory::GetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(includeSections).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(includeSections);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetAccessControl", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::DirectorySecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::DirectorySecurity Directory::GetAccessControl(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Directory", 0, NULL, "GetAccessControl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::DirectorySecurity(__result__);
			}


		}
	}
}
