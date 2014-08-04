#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYCONTEXTSOURCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYCONTEXTSOURCE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityContextSource
			{
			public:
				enum __ENUM__
				{
					CurrentAppDomain = 0,
					CurrentAssembly = 1,
				};
			};

		}
	}
}
#endif
