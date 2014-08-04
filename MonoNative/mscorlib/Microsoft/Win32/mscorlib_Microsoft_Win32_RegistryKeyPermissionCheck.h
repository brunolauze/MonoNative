#ifndef __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYKEYPERMISSIONCHECK_H
#define __MONO_NATIVE_MSCORLIB_MICROSOFT_WIN32_REGISTRYKEYPERMISSIONCHECK_H
namespace mscorlib
{
	namespace Microsoft
	{
		namespace Win32
		{

			class RegistryKeyPermissionCheck
			{
			public:
				enum __ENUM__
				{
					Default = 0,
					ReadSubTree = 1,
					ReadWriteSubTree = 2,
				};
			};

		}
	}
}
#endif
