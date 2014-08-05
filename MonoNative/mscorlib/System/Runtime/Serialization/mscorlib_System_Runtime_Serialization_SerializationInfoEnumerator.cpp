#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfoEnumerator.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationEntry.h>
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
				mscorlib::System::Boolean SerializationInfoEnumerator::MoveNext()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfoEnumerator", 0, NULL, "MoveNext", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SerializationInfoEnumerator::Reset()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfoEnumerator", 0, NULL, "Reset", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:Current
				mscorlib::System::Runtime::Serialization::SerializationEntry  SerializationInfoEnumerator::get_Current() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfoEnumerator", 0, NULL, "get_Current", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Serialization::SerializationEntry(__result__);
				}


				//	Get:Name
				mscorlib::System::String  SerializationInfoEnumerator::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfoEnumerator", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ObjectType
				mscorlib::System::Type  SerializationInfoEnumerator::get_ObjectType() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfoEnumerator", 0, NULL, "get_ObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Value
				mscorlib::System::Object  SerializationInfoEnumerator::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationInfoEnumerator", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
