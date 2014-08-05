#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILE_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileOptions.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAttributes.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileMode.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileShare.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class DateTime;
		class Byte;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			class Encoding;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class StreamWriter;
			class FileStream;
			class StreamReader;
			

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

				class FileSecurity;
				

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

			class File
				: public mscorlib::System::Object
			{
			public:
				File(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				File(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~File()
				{
				};
			

				File & operator=(File &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  AppendAllText(mscorlib::System::String path, mscorlib::System::String contents);
				static void  AppendAllText(const char *path, const char *contents);
				static void  AppendAllText(mscorlib::System::String path, mscorlib::System::String contents, mscorlib::System::Text::Encoding encoding);
				static void  AppendAllText(const char *path, const char *contents, mscorlib::System::Text::Encoding encoding);
				static mscorlib::System::IO::StreamWriter  AppendText(mscorlib::System::String path);
				static mscorlib::System::IO::StreamWriter  AppendText(const char *path);
				static void  Copy(mscorlib::System::String sourceFileName, mscorlib::System::String destFileName);
				static void  Copy(const char *sourceFileName, const char *destFileName);
				static void  Copy(mscorlib::System::String sourceFileName, mscorlib::System::String destFileName, mscorlib::System::Boolean overwrite);
				static void  Copy(const char *sourceFileName, const char *destFileName, mscorlib::System::Boolean overwrite);
				static mscorlib::System::IO::FileStream  Create(mscorlib::System::String path);
				static mscorlib::System::IO::FileStream  Create(const char *path);
				static mscorlib::System::IO::FileStream  Create(mscorlib::System::String path, mscorlib::System::Int32 bufferSize);
				static mscorlib::System::IO::FileStream  Create(const char *path, mscorlib::System::Int32 bufferSize);
				static mscorlib::System::IO::FileStream  Create(mscorlib::System::String path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options);
				static mscorlib::System::IO::FileStream  Create(const char *path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options);
				static mscorlib::System::IO::FileStream  Create(mscorlib::System::String path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity);
				static mscorlib::System::IO::FileStream  Create(const char *path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity);
				static mscorlib::System::IO::StreamWriter  CreateText(mscorlib::System::String path);
				static mscorlib::System::IO::StreamWriter  CreateText(const char *path);
				static void  Delete(mscorlib::System::String path);
				static void  Delete(const char *path);
				static mscorlib::System::Boolean  Exists(mscorlib::System::String path);
				static mscorlib::System::Boolean  Exists(const char *path);
				static mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl(mscorlib::System::String path);
				static mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl(const char *path);
				static mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				static mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl(const char *path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				static mscorlib::System::IO::FileAttributes::__ENUM__  GetAttributes(mscorlib::System::String path);
				static mscorlib::System::IO::FileAttributes::__ENUM__  GetAttributes(const char *path);
				static mscorlib::System::DateTime  GetCreationTime(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetCreationTime(const char *path);
				static mscorlib::System::DateTime  GetCreationTimeUtc(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetCreationTimeUtc(const char *path);
				static mscorlib::System::DateTime  GetLastAccessTime(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastAccessTime(const char *path);
				static mscorlib::System::DateTime  GetLastAccessTimeUtc(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastAccessTimeUtc(const char *path);
				static mscorlib::System::DateTime  GetLastWriteTime(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastWriteTime(const char *path);
				static mscorlib::System::DateTime  GetLastWriteTimeUtc(mscorlib::System::String path);
				static mscorlib::System::DateTime  GetLastWriteTimeUtc(const char *path);
				static void  Move(mscorlib::System::String sourceFileName, mscorlib::System::String destFileName);
				static void  Move(const char *sourceFileName, const char *destFileName);
				static mscorlib::System::IO::FileStream  Open(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode);
				static mscorlib::System::IO::FileStream  Open(const char *path, mscorlib::System::IO::FileMode::__ENUM__ mode);
				static mscorlib::System::IO::FileStream  Open(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access);
				static mscorlib::System::IO::FileStream  Open(const char *path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access);
				static mscorlib::System::IO::FileStream  Open(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share);
				static mscorlib::System::IO::FileStream  Open(const char *path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share);
				static mscorlib::System::IO::FileStream  OpenRead(mscorlib::System::String path);
				static mscorlib::System::IO::FileStream  OpenRead(const char *path);
				static mscorlib::System::IO::StreamReader  OpenText(mscorlib::System::String path);
				static mscorlib::System::IO::StreamReader  OpenText(const char *path);
				static mscorlib::System::IO::FileStream  OpenWrite(mscorlib::System::String path);
				static mscorlib::System::IO::FileStream  OpenWrite(const char *path);
				static void  Replace(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName);
				static void  Replace(const char *sourceFileName, const char *destinationFileName, const char *destinationBackupFileName);
				static void  Replace(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors);
				static void  Replace(const char *sourceFileName, const char *destinationFileName, const char *destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors);
				static void  SetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity);
				static void  SetAccessControl(const char *path, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity);
				static void  SetAttributes(mscorlib::System::String path, mscorlib::System::IO::FileAttributes::__ENUM__ fileAttributes);
				static void  SetAttributes(const char *path, mscorlib::System::IO::FileAttributes::__ENUM__ fileAttributes);
				static void  SetCreationTime(mscorlib::System::String path, mscorlib::System::DateTime creationTime);
				static void  SetCreationTime(const char *path, mscorlib::System::DateTime creationTime);
				static void  SetCreationTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime creationTimeUtc);
				static void  SetCreationTimeUtc(const char *path, mscorlib::System::DateTime creationTimeUtc);
				static void  SetLastAccessTime(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTime);
				static void  SetLastAccessTime(const char *path, mscorlib::System::DateTime lastAccessTime);
				static void  SetLastAccessTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTimeUtc);
				static void  SetLastAccessTimeUtc(const char *path, mscorlib::System::DateTime lastAccessTimeUtc);
				static void  SetLastWriteTime(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTime);
				static void  SetLastWriteTime(const char *path, mscorlib::System::DateTime lastWriteTime);
				static void  SetLastWriteTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTimeUtc);
				static void  SetLastWriteTimeUtc(const char *path, mscorlib::System::DateTime lastWriteTimeUtc);
				static std::vector<mscorlib::System::Byte*>  ReadAllBytes(mscorlib::System::String path);
				static std::vector<mscorlib::System::Byte*>  ReadAllBytes(const char *path);
				static std::vector<mscorlib::System::String*>  ReadAllLines(mscorlib::System::String path);
				static std::vector<mscorlib::System::String*>  ReadAllLines(const char *path);
				static std::vector<mscorlib::System::String*>  ReadAllLines(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding);
				static std::vector<mscorlib::System::String*>  ReadAllLines(const char *path, mscorlib::System::Text::Encoding encoding);
				static mscorlib::System::String  ReadAllText(mscorlib::System::String path);
				static mscorlib::System::String  ReadAllText(const char *path);
				static mscorlib::System::String  ReadAllText(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding);
				static mscorlib::System::String  ReadAllText(const char *path, mscorlib::System::Text::Encoding encoding);
				static void  WriteAllBytes(mscorlib::System::String path, std::vector<mscorlib::System::Byte*> bytes);
				static void  WriteAllBytes(const char *path, std::vector<mscorlib::System::Byte*> bytes);
				static void  WriteAllLines(mscorlib::System::String path, std::vector<mscorlib::System::String*> contents);
				static void  WriteAllLines(const char *path, std::vector<mscorlib::System::String*> contents);
				static void  WriteAllLines(mscorlib::System::String path, std::vector<mscorlib::System::String*> contents, mscorlib::System::Text::Encoding encoding);
				static void  WriteAllLines(const char *path, std::vector<mscorlib::System::String*> contents, mscorlib::System::Text::Encoding encoding);
				static void  WriteAllText(mscorlib::System::String path, mscorlib::System::String contents);
				static void  WriteAllText(const char *path, const char *contents);
				static void  WriteAllText(mscorlib::System::String path, mscorlib::System::String contents, mscorlib::System::Text::Encoding encoding);
				static void  WriteAllText(const char *path, const char *contents, mscorlib::System::Text::Encoding encoding);
				static void  Encrypt(mscorlib::System::String path);
				static void  Encrypt(const char *path);
				static void  Decrypt(mscorlib::System::String path);
				static void  Decrypt(const char *path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ReadLines(mscorlib::System::String path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ReadLines(const char *path);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ReadLines(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding);
				static mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>  ReadLines(const char *path, mscorlib::System::Text::Encoding encoding);
				static void  AppendAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents);
				static void  AppendAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents);
				static void  AppendAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding);
				static void  AppendAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding);
				static void  WriteAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents);
				static void  WriteAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents);
				static void  WriteAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding);
				static void  WriteAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
