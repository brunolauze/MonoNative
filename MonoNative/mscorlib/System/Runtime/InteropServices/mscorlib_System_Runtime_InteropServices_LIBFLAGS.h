#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_LIBFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_LIBFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class LIBFLAGS
				{
				public:
					enum __ENUM__
					{
						LIBFLAG_FRESTRICTED = 1,
						LIBFLAG_FCONTROL = 2,
						LIBFLAG_FHIDDEN = 4,
						LIBFLAG_FHASDISKIMAGE = 8,
					};
				};

			}
		}
	}
}
#endif
