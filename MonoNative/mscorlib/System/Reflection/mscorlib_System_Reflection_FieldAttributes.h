#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_FIELDATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_FIELDATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class FieldAttributes
			{
			public:
				enum __ENUM__
				{
					PrivateScope = 0,
					Private = 1,
					FamANDAssem = 2,
					Assembly = 3,
					Family = 4,
					FamORAssem = 5,
					Public = 6,
					FieldAccessMask = 7,
					Static = 16,
					InitOnly = 32,
					Literal = 64,
					NotSerialized = 128,
					HasFieldRVA = 256,
					SpecialName = 512,
					RTSpecialName = 1024,
					HasFieldMarshal = 4096,
					PinvokeImpl = 8192,
					HasDefault = 32768,
					ReservedMask = 38144,
				};
			};

		}
	}
}
#endif
