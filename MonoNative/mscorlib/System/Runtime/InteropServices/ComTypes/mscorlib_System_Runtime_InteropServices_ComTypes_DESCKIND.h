#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_DESCKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_DESCKIND_H
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

					class DESCKIND
					{
					public:
						enum __ENUM__
						{
							DESCKIND_NONE = 0,
							DESCKIND_FUNCDESC = 1,
							DESCKIND_VARDESC = 2,
							DESCKIND_TYPECOMP = 3,
							DESCKIND_IMPLICITAPPOBJ = 4,
							DESCKIND_MAX = 5,
						};
					};

				}
			}
		}
	}
}
#endif
