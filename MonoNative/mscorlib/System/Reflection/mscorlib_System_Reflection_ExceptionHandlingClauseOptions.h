#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSEOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSEOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ExceptionHandlingClauseOptions
			{
			public:
				enum __ENUM__
				{
					Clause = 0,
					Filter = 1,
					Finally = 2,
					Fault = 4,
				};
			};

		}
	}
}
#endif
