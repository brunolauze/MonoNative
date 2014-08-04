#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBTYPEFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBTYPEFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class TypeLibTypeFlags
				{
				public:
					enum __ENUM__
					{
						FAppObject = 1,
						FCanCreate = 2,
						FLicensed = 4,
						FPreDeclId = 8,
						FHidden = 16,
						FControl = 32,
						FDual = 64,
						FNonExtensible = 128,
						FOleAutomation = 256,
						FRestricted = 512,
						FAggregatable = 1024,
						FReplaceable = 2048,
						FDispatchable = 4096,
						FReverseBind = 8192,
					};
				};

			}
		}
	}
}
#endif
