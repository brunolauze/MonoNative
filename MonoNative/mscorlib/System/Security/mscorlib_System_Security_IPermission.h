#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_IPERMISSION_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_IPERMISSION_H

#include <mscorlib/System/Security/mscorlib_System_Security_ISecurityEncodable.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class IPermission
				: public virtual mscorlib::System::Security::ISecurityEncodable
			{
			public:
				IPermission(MonoObject *nativeObject)
				: mscorlib::System::Security::ISecurityEncodable(nativeObject)
				{
				};
			
				~IPermission()
				{
				};
			

				__declspec(property(get=get___mscorlib_System_Security_IPermission, put=set___mscorlib_System_Security_IPermission)) MonoObject *__mscorlib_System_Security_IPermission;
				MonoObject* get___mscorlib_System_Security_IPermission()
				{
					return IPermission::__mscorlib_System_Security_ISecurityEncodable;
				}
				void set___mscorlib_System_Security_IPermission(MonoObject *value)
				{
					IPermission::__mscorlib_System_Security_ISecurityEncodable = value;
				}
				IPermission & operator=(IPermission &value) { __mscorlib_System_Security_IPermission = value.__mscorlib_System_Security_IPermission; return value; };
				operator MonoObject*() { return __mscorlib_System_Security_IPermission; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_IPermission = value; return value; };


				virtual mscorlib::System::Security::IPermission  Copy();
				virtual void  Demand();
				virtual mscorlib::System::Security::IPermission  Intersect(mscorlib::System::Security::IPermission target);
				virtual mscorlib::System::Boolean  IsSubsetOf(mscorlib::System::Security::IPermission target);
				virtual mscorlib::System::Security::IPermission  Union(mscorlib::System::Security::IPermission target);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
