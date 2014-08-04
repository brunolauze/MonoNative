#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTLEVEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTLEVEL_H
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				class EventLevel
				{
				public:
					enum __ENUM__
					{
						LogAlways = 0,
						Critical = 1,
						Error = 2,
						Warning = 3,
						Informational = 4,
						Verbose = 5,
					};
				};

			}
		}
	}
}
#endif
