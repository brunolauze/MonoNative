#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_RemotingSurrogateSelector.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>



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
					void RemotingSurrogateSelector::ChainSelector(mscorlib::System::Runtime::Serialization::ISurrogateSelector selector)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(selector).name());
							__parameters__[0] = (MonoObject*)selector;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "ChainSelector", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Runtime::Serialization::ISurrogateSelector RemotingSurrogateSelector::GetNextSelector()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "GetNextSelector", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Runtime::Serialization::ISurrogateSelector(__result__);
					}

					mscorlib::System::Object RemotingSurrogateSelector::GetRootObject()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "GetRootObject", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::Runtime::Serialization::ISerializationSurrogate RemotingSurrogateSelector::GetSurrogate(mscorlib::System::Type type, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector ssout)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(type).name());
							__parameter_types__[1] = Global::GetType(typeid(context).name());
							__parameter_types__[2] = Global::GetType(typeid(ssout).name());
							__parameters__[0] = (MonoObject*)type;
							__parameters__[1] = (MonoObject*)context;
							__parameters__[2] = (MonoObject*)ssout;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "GetSurrogate", __native_object__, 3, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Serialization::ISerializationSurrogate(__result__);
					}

					void RemotingSurrogateSelector::SetRootObject(mscorlib::System::Object obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "SetRootObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					void RemotingSurrogateSelector::UseSoapFormat()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "UseSoapFormat", __native_object__, 0, NULL, NULL, NULL);
					}

					//Get Set Properties Methods
					//	Get/Set:Filter
					mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )>  RemotingSurrogateSelector::get_Filter() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "get_Filter", __native_object__, 0, NULL, NULL, NULL);
						void* __delegate_result__ = mono_object_unbox(__result__);
						return mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )> ();
					}

					void RemotingSurrogateSelector::set_Filter(mscorlib::Callback<mscorlib::System::Boolean  (mscorlib::System::String , mscorlib::System::Object )>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = &value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "RemotingSurrogateSelector", 0, NULL, "set_Filter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
