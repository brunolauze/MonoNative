#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationObjectManager.h>
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
				void SerializationObjectManager::RegisterObject(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationObjectManager", 0, NULL, "RegisterObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				void SerializationObjectManager::RaiseOnSerializedEvent()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationObjectManager", 0, NULL, "RaiseOnSerializedEvent", __native_object__, 0, NULL, NULL, NULL);
				}


			}
		}
	}
}
