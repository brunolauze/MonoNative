#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODCALLMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODCALLMESSAGE_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					class IMethodCallMessage
						: public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						IMethodCallMessage(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~IMethodCallMessage()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage, put=set___mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage)) MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage()
						{
							return IMethodCallMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage;
						}
						void set___mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage(MonoObject *value)
						{
							IMethodCallMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage = value;
						}
						IMethodCallMessage & operator=(IMethodCallMessage &value) { __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage = value.__mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage = value; return value; };


						virtual mscorlib::System::Object  GetInArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetInArgName(mscorlib::System::Int32 index);


						//Public Properties
						__declspec(property(get=get_InArgCount)) mscorlib::System::Int32  InArgCount;
						__declspec(property(get=get_InArgs)) std::vector<mscorlib::System::Object*>  InArgs;

						//Get Set Properties Methods
						//	Get:InArgCount
						mscorlib::System::Int32  get_InArgCount();

						//	Get:InArgs
						std::vector<mscorlib::System::Object*>  get_InArgs();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
