#include <mscorlib/System/IO/mscorlib_System_IO_DirectoryInfo.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileInfo.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_DirectorySecurity.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void DirectoryInfo::Create()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "Create", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::IO::DirectoryInfo DirectoryInfo::CreateSubdirectory(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "CreateSubdirectory", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::DirectoryInfo(__result__);
			}

			std::vector<mscorlib::System::IO::FileInfo*> DirectoryInfo::GetFiles()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetFiles", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileInfo*> DirectoryInfo::GetFiles(mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::DirectoryInfo*> DirectoryInfo::GetDirectories()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetDirectories", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::DirectoryInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::DirectoryInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::DirectoryInfo*> DirectoryInfo::GetDirectories(mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetDirectories", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::DirectoryInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::DirectoryInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileSystemInfo*> DirectoryInfo::GetFileSystemInfos()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetFileSystemInfos", __native_object__, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileSystemInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileSystemInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileSystemInfo*> DirectoryInfo::GetFileSystemInfos(mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetFileSystemInfos", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileSystemInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileSystemInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileSystemInfo*> DirectoryInfo::GetFileSystemInfos(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[1] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					__parameters__[1] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetFileSystemInfos", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileSystemInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileSystemInfo (__array_item__));
					}
					return __array_result__;
			}

			void DirectoryInfo::Delete()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "Delete", __native_object__, 0, NULL, NULL, NULL);
			}

			void DirectoryInfo::Delete(mscorlib::System::Boolean recursive)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(recursive).name());
					__parameters__[0] = reinterpret_cast<void*>(recursive);
					Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "Delete", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			void DirectoryInfo::MoveTo(mscorlib::System::String destDirName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(destDirName).name());
					__parameters__[0] = (MonoObject*)destDirName;
					Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "MoveTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::String DirectoryInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			std::vector<mscorlib::System::IO::DirectoryInfo*> DirectoryInfo::GetDirectories(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[1] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					__parameters__[1] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetDirectories", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::DirectoryInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::DirectoryInfo (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::IO::FileInfo*> DirectoryInfo::GetFiles(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[1] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					__parameters__[1] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetFiles", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::IO::FileInfo*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::IO::FileInfo (__array_item__));
					}
					return __array_result__;
			}

			void DirectoryInfo::Create(mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(directorySecurity).name());
					__parameters__[0] = (MonoObject*)directorySecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "Create", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IO::DirectoryInfo DirectoryInfo::CreateSubdirectory(mscorlib::System::String path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(directorySecurity).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)directorySecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "CreateSubdirectory", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::DirectoryInfo(__result__);
			}

			mscorlib::System::Security::AccessControl::DirectorySecurity DirectoryInfo::GetAccessControl()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::DirectorySecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::DirectorySecurity DirectoryInfo::GetAccessControl(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(includeSections).name());
					__parameters__[0] = reinterpret_cast<void*>(includeSections);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "GetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::DirectorySecurity(__result__);
			}

			void DirectoryInfo::SetAccessControl(mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(directorySecurity).name());
					__parameters__[0] = (MonoObject*)directorySecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "SetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo> DirectoryInfo::EnumerateDirectories()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateDirectories", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo> DirectoryInfo::EnumerateDirectories(mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateDirectories", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo> DirectoryInfo::EnumerateDirectories(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[1] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					__parameters__[1] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateDirectories", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo> DirectoryInfo::EnumerateFiles()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateFiles", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo> DirectoryInfo::EnumerateFiles(mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateFiles", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo> DirectoryInfo::EnumerateFiles(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[1] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					__parameters__[1] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateFiles", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo> DirectoryInfo::EnumerateFileSystemInfos()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateFileSystemInfos", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo> DirectoryInfo::EnumerateFileSystemInfos(mscorlib::System::String searchPattern)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateFileSystemInfos", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo> DirectoryInfo::EnumerateFileSystemInfos(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(searchPattern).name());
					__parameter_types__[1] = Global::GetType(typeid(searchOption).name());
					__parameters__[0] = (MonoObject*)searchPattern;
					__parameters__[1] = reinterpret_cast<void*>(searchOption);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "EnumerateFileSystemInfos", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>(__result__);
			}

			//Get Set Properties Methods
			//	Get:Exists
			mscorlib::System::Boolean  DirectoryInfo::get_Exists()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "get_Exists", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Name
			mscorlib::System::String  DirectoryInfo::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Parent
			mscorlib::System::IO::DirectoryInfo  DirectoryInfo::get_Parent()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "get_Parent", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::DirectoryInfo(__result__);
			}


			//	Get:Root
			mscorlib::System::IO::DirectoryInfo  DirectoryInfo::get_Root()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "DirectoryInfo", 0, NULL, "get_Root", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::DirectoryInfo(__result__);
			}


			//	Get:FullName
			mscorlib::System::String  DirectoryInfo::get_FullName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Extension
			mscorlib::System::String  DirectoryInfo::get_Extension()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Extension", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Attributes
			mscorlib::System::IO::FileAttributes::__ENUM__  DirectoryInfo::get_Attributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::IO::FileAttributes::__ENUM__*)mono_object_unbox(__result__);
			}

			void DirectoryInfo::set_Attributes(mscorlib::System::IO::FileAttributes::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_Attributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CreationTime
			mscorlib::System::DateTime  DirectoryInfo::get_CreationTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_CreationTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void DirectoryInfo::set_CreationTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_CreationTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CreationTimeUtc
			mscorlib::System::DateTime  DirectoryInfo::get_CreationTimeUtc()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_CreationTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void DirectoryInfo::set_CreationTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_CreationTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastAccessTime
			mscorlib::System::DateTime  DirectoryInfo::get_LastAccessTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastAccessTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void DirectoryInfo::set_LastAccessTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastAccessTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastAccessTimeUtc
			mscorlib::System::DateTime  DirectoryInfo::get_LastAccessTimeUtc()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastAccessTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void DirectoryInfo::set_LastAccessTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastAccessTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastWriteTime
			mscorlib::System::DateTime  DirectoryInfo::get_LastWriteTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastWriteTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void DirectoryInfo::set_LastWriteTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastWriteTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastWriteTimeUtc
			mscorlib::System::DateTime  DirectoryInfo::get_LastWriteTimeUtc()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastWriteTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void DirectoryInfo::set_LastWriteTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastWriteTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}



		}
	}
}
