#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_COMPONENTGUARANTEESOPTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_COMPONENTGUARANTEESOPTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Versioning
			{

				class ComponentGuaranteesOptions
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Exchange = 1,
						Stable = 2,
						SideBySide = 4,
					};
				};

			}
		}
	}
}
#endif
