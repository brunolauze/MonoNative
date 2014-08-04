#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_VARFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_VARFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					class VARFLAGS
					{
					public:
						enum __ENUM__
						{
							VARFLAG_FREADONLY = 1,
							VARFLAG_FSOURCE = 2,
							VARFLAG_FBINDABLE = 4,
							VARFLAG_FREQUESTEDIT = 8,
							VARFLAG_FDISPLAYBIND = 16,
							VARFLAG_FDEFAULTBIND = 32,
							VARFLAG_FHIDDEN = 64,
							VARFLAG_FRESTRICTED = 128,
							VARFLAG_FDEFAULTCOLLELEM = 256,
							VARFLAG_FUIDEFAULT = 512,
							VARFLAG_FNONBROWSABLE = 1024,
							VARFLAG_FREPLACEABLE = 2048,
							VARFLAG_FIMMEDIATEBIND = 4096,
						};
					};

				}
			}
		}
	}
}
#endif
