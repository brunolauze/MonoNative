#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SurrogateSelector.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void SurrogateSelector::AddSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISerializationSurrogate surrogate)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameter_types__[2] = Global::GetType(typeid(surrogate).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)context;
						__parameters__[2] = (MonoObject*)surrogate;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SurrogateSelector", 0, NULL, "AddSurrogate", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				}

				void SurrogateSelector::ChainSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(selector).name());
						__parameters__[0] = (MonoObject*)selector;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SurrogateSelector", 0, NULL, "ChainSelector", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Runtime::Serialization::ISurrogateSelector SurrogateSelector::GetNextSelector()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SurrogateSelector", 0, NULL, "GetNextSelector", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Serialization::ISurrogateSelector(__result__);
				}

				mscorlib::System::Runtime::Serialization::ISerializationSurrogate SurrogateSelector::GetSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameter_types__[2] = Global::GetType(typeid(selector).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)context;
						__parameters__[2] = (MonoObject*)selector;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SurrogateSelector", 0, NULL, "GetSurrogate", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Serialization::ISerializationSurrogate(__result__);
				}

				void SurrogateSelector::RemoveSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(type).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)type;
						__parameters__[1] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SurrogateSelector", 0, NULL, "RemoveSurrogate", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
