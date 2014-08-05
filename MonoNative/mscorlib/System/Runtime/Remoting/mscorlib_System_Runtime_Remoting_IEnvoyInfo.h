#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_IENVOYINFO_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_IENVOYINFO_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class IEnvoyInfo
				{
				public:
					IEnvoyInfo(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Remoting_IEnvoyInfo = nativeObject;
					};
				
					~IEnvoyInfo()
					{
					};
				

					IEnvoyInfo & operator=(IEnvoyInfo &value) { __mscorlib_System_Runtime_Remoting_IEnvoyInfo = value.__mscorlib_System_Runtime_Remoting_IEnvoyInfo; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_IEnvoyInfo; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_IEnvoyInfo = value; return value; };




					//Public Properties
					__declspec(property(get=get_EnvoySinks, put=set_EnvoySinks)) mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  EnvoySinks;

					//Get Set Properties Methods
					//	Get/Set:EnvoySinks
					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  get_EnvoySinks() const;
					void set_EnvoySinks(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  value);

				
				protected:
					MonoObject *__mscorlib_System_Runtime_Remoting_IEnvoyInfo;
				
				private:
				
				};

			}
		}
	}
}
#endif
