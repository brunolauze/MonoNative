#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				mscorlib::System::Boolean StreamingContext::Equals(mscorlib::System::Object obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "StreamingContext", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 StreamingContext::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "StreamingContext", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get:Context
				mscorlib::System::Object  StreamingContext::get_Context()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "StreamingContext", 0, NULL, "get_Context", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get:State
				mscorlib::System::Runtime::Serialization::StreamingContextStates::__ENUM__  StreamingContext::get_State()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "StreamingContext", 0, NULL, "get_State", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::Serialization::StreamingContextStates::__ENUM__*)mono_object_unbox(__result__);
				}



			}
		}
	}
}
