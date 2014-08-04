#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_COMPILERSERVICES_METHODIMPLOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				class MethodImplOptions
				{
				public:
					enum __ENUM__
					{
						Unmanaged = 4,
						NoInlining = 8,
						ForwardRef = 16,
						Synchronized = 32,
						NoOptimization = 64,
						PreserveSig = 128,
						AggressiveInlining = 256,
						InternalCall = 4096,
					};
				};

			}
		}
	}
}
#endif
