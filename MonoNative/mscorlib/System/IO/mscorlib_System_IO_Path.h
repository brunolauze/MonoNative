#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_PATH_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_PATH_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Path
				: public mscorlib::System::Object
			{
			public:
				Path(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				Path(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~Path()
				{
				};
			

				Path & operator=(Path &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static mscorlib::System::String  ChangeExtension(mscorlib::System::String path, mscorlib::System::String extension);
				static mscorlib::System::String  ChangeExtension(const char *path, const char *extension);
				static mscorlib::System::String  Combine(mscorlib::System::String path1, mscorlib::System::String path2);
				static mscorlib::System::String  Combine(const char *path1, const char *path2);
				static mscorlib::System::String  GetDirectoryName(mscorlib::System::String path);
				static mscorlib::System::String  GetDirectoryName(const char *path);
				static mscorlib::System::String  GetExtension(mscorlib::System::String path);
				static mscorlib::System::String  GetExtension(const char *path);
				static mscorlib::System::String  GetFileName(mscorlib::System::String path);
				static mscorlib::System::String  GetFileName(const char *path);
				static mscorlib::System::String  GetFileNameWithoutExtension(mscorlib::System::String path);
				static mscorlib::System::String  GetFileNameWithoutExtension(const char *path);
				static mscorlib::System::String  GetFullPath(mscorlib::System::String path);
				static mscorlib::System::String  GetFullPath(const char *path);
				static mscorlib::System::String  GetPathRoot(mscorlib::System::String path);
				static mscorlib::System::String  GetPathRoot(const char *path);
				static mscorlib::System::String  GetTempFileName();
				static mscorlib::System::String  GetTempPath();
				static mscorlib::System::Boolean  HasExtension(mscorlib::System::String path);
				static mscorlib::System::Boolean  HasExtension(const char *path);
				static mscorlib::System::Boolean  IsPathRooted(mscorlib::System::String path);
				static mscorlib::System::Boolean  IsPathRooted(const char *path);
				static std::vector<mscorlib::System::Char*>  GetInvalidFileNameChars();
				static std::vector<mscorlib::System::Char*>  GetInvalidPathChars();
				static mscorlib::System::String  GetRandomFileName();
				static mscorlib::System::String  Combine(std::vector<mscorlib::System::String*> paths);
				static mscorlib::System::String  Combine(mscorlib::System::String path1, mscorlib::System::String path2, mscorlib::System::String path3);
				static mscorlib::System::String  Combine(const char *path1, const char *path2, const char *path3);
				static mscorlib::System::String  Combine(mscorlib::System::String path1, mscorlib::System::String path2, mscorlib::System::String path3, mscorlib::System::String path4);
				static mscorlib::System::String  Combine(const char *path1, const char *path2, const char *path3, const char *path4);
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Fields
				static Property<std::vector<mscorlib::System::Char*> , mscorlib::System::IO::Path> InvalidPathChars;
				static Property<mscorlib::System::Char , mscorlib::System::IO::Path> AltDirectorySeparatorChar;
				static Property<mscorlib::System::Char , mscorlib::System::IO::Path> DirectorySeparatorChar;
				static Property<mscorlib::System::Char , mscorlib::System::IO::Path> PathSeparator;
				static Property<mscorlib::System::Char , mscorlib::System::IO::Path> VolumeSeparatorChar;

				//	Get/Set:InvalidPathChars
				static std::vector<mscorlib::System::Char*>  get_InvalidPathChars();
				static void set_InvalidPathChars(std::vector<mscorlib::System::Char*>  value);

				//	Get/Set:AltDirectorySeparatorChar
				static mscorlib::System::Char  get_AltDirectorySeparatorChar();
				static void set_AltDirectorySeparatorChar(mscorlib::System::Char  value);

				//	Get/Set:DirectorySeparatorChar
				static mscorlib::System::Char  get_DirectorySeparatorChar();
				static void set_DirectorySeparatorChar(mscorlib::System::Char  value);

				//	Get/Set:PathSeparator
				static mscorlib::System::Char  get_PathSeparator();
				static void set_PathSeparator(mscorlib::System::Char  value);

				//	Get/Set:VolumeSeparatorChar
				static mscorlib::System::Char  get_VolumeSeparatorChar();
				static void set_VolumeSeparatorChar(mscorlib::System::Char  value);

			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
