#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_DATETIMESTYLES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_DATETIMESTYLES_H
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class DateTimeStyles
			{
			public:
				enum __ENUM__
				{
					None = 0,
					AllowLeadingWhite = 1,
					AllowTrailingWhite = 2,
					AllowInnerWhite = 4,
					AllowWhiteSpaces = 7,
					NoCurrentDateDefault = 8,
					AdjustToUniversal = 16,
					AssumeLocal = 32,
					AssumeUniversal = 64,
					RoundtripKind = 128,
				};
			};

		}
	}
}
#endif
