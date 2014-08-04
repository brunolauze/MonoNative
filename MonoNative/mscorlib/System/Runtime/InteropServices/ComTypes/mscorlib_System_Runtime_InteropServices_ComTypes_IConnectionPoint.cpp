#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/Runtime/InteropServices/ComTypes/mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPointContainer.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace ComTypes
				{

					//Public Methods
					void IConnectionPoint::GetConnectionInterface(mscorlib::System::Guid pIID)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(pIID).name());
							__parameters__[0] = (MonoObject*)pIID;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPoint", 0, NULL, "GetConnectionInterface", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
					}

					void IConnectionPoint::GetConnectionPointContainer(mscorlib::System::Runtime::InteropServices::ComTypes::IConnectionPointContainer ppCPC)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppCPC).name());
							__parameters__[0] = (MonoObject*)ppCPC;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPoint", 0, NULL, "GetConnectionPointContainer", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
					}

					void IConnectionPoint::Advise(mscorlib::System::Object pUnkSink, mscorlib::System::Int32 pdwCookie)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(pUnkSink).name());
							__parameter_types__[1] = Global::GetType(typeid(pdwCookie).name());
							__parameters__[0] = (MonoObject*)pUnkSink;
							__parameters__[1] = &pdwCookie;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPoint", 0, NULL, "Advise", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint, 2, __parameter_types__, __parameters__, NULL);
					}

					void IConnectionPoint::Unadvise(mscorlib::System::Int32 dwCookie)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(dwCookie).name());
							__parameters__[0] = &dwCookie;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPoint", 0, NULL, "Unadvise", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
					}

					void IConnectionPoint::EnumConnections(mscorlib::System::Runtime::InteropServices::ComTypes::IEnumConnections ppEnum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ppEnum).name());
							__parameters__[0] = (MonoObject*)ppEnum;
							Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices.ComTypes", "IConnectionPoint", 0, NULL, "EnumConnections", __mscorlib_System_Runtime_InteropServices_ComTypes_IConnectionPoint, 1, __parameter_types__, __parameters__, NULL);
					}


				}
			}
		}
	}
}
