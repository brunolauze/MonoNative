#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSCONTROLSECTIONS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSCONTROLSECTIONS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AccessControlSections
				{
				public:
					enum __ENUM__
					{
						None = 0,
						Audit = 1,
						Access = 2,
						Owner = 4,
						Group = 8,
						All = 15,
					};
				};

			}
		}
	}
}
#endif
