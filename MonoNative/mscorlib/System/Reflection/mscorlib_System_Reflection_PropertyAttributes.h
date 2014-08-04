#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PROPERTYATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PROPERTYATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class PropertyAttributes
			{
			public:
				enum __ENUM__
				{
					None = 0,
					SpecialName = 512,
					RTSpecialName = 1024,
					HasDefault = 4096,
					Reserved2 = 8192,
					Reserved3 = 16384,
					Reserved4 = 32768,
					ReservedMask = 62464,
				};
			};

		}
	}
}
#endif
