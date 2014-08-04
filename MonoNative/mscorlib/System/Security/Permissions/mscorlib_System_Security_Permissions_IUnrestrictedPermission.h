#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_IUNRESTRICTEDPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PERMISSIONS_IUNRESTRICTEDPERMISSION_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				class IUnrestrictedPermission
				{
				public:
					IUnrestrictedPermission(MonoObject *nativeObject)
					{
						__mscorlib_System_Security_Permissions_IUnrestrictedPermission = nativeObject;
					};
				
					~IUnrestrictedPermission()
					{
					};
				

					IUnrestrictedPermission & operator=(IUnrestrictedPermission &value) { __mscorlib_System_Security_Permissions_IUnrestrictedPermission = value.__mscorlib_System_Security_Permissions_IUnrestrictedPermission; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Permissions_IUnrestrictedPermission; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Permissions_IUnrestrictedPermission = value; return value; };


					virtual mscorlib::System::Boolean  IsUnrestricted();


				
				protected:
					MonoObject *__mscorlib_System_Security_Permissions_IUnrestrictedPermission;
				
				private:
				
				};

			}
		}
	}
}
#endif
