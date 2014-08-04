#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PARAMETERATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_PARAMETERATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ParameterAttributes
			{
			public:
				enum __ENUM__
				{
					None = 0,
					In = 1,
					Out = 2,
					Lcid = 4,
					Retval = 8,
					Optional = 16,
					HasDefault = 4096,
					HasFieldMarshal = 8192,
					Reserved3 = 16384,
					Reserved4 = 32768,
					ReservedMask = 61440,
				};
			};

		}
	}
}
#endif
