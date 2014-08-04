#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ISTACKWALK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_ISTACKWALK_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class IStackWalk
			{
			public:
				IStackWalk(MonoObject *nativeObject)
				{
					__mscorlib_System_Security_IStackWalk = nativeObject;
				};
			
				~IStackWalk()
				{
				};
			

				IStackWalk & operator=(IStackWalk &value) { __mscorlib_System_Security_IStackWalk = value.__mscorlib_System_Security_IStackWalk; return value; };
				operator MonoObject*() { return __mscorlib_System_Security_IStackWalk; };
				MonoObject* operator=(MonoObject* value) { __mscorlib_System_Security_IStackWalk = value; return value; };


				virtual void  Assert();
				virtual void  Demand();
				virtual void  Deny();
				virtual void  PermitOnly();


			
			protected:
				MonoObject *__mscorlib_System_Security_IStackWalk;
			
			private:
			
			};

		}
	}
}
#endif
