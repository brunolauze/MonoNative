#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_IDeserializationCallback.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void IDeserializationCallback::OnDeserialization(mscorlib::System::Object sender)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(sender).name());
						__parameters__[0] = (MonoObject*)sender;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "IDeserializationCallback", 0, NULL, "OnDeserialization", __mscorlib_System_Runtime_Serialization_IDeserializationCallback, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
