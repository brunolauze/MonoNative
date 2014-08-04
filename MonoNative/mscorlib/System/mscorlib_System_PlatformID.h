#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_PLATFORMID_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_PLATFORMID_H
namespace mscorlib
{
	namespace System
	{

		class PlatformID
		{
		public:
			enum __ENUM__
			{
				Win32S = 0,
				Win32Windows = 1,
				Win32NT = 2,
				WinCE = 3,
				Unix = 4,
				Xbox = 5,
				MacOSX = 6,
			};
		};

	}
}
#endif
