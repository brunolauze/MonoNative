#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICYLEVELTYPE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_POLICYLEVELTYPE_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class PolicyLevelType
			{
			public:
				enum __ENUM__
				{
					User = 0,
					Machine = 1,
					Enterprise = 2,
					AppDomain = 3,
				};
			};

		}
	}
}
#endif
