#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACEFLAGS_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_OBJECTACEFLAGS_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class ObjectAceFlags
				{
				public:
					enum __ENUM__
					{
						None = 0,
						ObjectAceTypePresent = 1,
						InheritedObjectAceTypePresent = 2,
					};
				};

			}
		}
	}
}
#endif
