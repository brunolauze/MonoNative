#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_PROPAGATIONFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_PROPAGATIONFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class PropagationFlags
				{
				public:
					enum __ENUM__
					{
						None = 0,
						NoPropagateInherit = 1,
						InheritOnly = 2,
					};
				};

			}
		}
	}
}
#endif
