#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_VARKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_COMTYPES_VARKIND_H
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

					class VARKIND
					{
					public:
						enum __ENUM__
						{
							VAR_PERINSTANCE = 0,
							VAR_STATIC = 1,
							VAR_CONST = 2,
							VAR_DISPATCH = 3,
						};
					};

				}
			}
		}
	}
}
#endif
