#include <mscorlib/System/Runtime/Serialization/Formatters/Binary/mscorlib_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationBinder.h>
#include <mscorlib/System/IO/mscorlib_System_IO_Stream.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>
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
				namespace Formatters
				{
					namespace Binary
					{

						//Public Methods
						mscorlib::System::Object BinaryFormatter::Deserialize(mscorlib::System::IO::Stream serializationStream)
						{
								MonoType *__parameter_types__[1];
								void *__parameters__[1];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameters__[0] = (MonoObject*)serializationStream;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "Deserialize", __native_object__, 1, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Object(__result__);
						}

						mscorlib::System::Object BinaryFormatter::Deserialize(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler)
						{
								MonoType *__parameter_types__[2];
								void *__parameters__[2];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameter_types__[1] = Global::GetType(typeid(handler).name());
								__parameters__[0] = (MonoObject*)serializationStream;
								__parameters__[1] = &handler;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "Deserialize", __native_object__, 2, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Object(__result__);
						}

						mscorlib::System::Object BinaryFormatter::DeserializeMethodResponse(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage methodCallMessage)
						{
								MonoType *__parameter_types__[3];
								void *__parameters__[3];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameter_types__[1] = Global::GetType(typeid(handler).name());
								__parameter_types__[2] = Global::GetType(typeid(methodCallMessage).name());
								__parameters__[0] = (MonoObject*)serializationStream;
								__parameters__[1] = &handler;
								__parameters__[2] = (MonoObject*)methodCallMessage;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "DeserializeMethodResponse", __native_object__, 3, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Object(__result__);
						}

						void BinaryFormatter::Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph)
						{
								MonoType *__parameter_types__[2];
								void *__parameters__[2];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameter_types__[1] = Global::GetType(typeid(graph).name());
								__parameters__[0] = (MonoObject*)serializationStream;
								__parameters__[1] = (MonoObject*)graph;
								Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "Serialize", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						}

						void BinaryFormatter::Serialize(mscorlib::System::IO::Stream serializationStream, mscorlib::System::Object graph, std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers)
						{
								MonoType *__parameter_types__[3];
								void *__parameters__[3];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameter_types__[1] = Global::GetType(typeid(graph).name());
								__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(headers).name()))->eklass);
								__parameters__[0] = (MonoObject*)serializationStream;
								__parameters__[1] = (MonoObject*)graph;
								__parameters__[2] = Global::FromArray<mscorlib::System::Runtime::Remoting::Messaging::Header*>(headers, typeid(mscorlib::System::Runtime::Remoting::Messaging::Header).name());
								Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "Serialize", __native_object__, 3, __parameter_types__, __parameters__, NULL);
						}

						mscorlib::System::Object BinaryFormatter::UnsafeDeserialize(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler)
						{
								MonoType *__parameter_types__[2];
								void *__parameters__[2];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameter_types__[1] = Global::GetType(typeid(handler).name());
								__parameters__[0] = (MonoObject*)serializationStream;
								__parameters__[1] = &handler;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "UnsafeDeserialize", __native_object__, 2, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Object(__result__);
						}

						mscorlib::System::Object BinaryFormatter::UnsafeDeserializeMethodResponse(mscorlib::System::IO::Stream serializationStream, mscorlib::Callback<mscorlib::System::Object  (std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> )> handler, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage methodCallMessage)
						{
								MonoType *__parameter_types__[3];
								void *__parameters__[3];
								__parameter_types__[0] = Global::GetType(typeid(serializationStream).name());
								__parameter_types__[1] = Global::GetType(typeid(handler).name());
								__parameter_types__[2] = Global::GetType(typeid(methodCallMessage).name());
								__parameters__[0] = (MonoObject*)serializationStream;
								__parameters__[1] = &handler;
								__parameters__[2] = (MonoObject*)methodCallMessage;
								MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "UnsafeDeserializeMethodResponse", __native_object__, 3, __parameter_types__, __parameters__, NULL);
								return mscorlib::System::Object(__result__);
						}

						//Get Set Properties Methods
						//	Get/Set:AssemblyFormat
						mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__  BinaryFormatter::get_AssemblyFormat()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "get_AssemblyFormat", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__*)mono_object_unbox(__result__);
						}

						void BinaryFormatter::set_AssemblyFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle::__ENUM__  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = reinterpret_cast<void*>(value);
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "set_AssemblyFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:Binder
						mscorlib::System::Runtime::Serialization::SerializationBinder  BinaryFormatter::get_Binder()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "get_Binder", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::Serialization::SerializationBinder(__result__);
						}

						void BinaryFormatter::set_Binder(mscorlib::System::Runtime::Serialization::SerializationBinder  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "set_Binder", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:Context
						mscorlib::System::Runtime::Serialization::StreamingContext  BinaryFormatter::get_Context()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "get_Context", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::Serialization::StreamingContext(__result__);
						}

						void BinaryFormatter::set_Context(mscorlib::System::Runtime::Serialization::StreamingContext  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "set_Context", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:SurrogateSelector
						mscorlib::System::Runtime::Serialization::ISurrogateSelector  BinaryFormatter::get_SurrogateSelector()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "get_SurrogateSelector", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::Serialization::ISurrogateSelector(__result__);
						}

						void BinaryFormatter::set_SurrogateSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = (MonoObject*)value;
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "set_SurrogateSelector", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:TypeFormat
						mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__  BinaryFormatter::get_TypeFormat()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "get_TypeFormat", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__*)mono_object_unbox(__result__);
						}

						void BinaryFormatter::set_TypeFormat(mscorlib::System::Runtime::Serialization::Formatters::FormatterTypeStyle::__ENUM__  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = reinterpret_cast<void*>(value);
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "set_TypeFormat", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}


						//	Get/Set:FilterLevel
						mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__  BinaryFormatter::get_FilterLevel()
						{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "get_FilterLevel", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__*)mono_object_unbox(__result__);
						}

						void BinaryFormatter::set_FilterLevel(mscorlib::System::Runtime::Serialization::Formatters::TypeFilterLevel::__ENUM__  value)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(value).name());
							__parameters__[0] = reinterpret_cast<void*>(value);
							Global::InvokeMethod("mscorlib", "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter", 0, NULL, "set_FilterLevel", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						}



					}
				}
			}
		}
	}
}
