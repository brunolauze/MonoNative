#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_APARTMENTSTATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_THREADING_APARTMENTSTATE_H
namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			class ApartmentState
			{
			public:
				enum __ENUM__
				{
					STA = 0,
					MTA = 1,
					Unknown = 2,
				};
			};

		}
	}
}
#endif
