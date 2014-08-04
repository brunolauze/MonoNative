#include <mscorlib/System/mscorlib_System_DBNull.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void DBNull::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "DBNull", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::TypeCode::__ENUM__ DBNull::GetTypeCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DBNull", 0, NULL, "GetTypeCode", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::TypeCode::__ENUM__*)mono_object_unbox(__result__);
		}

		mscorlib::System::String DBNull::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DBNull", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String DBNull::ToString(mscorlib::System::IFormatProvider provider)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(provider).name());
				__parameters__[0] = (MonoObject*)provider;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "DBNull", 0, NULL, "ToString", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

			//	Get/Set:Value
		mscorlib::System::DBNull DBNull::get_Value()
		{
			return Global::GetFieldValue("mscorlib", "System", "DBNull", 0, NULL, "Value");
		}



	}
}
