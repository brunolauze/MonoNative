#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYVIEW_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYVIEW_H
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			class RegistryView
			{
			public:
				enum __ENUM__
				{
					Default = 0,
					Registry64 = 256,
					Registry32 = 512,
				};
			};

		}
	}
}
#endif
