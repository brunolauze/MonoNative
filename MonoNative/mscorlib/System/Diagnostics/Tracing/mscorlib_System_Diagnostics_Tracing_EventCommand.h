#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMAND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_TRACING_EVENTCOMMAND_H
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace Tracing
			{

				class EventCommand
				{
				public:
					enum __ENUM__
					{
						Update = 0,
						Disable = -3,
						Enable = -2,
						SendManifest = -1,
					};
				};

			}
		}
	}
}
#endif
