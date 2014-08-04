#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISafeSerializationData.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				void ISafeSerializationData::CompleteDeserialization(mscorlib::System::Object deserialized)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(deserialized).name());
						__parameters__[0] = (MonoObject*)deserialized;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISafeSerializationData", 0, NULL, "CompleteDeserialization", __mscorlib_System_Runtime_Serialization_ISafeSerializationData, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
