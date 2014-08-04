#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_FLOWCONTROL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_FLOWCONTROL_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class FlowControl
				{
				public:
					enum __ENUM__
					{
						Branch = 0,
						Break = 1,
						Call = 2,
						Cond_Branch = 3,
						Meta = 4,
						Next = 5,
						Phi = 6,
						Return = 7,
						Throw = 8,
					};
				};

			}
		}
	}
}
#endif
