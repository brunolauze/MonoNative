#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DIRECTORYINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DIRECTORYINFO_H

#include <mscorlib/System/IO/mscorlib_System_IO_FileSystemInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_SearchOption.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class FileInfo;
			

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
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class DateTime;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

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

			class DirectoryInfo
				: public mscorlib::System::IO::FileSystemInfo
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				DirectoryInfo(mscorlib::System::String path)
				: mscorlib::System::IO::FileSystemInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.DirectoryInfo"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)path;
					__native_object__ = Global::New("mscorlib", "System.IO", "DirectoryInfo", 1, __parameter_types__, __parameters__);
				};
			
				DirectoryInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::FileSystemInfo(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				DirectoryInfo(MonoObject *nativeObject)
				: mscorlib::System::IO::FileSystemInfo(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~DirectoryInfo()
				{
				};
			

				DirectoryInfo & operator=(DirectoryInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(DirectoryInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  Create();
				mscorlib::System::IO::DirectoryInfo  CreateSubdirectory(mscorlib::System::String path);
				mscorlib::System::IO::DirectoryInfo  CreateSubdirectory(const char *path);
				std::vector<mscorlib::System::IO::FileInfo*>  GetFiles();
				std::vector<mscorlib::System::IO::FileInfo*>  GetFiles(mscorlib::System::String searchPattern);
				std::vector<mscorlib::System::IO::FileInfo*>  GetFiles(const char *searchPattern);
				std::vector<mscorlib::System::IO::DirectoryInfo*>  GetDirectories();
				std::vector<mscorlib::System::IO::DirectoryInfo*>  GetDirectories(mscorlib::System::String searchPattern);
				std::vector<mscorlib::System::IO::DirectoryInfo*>  GetDirectories(const char *searchPattern);
				std::vector<mscorlib::System::IO::FileSystemInfo*>  GetFileSystemInfos();
				std::vector<mscorlib::System::IO::FileSystemInfo*>  GetFileSystemInfos(mscorlib::System::String searchPattern);
				std::vector<mscorlib::System::IO::FileSystemInfo*>  GetFileSystemInfos(const char *searchPattern);
				std::vector<mscorlib::System::IO::FileSystemInfo*>  GetFileSystemInfos(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				std::vector<mscorlib::System::IO::FileSystemInfo*>  GetFileSystemInfos(const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				virtual void  Delete() override;
				void  Delete(mscorlib::System::Boolean recursive);
				void  MoveTo(mscorlib::System::String destDirName);
				void  MoveTo(const char *destDirName);
				virtual mscorlib::System::String  ToString() override;
				std::vector<mscorlib::System::IO::DirectoryInfo*>  GetDirectories(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				std::vector<mscorlib::System::IO::DirectoryInfo*>  GetDirectories(const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				std::vector<mscorlib::System::IO::FileInfo*>  GetFiles(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				std::vector<mscorlib::System::IO::FileInfo*>  GetFiles(const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				void  Create(mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				mscorlib::System::IO::DirectoryInfo  CreateSubdirectory(mscorlib::System::String path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				mscorlib::System::IO::DirectoryInfo  CreateSubdirectory(const char *path, mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				mscorlib::System::Security::AccessControl::DirectorySecurity  GetAccessControl();
				mscorlib::System::Security::AccessControl::DirectorySecurity  GetAccessControl(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				void  SetAccessControl(mscorlib::System::Security::AccessControl::DirectorySecurity directorySecurity);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>  EnumerateDirectories();
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>  EnumerateDirectories(mscorlib::System::String searchPattern);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>  EnumerateDirectories(const char *searchPattern);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>  EnumerateDirectories(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::DirectoryInfo>  EnumerateDirectories(const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>  EnumerateFiles();
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>  EnumerateFiles(mscorlib::System::String searchPattern);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>  EnumerateFiles(const char *searchPattern);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>  EnumerateFiles(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileInfo>  EnumerateFiles(const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>  EnumerateFileSystemInfos();
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>  EnumerateFileSystemInfos(mscorlib::System::String searchPattern);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>  EnumerateFileSystemInfos(const char *searchPattern);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>  EnumerateFileSystemInfos(mscorlib::System::String searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::IO::FileSystemInfo>  EnumerateFileSystemInfos(const char *searchPattern, mscorlib::System::IO::SearchOption::__ENUM__ searchOption);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Exists)) mscorlib::System::Boolean  Exists;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_Parent)) mscorlib::System::IO::DirectoryInfo  Parent;
				__declspec(property(get=get_Root)) mscorlib::System::IO::DirectoryInfo  Root;
				__declspec(property(get=get_FullName)) mscorlib::System::String  FullName;
				__declspec(property(get=get_Extension)) mscorlib::System::String  Extension;
				__declspec(property(get=get_Attributes, put=set_Attributes)) mscorlib::System::IO::FileAttributes::__ENUM__  Attributes;
				__declspec(property(get=get_CreationTime, put=set_CreationTime)) mscorlib::System::DateTime  CreationTime;
				__declspec(property(get=get_CreationTimeUtc, put=set_CreationTimeUtc)) mscorlib::System::DateTime  CreationTimeUtc;
				__declspec(property(get=get_LastAccessTime, put=set_LastAccessTime)) mscorlib::System::DateTime  LastAccessTime;
				__declspec(property(get=get_LastAccessTimeUtc, put=set_LastAccessTimeUtc)) mscorlib::System::DateTime  LastAccessTimeUtc;
				__declspec(property(get=get_LastWriteTime, put=set_LastWriteTime)) mscorlib::System::DateTime  LastWriteTime;
				__declspec(property(get=get_LastWriteTimeUtc, put=set_LastWriteTimeUtc)) mscorlib::System::DateTime  LastWriteTimeUtc;

				//Get Set Properties Methods
				//	Get:Exists
				mscorlib::System::Boolean  get_Exists() const;

				//	Get:Name
				mscorlib::System::String  get_Name() const;

				//	Get:Parent
				mscorlib::System::IO::DirectoryInfo  get_Parent() const;

				//	Get:Root
				mscorlib::System::IO::DirectoryInfo  get_Root() const;

				//	Get:FullName
				mscorlib::System::String  get_FullName() const;

				//	Get:Extension
				mscorlib::System::String  get_Extension() const;

				//	Get/Set:Attributes
				mscorlib::System::IO::FileAttributes::__ENUM__  get_Attributes() const;
				void set_Attributes(mscorlib::System::IO::FileAttributes::__ENUM__  value);

				//	Get/Set:CreationTime
				mscorlib::System::DateTime  get_CreationTime() const;
				void set_CreationTime(mscorlib::System::DateTime  value);

				//	Get/Set:CreationTimeUtc
				mscorlib::System::DateTime  get_CreationTimeUtc() const;
				void set_CreationTimeUtc(mscorlib::System::DateTime  value);

				//	Get/Set:LastAccessTime
				mscorlib::System::DateTime  get_LastAccessTime() const;
				void set_LastAccessTime(mscorlib::System::DateTime  value);

				//	Get/Set:LastAccessTimeUtc
				mscorlib::System::DateTime  get_LastAccessTimeUtc() const;
				void set_LastAccessTimeUtc(mscorlib::System::DateTime  value);

				//	Get/Set:LastWriteTime
				mscorlib::System::DateTime  get_LastWriteTime() const;
				void set_LastWriteTime(mscorlib::System::DateTime  value);

				//	Get/Set:LastWriteTimeUtc
				mscorlib::System::DateTime  get_LastWriteTimeUtc() const;
				void set_LastWriteTimeUtc(mscorlib::System::DateTime  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
