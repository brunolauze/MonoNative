#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ENVIRONMENTVARIABLETARGET_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ENVIRONMENTVARIABLETARGET_H
namespace mscorlib
{
	namespace System
	{

		class EnvironmentVariableTarget
		{
		public:
			enum __ENUM__
			{
				Process = 0,
				User = 1,
				Machine = 2,
			};
		};

	}
}
#endif
