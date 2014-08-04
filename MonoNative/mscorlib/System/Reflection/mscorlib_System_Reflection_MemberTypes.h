#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MEMBERTYPES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_MEMBERTYPES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MemberTypes
			{
			public:
				enum __ENUM__
				{
					Constructor = 1,
					Event = 2,
					Field = 4,
					Method = 8,
					Property = 16,
					TypeInfo = 32,
					Custom = 64,
					NestedType = 128,
					All = 191,
				};
			};

		}
	}
}
#endif
