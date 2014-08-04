#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_INVOKEKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_INVOKEKIND_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class INVOKEKIND
				{
				public:
					enum __ENUM__
					{
						INVOKE_FUNC = 1,
						INVOKE_PROPERTYGET = 2,
						INVOKE_PROPERTYPUT = 4,
						INVOKE_PROPERTYPUTREF = 8,
					};
				};

			}
		}
	}
}
#endif
