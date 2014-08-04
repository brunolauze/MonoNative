#include <mscorlib/System/mscorlib_System_WeakReference.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void WeakReferenceBase::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(info).name());
				__parameter_types__[1] = Global::GetType(typeid(context).name());
				__parameters__[0] = (MonoObject*)info;
				__parameters__[1] = (MonoObject*)context;
				Global::InvokeMethod("mscorlib", "System", "WeakReference", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		//Get Set Properties Methods
		//	Get:IsAlive
		mscorlib::System::Boolean  WeakReferenceBase::get_IsAlive()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "WeakReference", 0, NULL, "get_IsAlive", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get/Set:Target
		mscorlib::System::Object  WeakReferenceBase::get_Target()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "WeakReference", 0, NULL, "get_Target", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}

		void WeakReferenceBase::set_Target(mscorlib::System::Object  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = (MonoObject*)value;
			Global::InvokeMethod("mscorlib", "System", "WeakReference", 0, NULL, "set_Target", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:TrackResurrection
		mscorlib::System::Boolean  WeakReferenceBase::get_TrackResurrection()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "WeakReference", 0, NULL, "get_TrackResurrection", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}



	}
}
