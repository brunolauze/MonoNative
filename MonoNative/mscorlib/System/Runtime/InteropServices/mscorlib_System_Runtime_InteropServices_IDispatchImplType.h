#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_IDISPATCHIMPLTYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_IDISPATCHIMPLTYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class IDispatchImplType
				{
				public:
					enum __ENUM__
					{
						SystemDefinedImpl = 0,
						InternalImpl = 1,
						CompatibleImpl = 2,
					};
				};

			}
		}
	}
}
#endif
