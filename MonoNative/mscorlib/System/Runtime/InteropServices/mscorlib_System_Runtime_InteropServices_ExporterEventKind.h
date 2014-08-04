#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_EXPORTEREVENTKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_EXPORTEREVENTKIND_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class ExporterEventKind
				{
				public:
					enum __ENUM__
					{
						NOTIF_TYPECONVERTED = 0,
						NOTIF_CONVERTWARNING = 1,
						ERROR_REFTOINVALIDASSEMBLY = 2,
					};
				};

			}
		}
	}
}
#endif
