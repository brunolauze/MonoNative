#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_ProxyAttribute.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Proxies
				{

					//Public Methods
					mscorlib::System::MarshalByRefObject ProxyAttribute::CreateInstance(mscorlib::System::Type serverType)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(serverType).name());
							__parameters__[0] = (MonoObject*)serverType;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "ProxyAttribute", 0, NULL, "CreateInstance", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::MarshalByRefObject(__result__);
					}

					mscorlib::System::Runtime::Remoting::Proxies::RealProxy ProxyAttribute::CreateProxy(mscorlib::System::Runtime::Remoting::ObjRef objRef, mscorlib::System::Type serverType, mscorlib::System::Object serverObject, mscorlib::System::Runtime::Remoting::Contexts::Context serverContext)
					{
							MonoType *__parameter_types__[4];
							void *__parameters__[4];
							__parameter_types__[0] = Global::GetType(typeid(objRef).name());
							__parameter_types__[1] = Global::GetType(typeid(serverType).name());
							__parameter_types__[2] = Global::GetType(typeid(serverObject).name());
							__parameter_types__[3] = Global::GetType(typeid(serverContext).name());
							__parameters__[0] = (MonoObject*)objRef;
							__parameters__[1] = (MonoObject*)serverType;
							__parameters__[2] = (MonoObject*)serverObject;
							__parameters__[3] = (MonoObject*)serverContext;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "ProxyAttribute", 0, NULL, "CreateProxy", __native_object__, 4, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Proxies::RealProxy(__result__);
					}

					void ProxyAttribute::GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "ProxyAttribute", 0, NULL, "GetPropertiesForNewContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean ProxyAttribute::IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ctx).name());
							__parameter_types__[1] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)ctx;
							__parameters__[1] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "ProxyAttribute", 0, NULL, "IsContextOK", __native_object__, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//Get Set Properties Methods
					//	Get:TypeId
					mscorlib::System::Object  ProxyAttribute::get_TypeId()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
