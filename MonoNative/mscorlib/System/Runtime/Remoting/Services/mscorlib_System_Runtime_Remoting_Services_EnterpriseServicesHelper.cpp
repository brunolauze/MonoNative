#include <mscorlib/System/Runtime/Remoting/Services/mscorlib_System_Runtime_Remoting_Services_EnterpriseServicesHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h>



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
					mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage EnterpriseServicesHelper::CreateConstructionReturnMessage(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg, mscorlib::System::MarshalByRefObject retObj)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ctorMsg).name());
							__parameter_types__[1] = Global::GetType(typeid(retObj).name());
							__parameters__[0] = (MonoObject*)ctorMsg;
							__parameters__[1] = (MonoObject*)retObj;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "EnterpriseServicesHelper", 0, NULL, "CreateConstructionReturnMessage", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage(__result__);
					}

					void EnterpriseServicesHelper::SwitchWrappers(mscorlib::System::Runtime::Remoting::Proxies::RealProxy oldcp, mscorlib::System::Runtime::Remoting::Proxies::RealProxy newcp)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(oldcp).name());
							__parameter_types__[1] = Global::GetType(typeid(newcp).name());
							__parameters__[0] = (MonoObject*)oldcp;
							__parameters__[1] = (MonoObject*)newcp;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "EnterpriseServicesHelper", 0, NULL, "SwitchWrappers", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object EnterpriseServicesHelper::WrapIUnknownWithComObject(mscorlib::System::IntPtr punk)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(punk).name());
							__parameters__[0] = punk;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Services", "EnterpriseServicesHelper", 0, NULL, "WrapIUnknownWithComObject", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}


				}
			}
		}
	}
}
