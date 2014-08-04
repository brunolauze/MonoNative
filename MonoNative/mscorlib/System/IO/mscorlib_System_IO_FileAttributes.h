#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class FileAttributes
			{
			public:
				enum __ENUM__
				{
					ReadOnly = 1,
					Hidden = 2,
					System = 4,
					Directory = 16,
					Archive = 32,
					Device = 64,
					Normal = 128,
					Temporary = 256,
					SparseFile = 512,
					ReparsePoint = 1024,
					Compressed = 2048,
					Offline = 4096,
					NotContentIndexed = 8192,
					Encrypted = 16384,
					IntegrityStream = 32768,
					NoScrubData = 131072,
				};
			};

		}
	}
}
#endif
