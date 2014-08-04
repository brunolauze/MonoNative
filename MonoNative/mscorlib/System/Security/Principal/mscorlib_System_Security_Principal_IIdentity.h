#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IIDENTITY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_PRINCIPAL_IIDENTITY_H

#include <Global.h>

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

				class IIdentity
				{
				public:
					IIdentity(MonoObject *nativeObject)
					{
						__mscorlib_System_Security_Principal_IIdentity = nativeObject;
					};
				
					~IIdentity()
					{
					};
				

					IIdentity & operator=(IIdentity &value) { __mscorlib_System_Security_Principal_IIdentity = value.__mscorlib_System_Security_Principal_IIdentity; return value; };
					operator MonoObject*() { return __mscorlib_System_Security_Principal_IIdentity; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_Principal_IIdentity = value; return value; };




					//Public Properties
					__declspec(property(get=get_AuthenticationType)) mscorlib::System::String  AuthenticationType;
					__declspec(property(get=get_IsAuthenticated)) mscorlib::System::Boolean  IsAuthenticated;
					__declspec(property(get=get_Name)) mscorlib::System::String  Name;

					//Get Set Properties Methods
					//	Get:AuthenticationType
					mscorlib::System::String  get_AuthenticationType();

					//	Get:IsAuthenticated
					mscorlib::System::Boolean  get_IsAuthenticated();

					//	Get:Name
					mscorlib::System::String  get_Name();

				
				protected:
					MonoObject *__mscorlib_System_Security_Principal_IIdentity;
				
				private:
				
				};

			}
		}
	}
}
#endif
