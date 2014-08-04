#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ATTRIBUTETARGETS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ATTRIBUTETARGETS_H
namespace mscorlib
{
	namespace System
	{

		class AttributeTargets
		{
		public:
			enum __ENUM__
			{
				Assembly = 1,
				Module = 2,
				Class = 4,
				Struct = 8,
				Enum = 16,
				Constructor = 32,
				Method = 64,
				Property = 128,
				Field = 256,
				Event = 512,
				Interface = 1024,
				Parameter = 2048,
				Delegate = 4096,
				ReturnValue = 8192,
				GenericParameter = 16384,
				All = 32767,
			};
		};

	}
}
#endif
