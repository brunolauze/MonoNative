#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CALLINGCONVENTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_CALLINGCONVENTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class CallingConventions
			{
			public:
				enum __ENUM__
				{
					Standard = 1,
					VarArgs = 2,
					Any = 3,
					HasThis = 32,
					ExplicitThis = 64,
				};
			};

		}
	}
}
#endif
