#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBVARFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_TYPELIBVARFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class TypeLibVarFlags
				{
				public:
					enum __ENUM__
					{
						FReadOnly = 1,
						FSource = 2,
						FBindable = 4,
						FRequestEdit = 8,
						FDisplayBind = 16,
						FDefaultBind = 32,
						FHidden = 64,
						FRestricted = 128,
						FDefaultCollelem = 256,
						FUiDefault = 512,
						FNonBrowsable = 1024,
						FReplaceable = 2048,
						FImmediateBind = 4096,
					};
				};

			}
		}
	}
}
#endif
