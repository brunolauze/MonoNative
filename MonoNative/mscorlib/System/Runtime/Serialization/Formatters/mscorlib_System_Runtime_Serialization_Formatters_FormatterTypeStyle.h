#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_FORMATTERTYPESTYLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_FORMATTERTYPESTYLE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{
				namespace Formatters
				{

					class FormatterTypeStyle
					{
					public:
						enum __ENUM__
						{
							TypesWhenNeeded = 0,
							TypesAlways = 1,
							XsdString = 2,
						};
					};

				}
			}
		}
	}
}
#endif
