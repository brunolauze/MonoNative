#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPEKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPEKIND_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class TYPEKIND
				{
				public:
					enum __ENUM__
					{
						TKIND_ENUM = 0,
						TKIND_RECORD = 1,
						TKIND_MODULE = 2,
						TKIND_INTERFACE = 3,
						TKIND_DISPATCH = 4,
						TKIND_COCLASS = 5,
						TKIND_ALIAS = 6,
						TKIND_UNION = 7,
						TKIND_MAX = 8,
					};
				};

			}
		}
	}
}
#endif
