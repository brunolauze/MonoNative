#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_GCNOTIFICATIONSTATUS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_GCNOTIFICATIONSTATUS_H
namespace mscorlib
{
	namespace System
	{

		class GCNotificationStatus
		{
		public:
			enum __ENUM__
			{
				Succeeded = 0,
				Failed = 1,
				Canceled = 2,
				Timeout = 3,
				NotApplicable = 4,
			};
		};

	}
}
#endif
