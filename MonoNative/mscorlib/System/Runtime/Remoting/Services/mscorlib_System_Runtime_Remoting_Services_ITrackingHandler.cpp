#include <mscorlib/System/Runtime/Remoting/Services/mscorlib_System_Runtime_Remoting_Services_ITrackingHandler.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Services
				{

					//Public Methods
					void ITrackingHandler::DisconnectedObject(mscorlib::System::Object obj)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameters__[0] = (MonoObject*)obj;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "ITrackingHandler", 0, NULL, "DisconnectedObject", __mscorlib_System_Runtime_Remoting_Services_ITrackingHandler, 1, __parameter_types__, __parameters__, NULL);
					}

					void ITrackingHandler::MarshaledObject(mscorlib::System::Object obj, mscorlib::System::Runtime::Remoting::ObjRef objOr)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameter_types__[1] = Global::GetType(typeid(objOr).name());
							__parameters__[0] = (MonoObject*)obj;
							__parameters__[1] = (MonoObject*)objOr;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "ITrackingHandler", 0, NULL, "MarshaledObject", __mscorlib_System_Runtime_Remoting_Services_ITrackingHandler, 2, __parameter_types__, __parameters__, NULL);
					}

					void ITrackingHandler::UnmarshaledObject(mscorlib::System::Object obj, mscorlib::System::Runtime::Remoting::ObjRef objOr)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(obj).name());
							__parameter_types__[1] = Global::GetType(typeid(objOr).name());
							__parameters__[0] = (MonoObject*)obj;
							__parameters__[1] = (MonoObject*)objOr;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "ITrackingHandler", 0, NULL, "UnmarshaledObject", __mscorlib_System_Runtime_Remoting_Services_ITrackingHandler, 2, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
