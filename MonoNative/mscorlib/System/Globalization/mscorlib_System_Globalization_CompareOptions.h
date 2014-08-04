#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_COMPAREOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_COMPAREOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CompareOptions
			{
			public:
				enum __ENUM__
				{
					None = 0,
					IgnoreCase = 1,
					IgnoreNonSpace = 2,
					IgnoreSymbols = 4,
					IgnoreKanaType = 8,
					IgnoreWidth = 16,
					OrdinalIgnoreCase = 268435456,
					StringSort = 536870912,
					Ordinal = 1073741824,
				};
			};

		}
	}
}
#endif
