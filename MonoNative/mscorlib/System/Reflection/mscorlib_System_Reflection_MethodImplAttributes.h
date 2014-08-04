#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_METHODIMPLATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_METHODIMPLATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodImplAttributes
			{
			public:
				enum __ENUM__
				{
					Managed = 0,
					IL = 0,
					Native = 1,
					OPTIL = 2,
					CodeTypeMask = 3,
					Runtime = 3,
					ManagedMask = 4,
					Unmanaged = 4,
					NoInlining = 8,
					ForwardRef = 16,
					Synchronized = 32,
					NoOptimization = 64,
					PreserveSig = 128,
					AggressiveInlining = 256,
					InternalCall = 4096,
					MaxMethodImplVal = 65535,
				};
			};

		}
	}
}
#endif
