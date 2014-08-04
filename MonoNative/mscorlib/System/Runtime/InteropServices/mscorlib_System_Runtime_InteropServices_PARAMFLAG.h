#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_PARAMFLAG_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_PARAMFLAG_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class PARAMFLAG
				{
				public:
					enum __ENUM__
					{
						PARAMFLAG_NONE = 0,
						PARAMFLAG_FIN = 1,
						PARAMFLAG_FOUT = 2,
						PARAMFLAG_FLCID = 4,
						PARAMFLAG_FRETVAL = 8,
						PARAMFLAG_FOPT = 16,
						PARAMFLAG_FHASDEFAULT = 32,
						PARAMFLAG_FHASCUSTDATA = 64,
					};
				};

			}
		}
	}
}
#endif
