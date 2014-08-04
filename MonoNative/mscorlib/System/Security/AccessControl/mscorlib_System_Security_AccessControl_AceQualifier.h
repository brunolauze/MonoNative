#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACEQUALIFIER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACEQUALIFIER_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AceQualifier
				{
				public:
					enum __ENUM__
					{
						AccessAllowed = 0,
						AccessDenied = 1,
						SystemAudit = 2,
						SystemAlarm = 3,
					};
				};

			}
		}
	}
}
#endif
