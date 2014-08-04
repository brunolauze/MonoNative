#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_NUMBERSTYLES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_NUMBERSTYLES_H
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class NumberStyles
			{
			public:
				enum __ENUM__
				{
					None = 0,
					AllowLeadingWhite = 1,
					AllowTrailingWhite = 2,
					AllowLeadingSign = 4,
					Integer = 7,
					AllowTrailingSign = 8,
					AllowParentheses = 16,
					AllowDecimalPoint = 32,
					AllowThousands = 64,
					Number = 111,
					AllowExponent = 128,
					Float = 167,
					AllowCurrencySymbol = 256,
					Currency = 383,
					Any = 511,
					AllowHexSpecifier = 512,
					HexNumber = 515,
				};
			};

		}
	}
}
#endif
