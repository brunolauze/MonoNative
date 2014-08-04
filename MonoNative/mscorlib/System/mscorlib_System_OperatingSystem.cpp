#include <mscorlib/System/mscorlib_System_OperatingSystem.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Object OperatingSystem::Clone()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "Clone", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		void OperatingSystem::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::String OperatingSystem::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		//Get Set Properties Methods
		//	Get:Platform
		mscorlib::System::PlatformID::__ENUM__  OperatingSystem::get_Platform()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "get_Platform", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::PlatformID::__ENUM__*)mono_object_unbox(__result__);
		}


		//	Get:Version
		mscorlib::System::Version  OperatingSystem::get_Version()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "get_Version", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Version(__result__);
		}


		//	Get:ServicePack
		mscorlib::System::String  OperatingSystem::get_ServicePack()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "get_ServicePack", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:VersionString
		mscorlib::System::String  OperatingSystem::get_VersionString()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "OperatingSystem", 0, NULL, "get_VersionString", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}



	}
}
