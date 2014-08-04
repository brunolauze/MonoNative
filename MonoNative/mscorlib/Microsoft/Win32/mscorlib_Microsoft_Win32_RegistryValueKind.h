#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYVALUEKIND_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYVALUEKIND_H
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			class RegistryValueKind
			{
			public:
				enum __ENUM__
				{
					Unknown = 0,
					String = 1,
					ExpandString = 2,
					Binary = 3,
					DWord = 4,
					MultiString = 7,
					QWord = 11,
					None = -1,
				};
			};

		}
	}
}
#endif
