#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_GCHANDLETYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class GCHandleType
				{
				public:
					enum __ENUM__
					{
						Weak = 0,
						WeakTrackResurrection = 1,
						Normal = 2,
						Pinned = 3,
					};
				};

			}
		}
	}
}
#endif
