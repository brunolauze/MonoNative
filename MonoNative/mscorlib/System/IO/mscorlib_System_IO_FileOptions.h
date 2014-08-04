#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_FILEOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class FileOptions
			{
			public:
				enum __ENUM__
				{
					None = 0,
					Encrypted = 16384,
					DeleteOnClose = 67108864,
					SequentialScan = 134217728,
					RandomAccess = 268435456,
					Asynchronous = 1073741824,
					WriteThrough = -2147483648,
				};
			};

		}
	}
}
#endif
