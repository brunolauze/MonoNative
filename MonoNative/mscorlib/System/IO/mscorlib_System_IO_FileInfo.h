#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEINFO_H

#include <mscorlib/System/IO/mscorlib_System_IO_FileSystemInfo.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileMode.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAccess.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileShare.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_AccessControlSections.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileAttributes.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class DirectoryInfo;
			class StreamReader;
			class StreamWriter;
			class FileStream;
			

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

			class FileInfo
				: public mscorlib::System::IO::FileSystemInfo
				, public virtual mscorlib::System::Runtime::Serialization::ISerializable
			{
			public:
				FileInfo(mscorlib::System::String fileName)
				: mscorlib::System::IO::FileSystemInfo(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.IO.FileInfo"))
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = (MonoObject*)fileName;
					__native_object__ = Global::New("mscorlib", "System.IO", "FileInfo", 1, __parameter_types__, __parameters__);
				};
			
				FileInfo(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::IO::FileSystemInfo(nativeTypeInfo)
				, mscorlib::System::Runtime::Serialization::ISerializable(NULL)
				{
				};
			
				FileInfo(MonoObject *nativeObject)
				: mscorlib::System::IO::FileSystemInfo(nativeObject)
				, mscorlib::System::Runtime::Serialization::ISerializable(nativeObject)
				{
				};
			
				~FileInfo()
				{
				};
			

				FileInfo & operator=(FileInfo &value) { __native_object__ = value.GetNativeObject(); return value; };
				bool operator==(FileInfo &value) { return mscorlib::System::Object::Equals(value); };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				void  Encrypt();
				void  Decrypt();
				mscorlib::System::IO::StreamReader  OpenText();
				mscorlib::System::IO::StreamWriter  CreateText();
				mscorlib::System::IO::StreamWriter  AppendText();
				mscorlib::System::IO::FileStream  Create();
				mscorlib::System::IO::FileStream  OpenRead();
				mscorlib::System::IO::FileStream  OpenWrite();
				mscorlib::System::IO::FileStream  Open(mscorlib::System::IO::FileMode::__ENUM__ mode);
				mscorlib::System::IO::FileStream  Open(mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access);
				mscorlib::System::IO::FileStream  Open(mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share);
				virtual void  Delete() override;
				void  MoveTo(mscorlib::System::String destFileName);
				void  MoveTo(const char *destFileName);
				mscorlib::System::IO::FileInfo  CopyTo(mscorlib::System::String destFileName);
				mscorlib::System::IO::FileInfo  CopyTo(const char *destFileName);
				mscorlib::System::IO::FileInfo  CopyTo(mscorlib::System::String destFileName, mscorlib::System::Boolean overwrite);
				mscorlib::System::IO::FileInfo  CopyTo(const char *destFileName, mscorlib::System::Boolean overwrite);
				virtual mscorlib::System::String  ToString() override;
				mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl();
				mscorlib::System::Security::AccessControl::FileSecurity  GetAccessControl(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections);
				mscorlib::System::IO::FileInfo  Replace(mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName);
				mscorlib::System::IO::FileInfo  Replace(const char *destinationFileName, const char *destinationBackupFileName);
				mscorlib::System::IO::FileInfo  Replace(mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors);
				mscorlib::System::IO::FileInfo  Replace(const char *destinationFileName, const char *destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors);
				void  SetAccessControl(mscorlib::System::Security::AccessControl::FileSecurity fileSecurity);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Properties
				__declspec(property(get=get_Exists)) mscorlib::System::Boolean  Exists;
				__declspec(property(get=get_Name)) mscorlib::System::String  Name;
				__declspec(property(get=get_IsReadOnly, put=set_IsReadOnly)) mscorlib::System::Boolean  IsReadOnly;
				__declspec(property(get=get_Length)) mscorlib::System::Int64  Length;
				__declspec(property(get=get_DirectoryName)) mscorlib::System::String  DirectoryName;
				__declspec(property(get=get_Directory)) mscorlib::System::IO::DirectoryInfo  Directory;
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

				//	Get/Set:IsReadOnly
				mscorlib::System::Boolean  get_IsReadOnly() const;
				void set_IsReadOnly(mscorlib::System::Boolean  value);

				//	Get:Length
				mscorlib::System::Int64  get_Length() const;

				//	Get:DirectoryName
				mscorlib::System::String  get_DirectoryName() const;

				//	Get:Directory
				mscorlib::System::IO::DirectoryInfo  get_Directory() const;

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
