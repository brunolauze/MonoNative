#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBEXPORTERFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBEXPORTERFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class TypeLibExporterFlags
				{
				public:
					enum __ENUM__
					{
						None = 0,
						OnlyReferenceRegistered = 1,
						CallerResolvedReferences = 2,
						OldNames = 4,
						ExportAs32Bit = 16,
						ExportAs64Bit = 32,
					};
				};

			}
		}
	}
}
#endif
