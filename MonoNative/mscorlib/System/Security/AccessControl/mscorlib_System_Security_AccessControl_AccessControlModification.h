#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSCONTROLMODIFICATION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ACCESSCONTROL_ACCESSCONTROLMODIFICATION_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace AccessControl
			{

				class AccessControlModification
				{
				public:
					enum __ENUM__
					{
						Add = 0,
						Set = 1,
						Reset = 2,
						Remove = 3,
						RemoveAll = 4,
						RemoveSpecific = 5,
					};
				};

			}
		}
	}
}
#endif
