#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_ISerializable.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
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
				void ISerializable::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(info).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "ISerializable", 0, NULL, "GetObjectData", __mscorlib_System_Runtime_Serialization_ISerializable, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
