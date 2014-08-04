#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_SERVICES_ITRACKINGHANDLER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjRef;
				

			}
		}
	}
}
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

					class ITrackingHandler
					{
					public:
						ITrackingHandler(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Services_ITrackingHandler = nativeObject;
						};
					
						~ITrackingHandler()
						{
						};
					

						ITrackingHandler & operator=(ITrackingHandler &value) { __mscorlib_System_Runtime_Remoting_Services_ITrackingHandler = value.__mscorlib_System_Runtime_Remoting_Services_ITrackingHandler; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Services_ITrackingHandler; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Services_ITrackingHandler = value; return value; };


						virtual void  DisconnectedObject(mscorlib::System::Object obj);
						virtual void  MarshaledObject(mscorlib::System::Object obj, mscorlib::System::Runtime::Remoting::ObjRef objOr);
						virtual void  UnmarshaledObject(mscorlib::System::Object obj, mscorlib::System::Runtime::Remoting::ObjRef objOr);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Services_ITrackingHandler;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
