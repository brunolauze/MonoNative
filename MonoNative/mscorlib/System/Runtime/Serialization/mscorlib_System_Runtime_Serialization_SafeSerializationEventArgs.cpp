#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SafeSerializationEventArgs.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
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
				void SafeSerializationEventArgs::AddSerializedState(mscorlib::System::Runtime::Serialization::ISafeSerializationData serializedState)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(serializedState).name());
						__parameters__[0] = (MonoObject*)serializedState;
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SafeSerializationEventArgs", 0, NULL, "AddSerializedState", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}

				//Get Set Properties Methods
				//	Get:StreamingContext
				mscorlib::System::Runtime::Serialization::StreamingContext  SafeSerializationEventArgs::get_StreamingContext() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SafeSerializationEventArgs", 0, NULL, "get_StreamingContext", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Serialization::StreamingContext(__result__);
				}



			}
		}
	}
}
