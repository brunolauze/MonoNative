#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEMODE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEMODE_H
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class FileMode
			{
			public:
				enum __ENUM__
				{
					CreateNew = 1,
					Create = 2,
					Open = 3,
					OpenOrCreate = 4,
					Truncate = 5,
					Append = 6,
				};
			};

		}
	}
}
#endif
