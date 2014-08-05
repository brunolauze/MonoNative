#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONRETURNMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONRETURNMESSAGE_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Activation
				{

					class IConstructionReturnMessage
						: public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						IConstructionReturnMessage(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~IConstructionReturnMessage()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage, put=set___mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage)) MonoObject *__mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage() const
						{
							return IConstructionReturnMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage;
						}
						void set___mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage(MonoObject *value)
						{
							IConstructionReturnMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage = value;
						}
						IConstructionReturnMessage & operator=(IConstructionReturnMessage &value) { __mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage = value.__mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage = value; return value; };




					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
