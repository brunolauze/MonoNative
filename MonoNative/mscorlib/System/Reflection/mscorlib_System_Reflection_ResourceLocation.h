#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_RESOURCELOCATION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_RESOURCELOCATION_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class ResourceLocation
			{
			public:
				enum __ENUM__
				{
					Embedded = 1,
					ContainedInAnotherAssembly = 2,
					ContainedInManifestFile = 4,
				};
			};

		}
	}
}
#endif
