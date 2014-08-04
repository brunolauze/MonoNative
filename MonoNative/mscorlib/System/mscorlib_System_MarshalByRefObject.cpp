#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Runtime::Remoting::ObjRef MarshalByRefObject::CreateObjRef(mscorlib::System::Type requestedType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(requestedType).name());
				__parameters__[0] = (MonoObject*)requestedType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "MarshalByRefObject", 0, NULL, "CreateObjRef", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
		}

		mscorlib::System::Object MarshalByRefObject::GetLifetimeService()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "MarshalByRefObject", 0, NULL, "GetLifetimeService", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object MarshalByRefObject::InitializeLifetimeService()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "MarshalByRefObject", 0, NULL, "InitializeLifetimeService", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}


	}
}
