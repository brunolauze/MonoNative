#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializationSurrogate.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void ISurrogateSelector::ChainSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(selector).name());
						__parameters__[0] = (MonoObject*)selector;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISurrogateSelector", 0, NULL, "ChainSelector", __mscorlib_System_Runtime_Serialization_ISurrogateSelector, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Runtime::Serialization::ISurrogateSelector ISurrogateSelector::GetNextSelector()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISurrogateSelector", 0, NULL, "GetNextSelector", __mscorlib_System_Runtime_Serialization_ISurrogateSelector, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Serialization::ISurrogateSelector(__result__);
				}

				mscorlib::System::Runtime::Serialization::ISerializationSurrogate ISurrogateSelector::GetSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameter_types__[2] = Global::GetType(typeid(selector).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)context;
						__parameters__[2] = (MonoObject*)selector;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISurrogateSelector", 0, NULL, "GetSurrogate", __mscorlib_System_Runtime_Serialization_ISurrogateSelector, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Serialization::ISerializationSurrogate(__result__);
				}


			}
		}
	}
}
