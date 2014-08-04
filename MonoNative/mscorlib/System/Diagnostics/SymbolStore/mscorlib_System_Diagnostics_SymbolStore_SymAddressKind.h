#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMADDRESSKIND_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_DIAGNOSTICS_SYMBOLSTORE_SYMADDRESSKIND_H
namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{
			namespace SymbolStore
			{

				class SymAddressKind
				{
				public:
					enum __ENUM__
					{
						ILOffset = 1,
						NativeRVA = 2,
						NativeRegister = 3,
						NativeRegisterRelative = 4,
						NativeOffset = 5,
						NativeRegisterRegister = 6,
						NativeRegisterStack = 7,
						NativeStackRegister = 8,
						BitField = 9,
						NativeSectionOffset = 10,
					};
				};

			}
		}
	}
}
#endif
