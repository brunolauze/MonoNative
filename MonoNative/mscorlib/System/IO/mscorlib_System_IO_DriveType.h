#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DRIVETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_IO_DRIVETYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class DriveType
			{
			public:
				enum __ENUM__
				{
					Unknown = 0,
					NoRootDirectory = 1,
					Removable = 2,
					Fixed = 3,
					Network = 4,
					CDRom = 5,
					Ram = 6,
				};
			};

		}
	}
}
#endif
