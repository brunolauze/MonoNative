#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_FUNCKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_FUNCKIND_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class FUNCKIND
				{
				public:
					enum __ENUM__
					{
						FUNC_VIRTUAL = 0,
						FUNC_PUREVIRTUAL = 1,
						FUNC_NONVIRTUAL = 2,
						FUNC_STATIC = 3,
						FUNC_DISPATCH = 4,
					};
				};

			}
		}
	}
}
#endif
