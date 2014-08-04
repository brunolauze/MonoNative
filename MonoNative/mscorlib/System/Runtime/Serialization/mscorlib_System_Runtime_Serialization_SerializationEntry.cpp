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
				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  SerializationEntry::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationEntry", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:ObjectType
				mscorlib::System::Type  SerializationEntry::get_ObjectType()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationEntry", 0, NULL, "get_ObjectType", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:Value
				mscorlib::System::Object  SerializationEntry::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "SerializationEntry", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
