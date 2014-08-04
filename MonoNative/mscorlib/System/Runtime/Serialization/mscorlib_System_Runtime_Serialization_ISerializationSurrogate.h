#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZATIONSURROGATE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				class ISurrogateSelector;
				

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
			namespace Serialization
			{

				class ISerializationSurrogate
				{
				public:
					ISerializationSurrogate(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_ISerializationSurrogate = nativeObject;
					};
				
					~ISerializationSurrogate()
					{
					};
				

					ISerializationSurrogate & operator=(ISerializationSurrogate &value) { __mscorlib_System_Runtime_Serialization_ISerializationSurrogate = value.__mscorlib_System_Runtime_Serialization_ISerializationSurrogate; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_ISerializationSurrogate; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_ISerializationSurrogate = value; return value; };


					virtual void  GetObjectData(mscorlib::System::Object obj, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);
					virtual mscorlib::System::Object  SetObjectData(mscorlib::System::Object obj, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_ISerializationSurrogate;
				
				private:
				
				};

			}
		}
	}
}
#endif
