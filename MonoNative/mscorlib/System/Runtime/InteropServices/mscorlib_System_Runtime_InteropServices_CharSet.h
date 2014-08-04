#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CHARSET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_CHARSET_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class CharSet
				{
				public:
					enum __ENUM__
					{
						None = 1,
						Ansi = 2,
						Unicode = 3,
						Auto = 4,
					};
				};

			}
		}
	}
}
#endif
