#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGECTRL_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGECTRL_H

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

					class IMessageCtrl
					{
					public:
						IMessageCtrl(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl = nativeObject;
						};
					
						~IMessageCtrl()
						{
						};
					

						IMessageCtrl & operator=(IMessageCtrl &value) { __mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl = value.__mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl = value; return value; };


						virtual void  Cancel(mscorlib::System::Int32 msToCancel);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IMessageCtrl;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
