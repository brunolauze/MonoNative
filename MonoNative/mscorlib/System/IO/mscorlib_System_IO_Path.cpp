#include <mscorlib/System/IO/mscorlib_System_IO_Path.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			//Public Methods
			mscorlib::System::String Path::ChangeExtension(mscorlib::System::String path, mscorlib::System::String extension)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(extension).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = (MonoObject*)extension;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "ChangeExtension", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::ChangeExtension(const char *path, const char *extension)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					__parameters__[1] = mono_string_new(Global::GetDomain(), extension);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "ChangeExtension", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(mscorlib::System::String path1, mscorlib::System::String path2)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path1).name());
					__parameter_types__[1] = Global::GetType(typeid(path2).name());
					__parameters__[0] = (MonoObject*)path1;
					__parameters__[1] = (MonoObject*)path2;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(const char *path1, const char *path2)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path1);
					__parameters__[1] = mono_string_new(Global::GetDomain(), path2);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetDirectoryName(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetDirectoryName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetDirectoryName(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetDirectoryName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetExtension(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetExtension", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetExtension(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetExtension", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetFileName(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetFileName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetFileName(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetFileName", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetFileNameWithoutExtension(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetFileNameWithoutExtension", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetFileNameWithoutExtension(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetFileNameWithoutExtension", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetFullPath(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetFullPath", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetFullPath(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetFullPath", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetPathRoot(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetPathRoot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetPathRoot(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetPathRoot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetTempFileName()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetTempFileName", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::GetTempPath()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetTempPath", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Boolean Path::HasExtension(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "HasExtension", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Path::HasExtension(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "HasExtension", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Path::IsPathRooted(mscorlib::System::String path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameters__[0] = (MonoObject*)path;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "IsPathRooted", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Boolean Path::IsPathRooted(const char *path)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "IsPathRooted", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			std::vector<mscorlib::System::Char*> Path::GetInvalidFileNameChars()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetInvalidFileNameChars", NullMonoObject, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			std::vector<mscorlib::System::Char*> Path::GetInvalidPathChars()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetInvalidPathChars", NullMonoObject, 0, NULL, NULL, NULL);
					MonoArray *__array_ptr__ = (MonoArray*)__result__;
					uintptr_t __array_length__ = mono_array_length(__array_ptr__);
					std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
					for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
					{
						MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
						__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
					}
					return __array_result__;
			}

			mscorlib::System::String Path::GetRandomFileName()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "GetRandomFileName", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(std::vector<mscorlib::System::String*> paths)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
					__parameters__[0] = Global::FromArray<mscorlib::System::String*>(paths, typeid(mscorlib::System::String).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(mscorlib::System::String path1, mscorlib::System::String path2, mscorlib::System::String path3)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType(typeid(path1).name());
					__parameter_types__[1] = Global::GetType(typeid(path2).name());
					__parameter_types__[2] = Global::GetType(typeid(path3).name());
					__parameters__[0] = (MonoObject*)path1;
					__parameters__[1] = (MonoObject*)path2;
					__parameters__[2] = (MonoObject*)path3;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(const char *path1, const char *path2, const char *path3)
			{
					MonoType *__parameter_types__[3];
					void *__parameters__[3];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path1);
					__parameters__[1] = mono_string_new(Global::GetDomain(), path2);
					__parameters__[2] = mono_string_new(Global::GetDomain(), path3);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(mscorlib::System::String path1, mscorlib::System::String path2, mscorlib::System::String path3, mscorlib::System::String path4)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType(typeid(path1).name());
					__parameter_types__[1] = Global::GetType(typeid(path2).name());
					__parameter_types__[2] = Global::GetType(typeid(path3).name());
					__parameter_types__[3] = Global::GetType(typeid(path4).name());
					__parameters__[0] = (MonoObject*)path1;
					__parameters__[1] = (MonoObject*)path2;
					__parameters__[2] = (MonoObject*)path3;
					__parameters__[3] = (MonoObject*)path4;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::String Path::Combine(const char *path1, const char *path2, const char *path3, const char *path4)
			{
					MonoType *__parameter_types__[4];
					void *__parameters__[4];
					__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
					__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
					__parameters__[0] = mono_string_new(Global::GetDomain(), path1);
					__parameters__[1] = mono_string_new(Global::GetDomain(), path2);
					__parameters__[2] = mono_string_new(Global::GetDomain(), path3);
					__parameters__[3] = mono_string_new(Global::GetDomain(), path4);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.IO", "Path", 0, NULL, "Combine", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::String(__result__);
			}

				//	Get/Set:InvalidPathChars
			std::vector<mscorlib::System::Char*> Path::get_InvalidPathChars()
			{
				MonoObject *__result__ = Global::GetFieldValue("mscorlib", "System.IO", "Path", 0, NULL, "InvalidPathChars");
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Char*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back((mscorlib::System::Char *)mono_object_unbox(__array_item__));
				}
				return __array_result__;
			}

			void Path::set_InvalidPathChars(std::vector<mscorlib::System::Char*>  value)
			{
				throw;
			}

				//	Get/Set:AltDirectorySeparatorChar
			mscorlib::System::Char Path::get_AltDirectorySeparatorChar()
			{
				return Global::GetFieldCharValue("mscorlib", "System.IO", "Path", 0, NULL, "AltDirectorySeparatorChar");
			}

			void Path::set_AltDirectorySeparatorChar(mscorlib::System::Char  value)
			{
				throw;
			}

				//	Get/Set:DirectorySeparatorChar
			mscorlib::System::Char Path::get_DirectorySeparatorChar()
			{
				return Global::GetFieldCharValue("mscorlib", "System.IO", "Path", 0, NULL, "DirectorySeparatorChar");
			}

			void Path::set_DirectorySeparatorChar(mscorlib::System::Char  value)
			{
				throw;
			}

				//	Get/Set:PathSeparator
			mscorlib::System::Char Path::get_PathSeparator()
			{
				return Global::GetFieldCharValue("mscorlib", "System.IO", "Path", 0, NULL, "PathSeparator");
			}

			void Path::set_PathSeparator(mscorlib::System::Char  value)
			{
				throw;
			}

				//	Get/Set:VolumeSeparatorChar
			mscorlib::System::Char Path::get_VolumeSeparatorChar()
			{
				return Global::GetFieldCharValue("mscorlib", "System.IO", "Path", 0, NULL, "VolumeSeparatorChar");
			}

			void Path::set_VolumeSeparatorChar(mscorlib::System::Char  value)
			{
				throw;
			}


		}
	}
}
