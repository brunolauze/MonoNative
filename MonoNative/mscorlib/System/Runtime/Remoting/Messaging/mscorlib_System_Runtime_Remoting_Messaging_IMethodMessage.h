#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IMETHODMESSAGE_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

					class LogicalCallContext;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class MethodBase;
			

		}
	}
}
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

					class IMethodMessage
						: public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						IMethodMessage(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~IMethodMessage()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, put=set___mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage)) MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage()
						{
							return IMethodMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMessage;
						}
						void set___mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage(MonoObject *value)
						{
							IMethodMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMessage = value;
						}
						IMethodMessage & operator=(IMethodMessage &value) { __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage = value.__mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage = value; return value; };


						virtual mscorlib::System::Object  GetArg(mscorlib::System::Int32 argNum);
						virtual mscorlib::System::String  GetArgName(mscorlib::System::Int32 index);


						//Public Properties
						__declspec(property(get=get_ArgCount)) mscorlib::System::Int32  ArgCount;
						__declspec(property(get=get_Args)) std::vector<mscorlib::System::Object*>  Args;
						__declspec(property(get=get_HasVarArgs)) mscorlib::System::Boolean  HasVarArgs;
						__declspec(property(get=get_LogicalCallContext)) mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  LogicalCallContext;
						__declspec(property(get=get_MethodBase)) mscorlib::System::Reflection::MethodBase  MethodBase;
						__declspec(property(get=get_MethodName)) mscorlib::System::String  MethodName;
						__declspec(property(get=get_MethodSignature)) mscorlib::System::Object  MethodSignature;
						__declspec(property(get=get_TypeName)) mscorlib::System::String  TypeName;
						__declspec(property(get=get_Uri)) mscorlib::System::String  Uri;

						//Get Set Properties Methods
						//	Get:ArgCount
						mscorlib::System::Int32  get_ArgCount();

						//	Get:Args
						std::vector<mscorlib::System::Object*>  get_Args();

						//	Get:HasVarArgs
						mscorlib::System::Boolean  get_HasVarArgs();

						//	Get:LogicalCallContext
						mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  get_LogicalCallContext();

						//	Get:MethodBase
						mscorlib::System::Reflection::MethodBase  get_MethodBase();

						//	Get:MethodName
						mscorlib::System::String  get_MethodName();

						//	Get:MethodSignature
						mscorlib::System::Object  get_MethodSignature();

						//	Get:TypeName
						mscorlib::System::String  get_TypeName();

						//	Get:Uri
						mscorlib::System::String  get_Uri();

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
