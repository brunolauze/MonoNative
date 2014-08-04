#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PORTABLEEXECUTABLEKINDS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PORTABLEEXECUTABLEKINDS_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class PortableExecutableKinds
			{
			public:
				enum __ENUM__
				{
					NotAPortableExecutableImage = 0,
					ILOnly = 1,
					Required32Bit = 2,
					PE32Plus = 4,
					Unmanaged32Bit = 8,
					Preferred32Bit = 16,
				};
			};

		}
	}
}
#endif
