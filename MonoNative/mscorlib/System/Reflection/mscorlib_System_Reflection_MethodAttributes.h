#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_METHODATTRIBUTES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_REFLECTION_METHODATTRIBUTES_H
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodAttributes
			{
			public:
				enum __ENUM__
				{
					PrivateScope = 0,
					ReuseSlot = 0,
					Private = 1,
					FamANDAssem = 2,
					Assembly = 3,
					Family = 4,
					FamORAssem = 5,
					Public = 6,
					MemberAccessMask = 7,
					UnmanagedExport = 8,
					Static = 16,
					Final = 32,
					Virtual = 64,
					HideBySig = 128,
					VtableLayoutMask = 256,
					NewSlot = 256,
					CheckAccessOnOverride = 512,
					Abstract = 1024,
					SpecialName = 2048,
					RTSpecialName = 4096,
					PinvokeImpl = 8192,
					HasSecurity = 16384,
					RequireSecObject = 32768,
					ReservedMask = 53248,
				};
			};

		}
	}
}
#endif
