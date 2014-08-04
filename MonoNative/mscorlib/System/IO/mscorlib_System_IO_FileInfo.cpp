#include <mscorlib/System/IO/mscorlib_System_IO_FileInfo.h>
#include <mscorlib/System/IO/mscorlib_System_IO_DirectoryInfo.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StreamReader.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StreamWriter.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSecurity.h>
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
			void FileInfo::Encrypt()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Encrypt", __native_object__, 0, NULL, NULL, NULL);
			}

			void FileInfo::Decrypt()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Decrypt", __native_object__, 0, NULL, NULL, NULL);
			}

			mscorlib::System::IO::StreamReader FileInfo::OpenText()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "OpenText", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IO::StreamReader(__result__);
			}

			mscorlib::System::IO::StreamWriter FileInfo::CreateText()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "CreateText", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IO::StreamWriter(__result__);
			}

			mscorlib::System::IO::StreamWriter FileInfo::AppendText()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "AppendText", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IO::StreamWriter(__result__);
			}

			mscorlib::System::IO::FileStream FileInfo::Create()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Create", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream FileInfo::OpenRead()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "OpenRead", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream FileInfo::OpenWrite()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "OpenWrite", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream FileInfo::Open(mscorlib::System::IO::FileMode::__ENUM__ mode)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(mode).name());
					__parameters__[0] = reinterpret_cast<void*>(mode);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Open", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream FileInfo::Open(mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(mode).name());
					__parameter_types__[1] = Global::GetType(typeid(access).name());
					__parameters__[0] = reinterpret_cast<void*>(mode);
					__parameters__[1] = reinterpret_cast<void*>(access);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Open", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream FileInfo::Open(mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(mode).name());
					__parameter_types__[1] = Global::GetType(typeid(access).name());
					__parameter_types__[2] = Global::GetType(typeid(share).name());
					__parameters__[0] = reinterpret_cast<void*>(mode);
					__parameters__[1] = reinterpret_cast<void*>(access);
					__parameters__[2] = reinterpret_cast<void*>(share);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Open", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			void FileInfo::Delete()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Delete", __native_object__, 0, NULL, NULL, NULL);
			}

			void FileInfo::MoveTo(mscorlib::System::String destFileName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(destFileName).name());
					__parameters__[0] = (MonoObject*)destFileName;
					Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "MoveTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IO::FileInfo FileInfo::CopyTo(mscorlib::System::String destFileName)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(destFileName).name());
					__parameters__[0] = (MonoObject*)destFileName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "CopyTo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileInfo(__result__);
			}

			mscorlib::System::IO::FileInfo FileInfo::CopyTo(mscorlib::System::String destFileName, mscorlib::System::Boolean overwrite)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(destFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(overwrite).name());
					__parameters__[0] = (MonoObject*)destFileName;
					__parameters__[1] = reinterpret_cast<void*>(overwrite);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "CopyTo", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileInfo(__result__);
			}

			mscorlib::System::String FileInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Security::AccessControl::FileSecurity FileInfo::GetAccessControl()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "GetAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::FileSecurity FileInfo::GetAccessControl(mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(includeSections).name());
					__parameters__[0] = reinterpret_cast<void*>(includeSections);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "GetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			mscorlib::System::IO::FileInfo FileInfo::Replace(mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(destinationFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destinationBackupFileName).name());
					__parameters__[0] = (MonoObject*)destinationFileName;
					__parameters__[1] = (MonoObject*)destinationBackupFileName;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Replace", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileInfo(__result__);
			}

			mscorlib::System::IO::FileInfo FileInfo::Replace(mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(destinationFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destinationBackupFileName).name());
					__parameter_types__[2] = Global::GetType(typeid(ignoreMetadataErrors).name());
					__parameters__[0] = (MonoObject*)destinationFileName;
					__parameters__[1] = (MonoObject*)destinationBackupFileName;
					__parameters__[2] = reinterpret_cast<void*>(ignoreMetadataErrors);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "Replace", __native_object__, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileInfo(__result__);
			}

			void FileInfo::SetAccessControl(mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(fileSecurity).name());
					__parameters__[0] = (MonoObject*)fileSecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "SetAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}

			//Get Set Properties Methods
			//	Get:Exists
			mscorlib::System::Boolean  FileInfo::get_Exists()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "get_Exists", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Name
			mscorlib::System::String  FileInfo::get_Name()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:IsReadOnly
			mscorlib::System::Boolean  FileInfo::get_IsReadOnly()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "get_IsReadOnly", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void FileInfo::set_IsReadOnly(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "set_IsReadOnly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get:Length
			mscorlib::System::Int64  FileInfo::get_Length()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "get_Length", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
			}


			//	Get:DirectoryName
			mscorlib::System::String  FileInfo::get_DirectoryName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "get_DirectoryName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Directory
			mscorlib::System::IO::DirectoryInfo  FileInfo::get_Directory()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileInfo", 0, NULL, "get_Directory", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::IO::DirectoryInfo(__result__);
			}


			//	Get:FullName
			mscorlib::System::String  FileInfo::get_FullName()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Extension
			mscorlib::System::String  FileInfo::get_Extension()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Extension", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Attributes
			mscorlib::System::IO::FileAttributes::__ENUM__  FileInfo::get_Attributes()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::IO::FileAttributes::__ENUM__*)mono_object_unbox(__result__);
			}

			void FileInfo::set_Attributes(mscorlib::System::IO::FileAttributes::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_Attributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CreationTime
			mscorlib::System::DateTime  FileInfo::get_CreationTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_CreationTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileInfo::set_CreationTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_CreationTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CreationTimeUtc
			mscorlib::System::DateTime  FileInfo::get_CreationTimeUtc()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_CreationTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileInfo::set_CreationTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_CreationTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastAccessTime
			mscorlib::System::DateTime  FileInfo::get_LastAccessTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastAccessTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileInfo::set_LastAccessTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastAccessTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastAccessTimeUtc
			mscorlib::System::DateTime  FileInfo::get_LastAccessTimeUtc()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastAccessTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileInfo::set_LastAccessTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastAccessTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastWriteTime
			mscorlib::System::DateTime  FileInfo::get_LastWriteTime()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastWriteTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileInfo::set_LastWriteTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastWriteTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastWriteTimeUtc
			mscorlib::System::DateTime  FileInfo::get_LastWriteTimeUtc()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastWriteTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileInfo::set_LastWriteTimeUtc(mscorlib::System::DateTime  value)
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
