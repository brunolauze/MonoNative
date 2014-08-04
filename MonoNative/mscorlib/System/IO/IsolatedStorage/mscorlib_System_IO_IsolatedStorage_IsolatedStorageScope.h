#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGESCOPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_ISOLATEDSTORAGE_ISOLATEDSTORAGESCOPE_H
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{
			namespace IsolatedStorage
			{

				class IsolatedStorageScope
				{
				public:
					enum __ENUM__
					{
						None = 0,
						User = 1,
						Domain = 2,
						Assembly = 4,
						Roaming = 8,
						Machine = 16,
						Application = 32,
					};
				};

			}
		}
	}
}
#endif
