#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODRETURNMESSAGE_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{

		class Exception;
		class String;
		

	}
}
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

					class IMethodReturnMessage
						: public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						IMethodReturnMessage(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~IMethodReturnMessage()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, put=set___mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage)) MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage()
						{
							return IMethodReturnMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage;
						}
						void set___mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage(MonoObject *value)
						{
							IMethodReturnMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage = value;
						}
						IMethodReturnMessage & operator=(IMethodReturnMessage &value) { __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage = value.__mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage = value; return value; };


						virtual mscorlib::System::Object  GetOutArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetOutArgName(mscorlib::System::Int32 index);


						//Public Properties
						__declspec(property(get=get_Exception)) mscorlib::System::Exception  Exception;
						__declspec(property(get=get_OutArgCount)) mscorlib::System::Int32  OutArgCount;
						__declspec(property(get=get_OutArgs)) std::vector<mscorlib::System::Object*>  OutArgs;
						__declspec(property(get=get_ReturnValue)) mscorlib::System::Object  ReturnValue;

						//Get Set Properties Methods
						//	Get:Exception
						mscorlib::System::Exception  get_Exception();

						//	Get:OutArgCount
						mscorlib::System::Int32  get_OutArgCount();

						//	Get:OutArgs
						std::vector<mscorlib::System::Object*>  get_OutArgs();

						//	Get:ReturnValue
						mscorlib::System::Object  get_ReturnValue();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
