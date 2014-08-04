#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACEFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACEFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AceFlags
				{
				public:
					enum __ENUM__
					{
						None = 0,
						ObjectInherit = 1,
						ContainerInherit = 2,
						NoPropagateInherit = 4,
						InheritOnly = 8,
						InheritanceFlags = 15,
						Inherited = 16,
						SuccessfulAccess = 64,
						FailedAccess = 128,
						AuditFlags = 192,
					};
				};

			}
		}
	}
}
#endif
