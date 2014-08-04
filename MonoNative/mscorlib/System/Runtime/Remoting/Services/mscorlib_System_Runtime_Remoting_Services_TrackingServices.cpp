#include <mscorlib/System/Runtime/Remoting/Services/mscorlib_System_Runtime_Remoting_Services_TrackingServices.h>
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
				namespace Services
				{

					//Public Methods
					void TrackingServices::RegisterTrackingHandler(mscorlib::System::Runtime::Remoting::Services::ITrackingHandler handler)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(handler).name());
							__parameters__[0] = (MonoObject*)handler;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "TrackingServices", 0, NULL, "RegisterTrackingHandler", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					void TrackingServices::UnregisterTrackingHandler(mscorlib::System::Runtime::Remoting::Services::ITrackingHandler handler)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(handler).name());
							__parameters__[0] = (MonoObject*)handler;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "TrackingServices", 0, NULL, "UnregisterTrackingHandler", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Static Properties Methods
					//	Get:RegisteredHandlers
					std::vector<mscorlib::System::Runtime::Remoting::Services::ITrackingHandler*>  TrackingServices::get_RegisteredHandlers()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "TrackingServices", 0, NULL, "get_RegisteredHandlers", NullMonoObject, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::Services::ITrackingHandler*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::Services::ITrackingHandler (__array_item__));
						}
						return __array_result__;
					}




				}
			}
		}
	}
}
