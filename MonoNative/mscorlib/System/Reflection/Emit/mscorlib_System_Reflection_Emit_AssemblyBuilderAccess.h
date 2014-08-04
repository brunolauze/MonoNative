#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDERACCESS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDERACCESS_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class AssemblyBuilderAccess
				{
				public:
					enum __ENUM__
					{
						Run = 1,
						Save = 2,
						RunAndSave = 3,
						ReflectionOnly = 6,
						RunAndCollect = 9,
					};
				};

			}
		}
	}
}
#endif
