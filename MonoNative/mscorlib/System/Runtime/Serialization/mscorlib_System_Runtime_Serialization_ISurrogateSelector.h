#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISURROGATESELECTOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISURROGATESELECTOR_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class ISerializationSurrogate;
				class StreamingContext;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Type;
		

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

				class ISurrogateSelector
				{
				public:
					ISurrogateSelector(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_ISurrogateSelector = nativeObject;
					};
				
					~ISurrogateSelector()
					{
					};
				

					ISurrogateSelector & operator=(ISurrogateSelector &value) { __mscorlib_System_Runtime_Serialization_ISurrogateSelector = value.__mscorlib_System_Runtime_Serialization_ISurrogateSelector; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_ISurrogateSelector; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_ISurrogateSelector = value; return value; };


					virtual void  ChainSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector);
					virtual mscorlib::System::Runtime::Serialization::ISurrogateSelector  GetNextSelector();
					virtual mscorlib::System::Runtime::Serialization::ISerializationSurrogate  GetSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_ISurrogateSelector;
				
				private:
				
				};

			}
		}
	}
}
#endif
