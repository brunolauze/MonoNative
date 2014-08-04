#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_UIPERMISSIONWINDOW_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_UIPERMISSIONWINDOW_H
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class UIPermissionWindow
				{
				public:
					enum __ENUM__
					{
						NoWindows = 0,
						SafeSubWindows = 1,
						SafeTopLevelWindows = 2,
						AllWindows = 3,
					};
				};

			}
		}
	}
}
#endif
