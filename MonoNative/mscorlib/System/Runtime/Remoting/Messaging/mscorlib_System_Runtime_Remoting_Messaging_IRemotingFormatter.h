#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IREMOTINGFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_IREMOTINGFORMATTER_H

#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IFormatter.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace IO
		{

			class Stream;
			

		}
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

					class Header;
					

				}
			}
		}
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

					class IRemotingFormatter
						: public virtual mscorlib::System::Runtime::Serialization::IFormatter
					{
					public:
						IRemotingFormatter(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Serialization::IFormatter(nativeObject)
						{
						};
					
						~IRemotingFormatter()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter, put=set___mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter)) MonoObject *__mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter() const
						{
							return IRemotingFormatter::__mscorlib_System_Runtime_Serialization_IFormatter;
						}
						void set___mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter(MonoObject *value)
						{
							IRemotingFormatter::__mscorlib_System_Runtime_Serialization_IFormatter = value;
						}
						IRemotingFormatter & operator=(IRemotingFormatter &value) { __mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter = value.__mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Messaging_IRemotingFormatter = value; return value; };


						virtual mscorlib::System::Object  Deserialize(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler);
						virtual void  Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph, std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
