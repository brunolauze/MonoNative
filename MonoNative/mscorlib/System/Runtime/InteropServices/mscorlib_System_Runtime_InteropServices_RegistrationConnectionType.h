#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_REGISTRATIONCONNECTIONTYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_REGISTRATIONCONNECTIONTYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class RegistrationConnectionType
				{
				public:
					enum __ENUM__
					{
						SingleUse = 0,
						MultipleUse = 1,
						MultiSeparate = 2,
						Suspended = 4,
						Surrogate = 8,
					};
				};

			}
		}
	}
}
#endif
