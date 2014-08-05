#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IPRINCIPAL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IPRINCIPAL_H

#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IIdentity.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Principal
			{

				class IPrincipal
				{
				public:
					IPrincipal(MonoObject *nativeObject)
					{
						__mscorlib_System_Security_Principal_IPrincipal = nativeObject;
					};
				
					~IPrincipal()
					{
					};
				

					IPrincipal & operator=(IPrincipal &value) { __mscorlib_System_Security_Principal_IPrincipal = value.__mscorlib_System_Security_Principal_IPrincipal; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Principal_IPrincipal; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Principal_IPrincipal = value; return value; };


					virtual mscorlib::System::Boolean  IsInRole(mscorlib::System::String role);
					virtual mscorlib::System::Boolean  IsInRole(const char *role);


					//Public Properties
					__declspec(property(get=get_Identity)) mscorlib::System::Security::Principal::IIdentity  Identity;

					//Get Set Properties Methods
					//	Get:Identity
					mscorlib::System::Security::Principal::IIdentity  get_Identity() const;

				
				protected:
					MonoObject *__mscorlib_System_Security_Principal_IPrincipal;
				
				private:
				
				};

			}
		}
	}
}
#endif
