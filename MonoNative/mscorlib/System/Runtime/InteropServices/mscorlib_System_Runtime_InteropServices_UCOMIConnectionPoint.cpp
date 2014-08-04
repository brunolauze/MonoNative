#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UCOMIConnectionPointContainer.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void UCOMIConnectionPoint::GetConnectionInterface(mscorlib::System::Guid pIID)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(pIID).name());
						__parameters__[0] = (MonoObject*)pIID;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIConnectionPoint", 0, NULL, "GetConnectionInterface", __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIConnectionPoint::GetConnectionPointContainer(mscorlib::System::Runtime::InteropServices::UCOMIConnectionPointContainer ppCPC)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppCPC).name());
						__parameters__[0] = (MonoObject*)ppCPC;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIConnectionPoint", 0, NULL, "GetConnectionPointContainer", __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIConnectionPoint::Advise(mscorlib::System::Object pUnkSink, mscorlib::System::Int32 pdwCookie)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(pUnkSink).name());
						__parameter_types__[1] = Global::GetType(typeid(pdwCookie).name());
						__parameters__[0] = (MonoObject*)pUnkSink;
						__parameters__[1] = &pdwCookie;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIConnectionPoint", 0, NULL, "Advise", __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint, 2, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIConnectionPoint::Unadvise(mscorlib::System::Int32 dwCookie)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(dwCookie).name());
						__parameters__[0] = &dwCookie;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIConnectionPoint", 0, NULL, "Unadvise", __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
				}

				void UCOMIConnectionPoint::EnumConnections(mscorlib::System::Runtime::InteropServices::UCOMIEnumConnections ppEnum)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(ppEnum).name());
						__parameters__[0] = (MonoObject*)ppEnum;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UCOMIConnectionPoint", 0, NULL, "EnumConnections", __mscorlib_System_Runtime_InteropServices_UCOMIConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
