#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_ILOGICALTHREADAFFINATIVE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_ILOGICALTHREADAFFINATIVE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class ILogicalThreadAffinative
					{
					public:
						ILogicalThreadAffinative(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Messaging_ILogicalThreadAffinative = nativeObject;
						};
					
						~ILogicalThreadAffinative()
						{
						};
					

						ILogicalThreadAffinative & operator=(ILogicalThreadAffinative &value) { __mscorlib_System_Runtime_Remoting_Messaging_ILogicalThreadAffinative = value.__mscorlib_System_Runtime_Remoting_Messaging_ILogicalThreadAffinative; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_ILogicalThreadAffinative; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_ILogicalThreadAffinative = value; return value; };




					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_ILogicalThreadAffinative;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
