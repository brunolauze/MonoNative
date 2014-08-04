#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjectHandle.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				mscorlib::System::Object ObjectHandle::InitializeLifetimeService()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjectHandle", 0, NULL, "InitializeLifetimeService", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object ObjectHandle::Unwrap()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjectHandle", 0, NULL, "Unwrap", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
