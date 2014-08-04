#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_RESOURCETYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_RESOURCETYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class ResourceType
				{
				public:
					enum __ENUM__
					{
						Unknown = 0,
						FileObject = 1,
						Service = 2,
						Printer = 3,
						RegistryKey = 4,
						LMShare = 5,
						KernelObject = 6,
						WindowObject = 7,
						DSObject = 8,
						DSObjectAll = 9,
						ProviderDefined = 10,
						WmiGuidObject = 11,
						RegistryWow6432Key = 12,
					};
				};

			}
		}
	}
}
#endif
