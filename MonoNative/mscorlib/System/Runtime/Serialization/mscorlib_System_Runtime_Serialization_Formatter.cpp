#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_Formatter.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationBinder.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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
				mscorlib::System::Object Formatter::Deserialize(mscorlib::System::IO::Stream serializationStream)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
						__parameters__[0] = (MonoObject*)serializationStream;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "Deserialize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				void Formatter::Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
						__parameter_types__[1] = Global::GetType(typeid(graph).name());
						__parameters__[0] = (MonoObject*)serializationStream;
						__parameters__[1] = (MonoObject*)graph;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "Serialize", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get/Set:Binder
				mscorlib::System::Runtime::Serialization::SerializationBinder  Formatter::get_Binder() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "get_Binder", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Serialization::SerializationBinder(__result__);
				}

				void Formatter::set_Binder(mscorlib::System::Runtime::Serialization::SerializationBinder  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "set_Binder", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Context
				mscorlib::System::Runtime::Serialization::StreamingContext  Formatter::get_Context() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "get_Context", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Serialization::StreamingContext(__result__);
				}

				void Formatter::set_Context(mscorlib::System::Runtime::Serialization::StreamingContext  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "set_Context", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SurrogateSelector
				mscorlib::System::Runtime::Serialization::ISurrogateSelector  Formatter::get_SurrogateSelector() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "get_SurrogateSelector", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Serialization::ISurrogateSelector(__result__);
				}

				void Formatter::set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "Formatter", 0, NULL, "set_SurrogateSelector", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
