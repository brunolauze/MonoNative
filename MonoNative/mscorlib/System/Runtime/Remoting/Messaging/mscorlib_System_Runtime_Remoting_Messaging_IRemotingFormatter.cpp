#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>



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

					//Public Methods
					mscorlib::System::Object IRemotingFormatter::Deserialize(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
							__parameter_types__[1] = Global::GetType(typeid(handler).name());
							__parameters__[0] = (MonoObject*)serializationStream;
							__parameters__[1] = &handler;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IRemotingFormatter", 0, NULL, "Deserialize", __mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void IRemotingFormatter::Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph, std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
							__parameter_types__[1] = Global::GetType(typeid(graph).name());
							__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(headers).name()))->eklass);
							__parameters__[0] = (MonoObject*)serializationStream;
							__parameters__[1] = (MonoObject*)graph;
							__parameters__[2] = Global::FromArray<mscorlib::System::Runtime::Remoting::Messaging::Header*>(headers, typeid(mscorlib::System::Runtime::Remoting::Messaging::Header).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IRemotingFormatter", 0, NULL, "Serialize", __mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter, 3, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
