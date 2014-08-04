#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDLFLAG_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_IDLFLAG_H
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

					class IDLFLAG
					{
					public:
						enum __ENUM__
						{
							IDLFLAG_NONE = 0,
							IDLFLAG_FIN = 1,
							IDLFLAG_FOUT = 2,
							IDLFLAG_FLCID = 4,
							IDLFLAG_FRETVAL = 8,
						};
					};

				}
			}
		}
	}
}
#endif
