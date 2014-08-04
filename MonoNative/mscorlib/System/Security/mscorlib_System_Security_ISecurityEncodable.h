#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ISECURITYENCODABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ISECURITYENCODABLE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityElement;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class ISecurityEncodable
			{
			public:
				ISecurityEncodable(MonoObject *nativeObject)
				{
					__mscorlib_System_Security_ISecurityEncodable = nativeObject;
				};
			
				~ISecurityEncodable()
				{
				};
			

				ISecurityEncodable & operator=(ISecurityEncodable &value) { __mscorlib_System_Security_ISecurityEncodable = value.__mscorlib_System_Security_ISecurityEncodable; return value; };
				operator MonoObject*() { return __mscorlib_System_Security_ISecurityEncodable; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_ISecurityEncodable = value; return value; };


				virtual void  FromXml(mscorlib::System::Security::SecurityElement e);
				virtual mscorlib::System::Security::SecurityElement  ToXml();


			
			protected:
				MonoObject *__mscorlib_System_Security_ISecurityEncodable;
			
			private:
			
			};

		}
	}
}
#endif
