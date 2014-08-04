#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGECONTAINMENT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_ISOLATEDSTORAGECONTAINMENT_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class IsolatedStorageContainment
				{
				public:
					enum __ENUM__
					{
						None = 0,
						DomainIsolationByUser = 16,
						ApplicationIsolationByUser = 21,
						AssemblyIsolationByUser = 32,
						DomainIsolationByMachine = 48,
						AssemblyIsolationByMachine = 64,
						ApplicationIsolationByMachine = 69,
						DomainIsolationByRoamingUser = 80,
						AssemblyIsolationByRoamingUser = 96,
						ApplicationIsolationByRoamingUser = 101,
						AdministerIsolatedStorageByUser = 112,
						UnrestrictedIsolatedStorage = 240,
					};
				};

			}
		}
	}
}
#endif
