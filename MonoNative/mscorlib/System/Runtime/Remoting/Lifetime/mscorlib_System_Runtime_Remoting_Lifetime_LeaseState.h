#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASESTATE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Lifetime
				{

					class LeaseState
					{
					public:
						enum __ENUM__
						{
							Null = 0,
							Initial = 1,
							Active = 2,
							Renewing = 3,
							Expired = 4,
						};
					};

				}
			}
		}
	}
}
#endif
