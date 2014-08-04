#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_OPCODETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_OPCODETYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class OpCodeType
				{
				public:
					enum __ENUM__
					{
						Annotation = 0,
						Macro = 1,
						Nternal = 2,
						Objmodel = 3,
						Prefix = 4,
						Primitive = 5,
					};
				};

			}
		}
	}
}
#endif
