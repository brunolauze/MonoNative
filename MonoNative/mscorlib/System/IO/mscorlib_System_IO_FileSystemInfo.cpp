#include <mscorlib/System/IO/mscorlib_System_IO_FileSystemInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
			void FileSystemInfo::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(info).name());
					__parameter_types__[1] = Global::GetType(typeid(context).name());
					__parameters__[0] = (MonoObject*)info;
					__parameters__[1] = (MonoObject*)context;
					Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
			}

			void FileSystemInfo::Delete()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "Delete", __native_object__, 0, NULL, NULL, NULL);
			}

			void FileSystemInfo::Refresh()
			{
					Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "Refresh", __native_object__, 0, NULL, NULL, NULL);
			}

			//Get Set Properties Methods
			//	Get:Exists
			mscorlib::System::Boolean  FileSystemInfo::get_Exists() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Exists", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:Name
			mscorlib::System::String  FileSystemInfo::get_Name() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:FullName
			mscorlib::System::String  FileSystemInfo::get_FullName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_FullName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Extension
			mscorlib::System::String  FileSystemInfo::get_Extension() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Extension", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get/Set:Attributes
			mscorlib::System::IO::FileAttributes::__ENUM__  FileSystemInfo::get_Attributes() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_Attributes", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::IO::FileAttributes::__ENUM__*)mono_object_unbox(__result__);
			}

			void FileSystemInfo::set_Attributes(mscorlib::System::IO::FileAttributes::__ENUM__  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_Attributes", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CreationTime
			mscorlib::System::DateTime  FileSystemInfo::get_CreationTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_CreationTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileSystemInfo::set_CreationTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_CreationTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:CreationTimeUtc
			mscorlib::System::DateTime  FileSystemInfo::get_CreationTimeUtc() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_CreationTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileSystemInfo::set_CreationTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_CreationTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastAccessTime
			mscorlib::System::DateTime  FileSystemInfo::get_LastAccessTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastAccessTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileSystemInfo::set_LastAccessTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastAccessTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastAccessTimeUtc
			mscorlib::System::DateTime  FileSystemInfo::get_LastAccessTimeUtc() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastAccessTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileSystemInfo::set_LastAccessTimeUtc(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastAccessTimeUtc", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastWriteTime
			mscorlib::System::DateTime  FileSystemInfo::get_LastWriteTime() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastWriteTime", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileSystemInfo::set_LastWriteTime(mscorlib::System::DateTime  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "set_LastWriteTime", __native_object__, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:LastWriteTimeUtc
			mscorlib::System::DateTime  FileSystemInfo::get_LastWriteTimeUtc() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "FileSystemInfo", 0, NULL, "get_LastWriteTimeUtc", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::DateTime(__result__);
			}

			void FileSystemInfo::set_LastWriteTimeUtc(mscorlib::System::DateTime  value)
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
