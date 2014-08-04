#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CULTURETYPES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_CULTURETYPES_H
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureTypes
			{
			public:
				enum __ENUM__
				{
					NeutralCultures = 1,
					SpecificCultures = 2,
					InstalledWin32Cultures = 4,
					AllCultures = 7,
					UserCustomCulture = 8,
					ReplacementCultures = 16,
					WindowsOnlyCultures = 32,
					FrameworkCultures = 64,
				};
			};

		}
	}
}
#endif
