#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_RESOURCESCOPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_VERSIONING_RESOURCESCOPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Versioning
			{

				class ResourceScope
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Machine = 1,
						Process = 2,
						AppDomain = 4,
						Library = 8,
						Private = 16,
						Assembly = 32,
					};
				};

			}
		}
	}
}
#endif
