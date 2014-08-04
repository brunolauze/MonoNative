#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializationSurrogate.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISurrogateSelector.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void ISerializationSurrogate::GetObjectData(mscorlib::System::Object obj, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(info).name());
						__parameter_types__[2] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)info;
						__parameters__[2] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISerializationSurrogate", 0, NULL, "GetObjectData", __mscorlib_System_Runtime_Serialization_ISerializationSurrogate, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object ISerializationSurrogate::SetObjectData(mscorlib::System::Object obj, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context, mscorlib::System::Runtime::Serialization::ISurrogateSelector selector)
				{
						MonoType *__parameter_types__[4];
						void *__parameters__[4];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(info).name());
						__parameter_types__[2] = Global::GetType(typeid(context).name());
						__parameter_types__[3] = Global::GetType(typeid(selector).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)info;
						__parameters__[2] = (MonoObject*)context;
						__parameters__[3] = (MonoObject*)selector;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISerializationSurrogate", 0, NULL, "SetObjectData", __mscorlib_System_Runtime_Serialization_ISerializationSurrogate, 4, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
