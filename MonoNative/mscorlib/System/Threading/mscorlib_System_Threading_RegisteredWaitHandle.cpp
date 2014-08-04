#include <mscorlib/System/Threading/mscorlib_System_Threading_RegisteredWaitHandle.h>
#include <mscorlib/System/Threading/mscorlib_System_Threading_WaitHandle.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Threading
		{

			//Public Methods
			mscorlib::System::Boolean RegisteredWaitHandle::Unregister(mscorlib::System::Threading::WaitHandle waitObject)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(waitObject).name());
					__parameters__[0] = (MonoObject*)waitObject;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Threading", "RegisteredWaitHandle", 0, NULL, "Unregister", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


		}
	}
}
