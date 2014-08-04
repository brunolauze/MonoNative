#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_UNICODECATEGORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GLOBALIZATION_UNICODECATEGORY_H
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class UnicodeCategory
			{
			public:
				enum __ENUM__
				{
					UppercaseLetter = 0,
					LowercaseLetter = 1,
					TitlecaseLetter = 2,
					ModifierLetter = 3,
					OtherLetter = 4,
					NonSpacingMark = 5,
					SpacingCombiningMark = 6,
					EnclosingMark = 7,
					DecimalDigitNumber = 8,
					LetterNumber = 9,
					OtherNumber = 10,
					SpaceSeparator = 11,
					LineSeparator = 12,
					ParagraphSeparator = 13,
					Control = 14,
					Format = 15,
					Surrogate = 16,
					PrivateUse = 17,
					ConnectorPunctuation = 18,
					DashPunctuation = 19,
					OpenPunctuation = 20,
					ClosePunctuation = 21,
					InitialQuotePunctuation = 22,
					FinalQuotePunctuation = 23,
					OtherPunctuation = 24,
					MathSymbol = 25,
					CurrencySymbol = 26,
					ModifierSymbol = 27,
					OtherSymbol = 28,
					OtherNotAssigned = 29,
				};
			};

		}
	}
}
#endif
