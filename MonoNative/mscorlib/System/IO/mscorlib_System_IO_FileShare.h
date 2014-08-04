#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILESHARE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILESHARE_H
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class FileShare
			{
			public:
				enum __ENUM__
				{
					None = 0,
					Read = 1,
					Write = 2,
					ReadWrite = 3,
					Delete = 4,
					Inheritable = 16,
				};
			};

		}
	}
}
#endif
