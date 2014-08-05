#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IFORMATTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IFORMATTER_H

#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>
#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationBinder;
				class StreamingContext;
				

			}
		}
	}
}
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
			namespace Serialization
			{

				class IFormatter
				{
				public:
					IFormatter(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_IFormatter = nativeObject;
					};
				
					~IFormatter()
					{
					};
				

					IFormatter & operator=(IFormatter &value) { __mscorlib_System_Runtime_Serialization_IFormatter = value.__mscorlib_System_Runtime_Serialization_IFormatter; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_IFormatter; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_IFormatter = value; return value; };


					virtual mscorlib::System::Object  Deserialize(mscorlib::System::IO::Stream serializationStream);
					virtual void  Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph);


					//Public Properties
					__declspec(property(get=get_Binder, put=set_Binder)) mscorlib::System::Runtime::Serialization::SerializationBinder  Binder;
					__declspec(property(get=get_Context, put=set_Context)) mscorlib::System::Runtime::Serialization::StreamingContext  Context;
					__declspec(property(get=get_SurrogateSelector, put=set_SurrogateSelector)) mscorlib::System::Runtime::Serialization::ISurrogateSelector  SurrogateSelector;

					//Get Set Properties Methods
					//	Get/Set:Binder
					mscorlib::System::Runtime::Serialization::SerializationBinder  get_Binder() const;
					void set_Binder(mscorlib::System::Runtime::Serialization::SerializationBinder  value);

					//	Get/Set:Context
					mscorlib::System::Runtime::Serialization::StreamingContext  get_Context() const;
					void set_Context(mscorlib::System::Runtime::Serialization::StreamingContext  value);

					//	Get/Set:SurrogateSelector
					mscorlib::System::Runtime::Serialization::ISurrogateSelector  get_SurrogateSelector() const;
					void set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector  value);

				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_IFormatter;
				
				private:
				
				};

			}
		}
	}
}
#endif
