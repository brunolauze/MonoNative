#include <mscorlib/System/IO/mscorlib_System_IO_File.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Text/mscorlib_System_Text_Encoding.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StreamWriter.h>
#include <mscorlib/System/IO/mscorlib_System_IO_FileStream.h>
#include <mscorlib/System/Security/AccessControl/mscorlib_System_Security_AccessControl_FileSecurity.h>
#include <mscorlib/System/mscorlib_System_DateTime.h>
#include <mscorlib/System/IO/mscorlib_System_IO_StreamReader.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			void File::AppendAllText(mscorlib::System::String path, mscorlib::System::String contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllText", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::AppendAllText(const char *path, const char *contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = mono_string_new(Global::GetDomain(), contents);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllText", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::AppendAllText(mscorlib::System::String path, mscorlib::System::String contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllText", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::AppendAllText(const char *path, const char *contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = mono_string_new(Global::GetDomain(), contents);
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllText", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IO::StreamWriter File::AppendText(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::StreamWriter(__result__);
			}

			mscorlib::System::IO::StreamWriter File::AppendText(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::StreamWriter(__result__);
			}

			void File::Copy(mscorlib::System::String sourceFileName, mscorlib::System::String destFileName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destFileName).name());
					__parameters__[0] = (MonoObject*)sourceFileName;
					__parameters__[1] = (MonoObject*)destFileName;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Copy", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::Copy(const char *sourceFileName, const char *destFileName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), sourceFileName);
					__parameters__[1] = mono_string_new(Global::GetDomain(), destFileName);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Copy", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::Copy(mscorlib::System::String sourceFileName, mscorlib::System::String destFileName, mscorlib::System::Boolean overwrite)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destFileName).name());
					__parameter_types__[2] = Global::GetType(typeid(overwrite).name());
					__parameters__[0] = (MonoObject*)sourceFileName;
					__parameters__[1] = (MonoObject*)destFileName;
					__parameters__[2] = reinterpret_cast<void*>(overwrite);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Copy", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::Copy(const char *sourceFileName, const char *destFileName, mscorlib::System::Boolean overwrite)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType(typeid(overwrite).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), sourceFileName);
					__parameters__[1] = mono_string_new(Global::GetDomain(), destFileName);
					__parameters__[2] = reinterpret_cast<void*>(overwrite);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Copy", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IO::FileStream File::Create(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(mscorlib::System::String path, mscorlib::System::Int32 bufferSize)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = &bufferSize;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(const char *path, mscorlib::System::Int32 bufferSize)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = &bufferSize;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(mscorlib::System::String path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[2] = &__param_options__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(const char *path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[2] = &__param_options__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(mscorlib::System::String path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameter_types__[3] = Global::GetType(typeid(fileSecurity).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[2] = &__param_options__;
					__parameters__[3] = (MonoObject*)fileSecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Create(const char *path, mscorlib::System::Int32 bufferSize, mscorlib::System::IO::FileOptions::__ENUM__ options, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(bufferSize).name());
					__parameter_types__[2] = Global::GetType(typeid(options).name());
					__parameter_types__[3] = Global::GetType(typeid(fileSecurity).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = &bufferSize;
					mscorlib::System::Int32 __param_options__ = options;
					__parameters__[2] = &__param_options__;
					__parameters__[3] = (MonoObject*)fileSecurity;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Create", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::StreamWriter File::CreateText(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "CreateText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::StreamWriter(__result__);
			}

			mscorlib::System::IO::StreamWriter File::CreateText(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "CreateText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::StreamWriter(__result__);
			}

			void File::Delete(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Delete", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void File::Delete(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Delete", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean File::Exists(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Exists", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean File::Exists(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Exists", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Security::AccessControl::FileSecurity File::GetAccessControl(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetAccessControl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::FileSecurity File::GetAccessControl(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetAccessControl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::FileSecurity File::GetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(includeSections).name());
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_includeSections__ = includeSections;
					__parameters__[1] = &__param_includeSections__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetAccessControl", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			mscorlib::System::Security::AccessControl::FileSecurity File::GetAccessControl(const char *path, mscorlib::System::Security::AccessControl::AccessControlSections::__ENUM__ includeSections)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(includeSections).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					mscorlib::System::Int32 __param_includeSections__ = includeSections;
					__parameters__[1] = &__param_includeSections__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetAccessControl", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::AccessControl::FileSecurity(__result__);
			}

			mscorlib::System::IO::FileAttributes::__ENUM__ File::GetAttributes(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return static_cast<mscorlib::System::IO::FileAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			mscorlib::System::IO::FileAttributes::__ENUM__ File::GetAttributes(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetAttributes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return static_cast<mscorlib::System::IO::FileAttributes::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}

			mscorlib::System::DateTime File::GetCreationTime(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetCreationTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetCreationTime(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetCreationTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetCreationTimeUtc(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetCreationTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetCreationTimeUtc(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetCreationTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastAccessTime(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastAccessTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastAccessTime(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastAccessTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastAccessTimeUtc(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastAccessTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastAccessTimeUtc(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastAccessTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastWriteTime(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastWriteTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastWriteTime(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastWriteTime", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastWriteTimeUtc(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastWriteTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			mscorlib::System::DateTime File::GetLastWriteTimeUtc(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "GetLastWriteTimeUtc", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::DateTime(__result__);
			}

			void File::Move(mscorlib::System::String sourceFileName, mscorlib::System::String destFileName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destFileName).name());
					__parameters__[0] = (MonoObject*)sourceFileName;
					__parameters__[1] = (MonoObject*)destFileName;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Move", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::Move(const char *sourceFileName, const char *destFileName)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), sourceFileName);
					__parameters__[1] = mono_string_new(Global::GetDomain(), destFileName);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Move", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::IO::FileStream File::Open(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(mode).name());
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Open", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Open(const char *path, mscorlib::System::IO::FileMode::__ENUM__ mode)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(mode).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Open", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Open(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(mode).name());
					__parameter_types__[2] = Global::GetType(typeid(access).name());
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Open", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Open(const char *path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(mode).name());
					__parameter_types__[2] = Global::GetType(typeid(access).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Open", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Open(mscorlib::System::String path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(mode).name());
					__parameter_types__[2] = Global::GetType(typeid(access).name());
					__parameter_types__[3] = Global::GetType(typeid(share).name());
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Open", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::Open(const char *path, mscorlib::System::IO::FileMode::__ENUM__ mode, mscorlib::System::IO::FileAccess::__ENUM__ access, mscorlib::System::IO::FileShare::__ENUM__ share)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(mode).name());
					__parameter_types__[2] = Global::GetType(typeid(access).name());
					__parameter_types__[3] = Global::GetType(typeid(share).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					mscorlib::System::Int32 __param_mode__ = mode;
					__parameters__[1] = &__param_mode__;
					mscorlib::System::Int32 __param_access__ = access;
					__parameters__[2] = &__param_access__;
					mscorlib::System::Int32 __param_share__ = share;
					__parameters__[3] = &__param_share__;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Open", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::OpenRead(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "OpenRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::OpenRead(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "OpenRead", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::StreamReader File::OpenText(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "OpenText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::StreamReader(__result__);
			}

			mscorlib::System::IO::StreamReader File::OpenText(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "OpenText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::StreamReader(__result__);
			}

			mscorlib::System::IO::FileStream File::OpenWrite(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "OpenWrite", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			mscorlib::System::IO::FileStream File::OpenWrite(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "OpenWrite", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::IO::FileStream(__result__);
			}

			void File::Replace(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destinationFileName).name());
					__parameter_types__[2] = Global::GetType(typeid(destinationBackupFileName).name());
					__parameters__[0] = (MonoObject*)sourceFileName;
					__parameters__[1] = (MonoObject*)destinationFileName;
					__parameters__[2] = (MonoObject*)destinationBackupFileName;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Replace", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::Replace(const char *sourceFileName, const char *destinationFileName, const char *destinationBackupFileName)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), sourceFileName);
					__parameters__[1] = mono_string_new(Global::GetDomain(), destinationFileName);
					__parameters__[2] = mono_string_new(Global::GetDomain(), destinationBackupFileName);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Replace", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::Replace(mscorlib::System::String sourceFileName, mscorlib::System::String destinationFileName, mscorlib::System::String destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(sourceFileName).name());
					__parameter_types__[1] = Global::GetType(typeid(destinationFileName).name());
					__parameter_types__[2] = Global::GetType(typeid(destinationBackupFileName).name());
					__parameter_types__[3] = Global::GetType(typeid(ignoreMetadataErrors).name());
					__parameters__[0] = (MonoObject*)sourceFileName;
					__parameters__[1] = (MonoObject*)destinationFileName;
					__parameters__[2] = (MonoObject*)destinationBackupFileName;
					__parameters__[3] = reinterpret_cast<void*>(ignoreMetadataErrors);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Replace", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
			}

			void File::Replace(const char *sourceFileName, const char *destinationFileName, const char *destinationBackupFileName, mscorlib::System::Boolean ignoreMetadataErrors)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[3] = Global::GetType(typeid(ignoreMetadataErrors).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), sourceFileName);
					__parameters__[1] = mono_string_new(Global::GetDomain(), destinationFileName);
					__parameters__[2] = mono_string_new(Global::GetDomain(), destinationBackupFileName);
					__parameters__[3] = reinterpret_cast<void*>(ignoreMetadataErrors);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Replace", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
			}

			void File::SetAccessControl(mscorlib::System::String path, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(fileSecurity).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)fileSecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetAccessControl", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetAccessControl(const char *path, mscorlib::System::Security::AccessControl::FileSecurity fileSecurity)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(fileSecurity).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)fileSecurity;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetAccessControl", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetAttributes(mscorlib::System::String path, mscorlib::System::IO::FileAttributes::__ENUM__ fileAttributes)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(fileAttributes).name());
					__parameters__[0] = (MonoObject*)path;
					mscorlib::System::Int32 __param_fileAttributes__ = fileAttributes;
					__parameters__[1] = &__param_fileAttributes__;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetAttributes(const char *path, mscorlib::System::IO::FileAttributes::__ENUM__ fileAttributes)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(fileAttributes).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					mscorlib::System::Int32 __param_fileAttributes__ = fileAttributes;
					__parameters__[1] = &__param_fileAttributes__;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetAttributes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetCreationTime(mscorlib::System::String path, mscorlib::System::DateTime creationTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(creationTime).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)creationTime;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetCreationTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetCreationTime(const char *path, mscorlib::System::DateTime creationTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(creationTime).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)creationTime;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetCreationTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetCreationTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime creationTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(creationTimeUtc).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)creationTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetCreationTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetCreationTimeUtc(const char *path, mscorlib::System::DateTime creationTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(creationTimeUtc).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)creationTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetCreationTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastAccessTime(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastAccessTime).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastAccessTime;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastAccessTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastAccessTime(const char *path, mscorlib::System::DateTime lastAccessTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(lastAccessTime).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)lastAccessTime;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastAccessTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastAccessTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastAccessTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastAccessTimeUtc).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastAccessTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastAccessTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastAccessTimeUtc(const char *path, mscorlib::System::DateTime lastAccessTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(lastAccessTimeUtc).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)lastAccessTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastAccessTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastWriteTime(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastWriteTime).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastWriteTime;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastWriteTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastWriteTime(const char *path, mscorlib::System::DateTime lastWriteTime)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(lastWriteTime).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)lastWriteTime;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastWriteTime", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastWriteTimeUtc(mscorlib::System::String path, mscorlib::System::DateTime lastWriteTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(lastWriteTimeUtc).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)lastWriteTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastWriteTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::SetLastWriteTimeUtc(const char *path, mscorlib::System::DateTime lastWriteTimeUtc)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(lastWriteTimeUtc).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)lastWriteTimeUtc;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "SetLastWriteTimeUtc", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			std::vector<mscorlib::System::Byte*> File::ReadAllBytes(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Byte*> File::ReadAllBytes(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::String*> File::ReadAllLines(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllLines", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> File::ReadAllLines(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllLines", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> File::ReadAllLines(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)encoding;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
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

			std::vector<mscorlib::System::String*> File::ReadAllLines(const char *path, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)encoding;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
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

			mscorlib::System::String File::ReadAllText(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String File::ReadAllText(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllText", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String File::ReadAllText(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)encoding;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllText", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String File::ReadAllText(const char *path, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)encoding;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadAllText", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			void File::WriteAllBytes(mscorlib::System::String path, std::vector<mscorlib::System::Byte*> bytes)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllBytes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllBytes(const char *path, std::vector<mscorlib::System::Byte*> bytes)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(bytes, typeid(mscorlib::System::Byte).name());
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllBytes", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(mscorlib::System::String path, std::vector<mscorlib::System::String*> contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = Global::FromArray<mscorlib::System::String*>(contents, typeid(mscorlib::System::String).name());
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(const char *path, std::vector<mscorlib::System::String*> contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = Global::FromArray<mscorlib::System::String*>(contents, typeid(mscorlib::System::String).name());
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(mscorlib::System::String path, std::vector<mscorlib::System::String*> contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = Global::FromArray<mscorlib::System::String*>(contents, typeid(mscorlib::System::String).name());
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(const char *path, std::vector<mscorlib::System::String*> contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = Global::FromArray<mscorlib::System::String*>(contents, typeid(mscorlib::System::String).name());
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllText(mscorlib::System::String path, mscorlib::System::String contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllText", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllText(const char *path, const char *contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = mono_string_new(Global::GetDomain(), contents);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllText", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllText(mscorlib::System::String path, mscorlib::System::String contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllText", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllText(const char *path, const char *contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = mono_string_new(Global::GetDomain(), contents);
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllText", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::Encrypt(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Encrypt", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void File::Encrypt(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Encrypt", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void File::Decrypt(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Decrypt", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			void File::Decrypt(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "Decrypt", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> File::ReadLines(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadLines", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> File::ReadLines(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadLines", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> File::ReadLines(mscorlib::System::String path, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)encoding;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> File::ReadLines(const char *path, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)encoding;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "ReadLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String>(__result__);
			}

			void File::AppendAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::AppendAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)contents;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::AppendAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllLines", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::AppendAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)contents;
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "AppendAllLines", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)contents;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(mscorlib::System::String path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)contents;
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}

			void File::WriteAllLines(const char *path, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::String> contents, mscorlib::System::Text::Encoding encoding)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType(typeid(contents).name());
					__parameter_types__[2] = Global::GetType(typeid(encoding).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = (MonoObject*)contents;
					__parameters__[2] = (MonoObject*)encoding;
					Global::InvokeMethod("mscorlib", "System.IO", "File", 0, NULL, "WriteAllLines", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
			}


		}
	}
}
