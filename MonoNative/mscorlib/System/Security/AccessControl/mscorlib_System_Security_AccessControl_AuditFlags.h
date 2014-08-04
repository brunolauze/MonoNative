#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_AUDITFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_AUDITFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AuditFlags
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Success = 1,
						Failure = 2,
					};
				};

			}
		}
	}
}
#endif
