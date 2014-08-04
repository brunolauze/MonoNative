#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
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
					mscorlib::System::Type RealProxy::GetProxiedType()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "GetProxiedType", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Type(__result__);
					}

					mscorlib::System::Runtime::Remoting::ObjRef RealProxy::CreateObjRef(mscorlib::System::Type requestedType)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(requestedType).name());
							__parameters__[0] = (MonoObject*)requestedType;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "CreateObjRef", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
					}

					void RealProxy::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(info).name());
							__parameter_types__[1] = Global::GetType(typeid(context).name());
							__parameters__[0] = (MonoObject*)info;
							__parameters__[1] = (MonoObject*)context;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::IntPtr RealProxy::GetCOMIUnknown(mscorlib::System::Boolean fIsMarshalled)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(fIsMarshalled).name());
							__parameters__[0] = reinterpret_cast<void*>(fIsMarshalled);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "GetCOMIUnknown", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::IntPtr(__result__);
					}

					void RealProxy::SetCOMIUnknown(mscorlib::System::IntPtr i)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(i).name());
							__parameters__[0] = (MonoObject*)i;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "SetCOMIUnknown", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::IntPtr RealProxy::SupportsInterface(mscorlib::System::Guid iid)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(iid).name());
							__parameters__[0] = (MonoObject*)iid;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "SupportsInterface", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::IntPtr(__result__);
					}

					mscorlib::System::Object RealProxy::GetStubData(mscorlib::System::Runtime::Remoting::Proxies::RealProxy rp)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(rp).name());
							__parameters__[0] = (MonoObject*)rp;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "GetStubData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void RealProxy::SetStubData(mscorlib::System::Runtime::Remoting::Proxies::RealProxy rp, mscorlib::System::Object stubData)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(rp).name());
							__parameter_types__[1] = Global::GetType(typeid(stubData).name());
							__parameters__[0] = (MonoObject*)rp;
							__parameters__[1] = (MonoObject*)stubData;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "SetStubData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessage RealProxy::Invoke(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "Invoke", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessage(__result__);
					}

					mscorlib::System::Object RealProxy::GetTransparentProxy()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "GetTransparentProxy", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage RealProxy::InitializeServerObject(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ctorMsg).name());
							__parameters__[0] = (MonoObject*)ctorMsg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Proxies", "RealProxy", 0, NULL, "InitializeServerObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage(__result__);
					}


				}
			}
		}
	}
}
