#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EVENTATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EVENTATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class EventAttributes
			{
			public:
				enum __ENUM__
				{
					None = 0,
					SpecialName = 512,
					ReservedMask = 1024,
					RTSpecialName = 1024,
				};
			};

		}
	}
}
#endif
