#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATORLEVEL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_ACTIVATORLEVEL_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Activation
				{

					class ActivatorLevel
					{
					public:
						enum __ENUM__
						{
							Construction = 4,
							Context = 8,
							AppDomain = 12,
							Process = 16,
							Machine = 20,
						};
					};

				}
			}
		}
	}
}
#endif
