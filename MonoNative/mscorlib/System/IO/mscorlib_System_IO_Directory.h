#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DIRECTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DIRECTORY_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SearchOption.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class DateTime;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class DirectoryInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class DirectorySecurity;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Directory
				: public mscorlib::System::Object
			{
			public:
				Directory(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Directory(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Directory()
				{
				};
			

				Directory & operator=(Directory &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(Directory &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::IO::DirectoryInfo  CreateDirectory(mscorlib::System::String path);
				static mscorlib::System::IO::DirectoryInfo  CreateDirectory(const char *path);
				static mscorlib::System::IO::DirectoryInfo  CreateDirectory(mscorlib::System::String path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				static mscorlib::System::IO::DirectoryInfo  CreateDirectory(const char *path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				static void  Delete(mscorlib::System::String path);
				static void  Delete(const char *path);
				static void  Delete(mscorlib::System::String path, mscorlib::System::Boolean recursive);
				static void  Delete(const char *path, mscorlib::System::Boolean recursive);
				static mscorlib::System::Boolean  Exists(mscorlib::System::String path);
				static mscorlib::System::Boolean  Exists(const char *path);
				static mscorlib::System::DateTime  GetLastAccessTime(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastAccessTime(const char *path);
				static mscorlib::System::DateTime  GetLastAccessTimeUtc(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastAccessTimeUtc(const char *path);
				static mscorlib::System::DateTime  GetLastWriteTime(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastWriteTime(const char *path);
				static mscorlib::System::DateTime  GetLastWriteTimeUtc(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastWriteTimeUtc(const char *path);
				static mscorlib::System::DateTime  GetCreationTime(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetCreationTime(const char *path);
				static mscorlib::System::DateTime  GetCreationTimeUtc(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetCreationTimeUtc(const char *path);
				static mscorlib::System::String  GetCurrentDirectory();
				static std::vector<mscorlib::System::String*>  GetDirectories(mscorlib::System::String path);
				static std::vector<mscorlib::System::String*>  GetDirectories(const char *path);
				static std::vector<mscorlib::System::String*>  GetDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern);
				static std::vector<mscorlib::System::String*>  GetDirectories(const char *path, const char *searchPattern);
				static std::vector<mscorlib::System::String*>  GetDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static std::vector<mscorlib::System::String*>  GetDirectories(const char *path, const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::String  GetDirectoryRoot(mscorlib::System::String path);
				static mscorlib::System::String  GetDirectoryRoot(const char *path);
				static std::vector<mscorlib::System::String*>  GetFiles(mscorlib::System::String path);
				static std::vector<mscorlib::System::String*>  GetFiles(const char *path);
				static std::vector<mscorlib::System::String*>  GetFiles(mscorlib::System::String path, mscorlib::System::String searchPattern);
				static std::vector<mscorlib::System::String*>  GetFiles(const char *path, const char *searchPattern);
				static std::vector<mscorlib::System::String*>  GetFiles(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static std::vector<mscorlib::System::String*>  GetFiles(const char *path, const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static std::vector<mscorlib::System::String*>  GetFileSystemEntries(mscorlib::System::String path);
				static std::vector<mscorlib::System::String*>  GetFileSystemEntries(const char *path);
				static std::vector<mscorlib::System::String*>  GetFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern);
				static std::vector<mscorlib::System::String*>  GetFileSystemEntries(const char *path, const char *searchPattern);
				static std::vector<mscorlib::System::String*>  GetLogicalDrives();
				static mscorlib::System::IO::DirectoryInfo  GetParent(mscorlib::System::String path);
				static mscorlib::System::IO::DirectoryInfo  GetParent(const char *path);
				static void  Move(mscorlib::System::String sourceDirName, mscorlib::System::String destDirName);
				static void  Move(const char *sourceDirName, const char *destDirName);
				static void  SetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				static void  SetAccessControl(const char *path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				static void  SetCreationTime(mscorlib::System::String path, mscorlib::System::DateTime creationTime);
				static void  SetCreationTime(const char *path, mscorlib::System::DateTime creationTime);
				static void  SetCreationTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime creationTimeUtc);
				static void  SetCreationTimeUtc(const char *path, mscorlib::System::DateTime creationTimeUtc);
				static void  SetCurrentDirectory(mscorlib::System::String path);
				static void  SetCurrentDirectory(const char *path);
				static void  SetLastAccessTime(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTime);
				static void  SetLastAccessTime(const char *path, mscorlib::System::DateTime lastAccessTime);
				static void  SetLastAccessTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTimeUtc);
				static void  SetLastAccessTimeUtc(const char *path, mscorlib::System::DateTime lastAccessTimeUtc);
				static void  SetLastWriteTime(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTime);
				static void  SetLastWriteTime(const char *path, mscorlib::System::DateTime lastWriteTime);
				static void  SetLastWriteTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTimeUtc);
				static void  SetLastWriteTimeUtc(const char *path, mscorlib::System::DateTime lastWriteTimeUtc);
				static std::vector<mscorlib::System::String*>  GetFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static std::vector<mscorlib::System::String*>  GetFileSystemEntries(const char *path, const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateDirectories(const char *path, const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateDirectories(mscorlib::System::String path, mscorlib::System::String searchPattern);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateDirectories(const char *path, const char *searchPattern);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateDirectories(mscorlib::System::String path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateDirectories(const char *path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFiles(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFiles(const char *path, const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFiles(mscorlib::System::String path, mscorlib::System::String searchPattern);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFiles(const char *path, const char *searchPattern);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFiles(mscorlib::System::String path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFiles(const char *path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFileSystemEntries(const char *path, const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFileSystemEntries(mscorlib::System::String path, mscorlib::System::String searchPattern);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFileSystemEntries(const char *path, const char *searchPattern);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFileSystemEntries(mscorlib::System::String path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  EnumerateFileSystemEntries(const char *path);
				static mscorlib::System::Security::AccessControl::DirectorySecurity  GetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				static mscorlib::System::Security::AccessControl::DirectorySecurity  GetAccessControl(const char *path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				static mscorlib::System::Security::AccessControl::DirectorySecurity  GetAccessControl(mscorlib::System::String path);
				static mscorlib::System::Security::AccessControl::DirectorySecurity  GetAccessControl(const char *path);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
