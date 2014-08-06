#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_RemotingServices.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/Runtime/Remoting/Proxies/mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				//Public Methods
				mscorlib::System::Boolean RemotingServices::IsTransparentProxy(mscorlib::System::Object proxy)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(proxy).name());
						__parameters__[0] = (MonoObject*)proxy;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "IsTransparentProxy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage RemotingServices::ExecuteMessage(mscorlib::System::MarshalByRefObject target, mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage reqMsg)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(target).name());
						__parameter_types__[1] = Global::GetType(typeid(reqMsg).name());
						__parameters__[0] = (MonoObject*)target;
						__parameters__[1] = (MonoObject*)reqMsg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "ExecuteMessage", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::IMethodReturnMessage(__result__);
				}

				mscorlib::System::Object RemotingServices::Connect(mscorlib::System::Type classToProxy, mscorlib::System::String url)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(classToProxy).name());
						__parameter_types__[1] = Global::GetType(typeid(url).name());
						__parameters__[0] = (MonoObject*)classToProxy;
						__parameters__[1] = (MonoObject*)url;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Connect", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object RemotingServices::Connect(mscorlib::System::Type classToProxy, const char *url)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(classToProxy).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)classToProxy;
						__parameters__[1] = mono_string_new(Global::GetDomain(), url);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Connect", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object RemotingServices::Connect(mscorlib::System::Type classToProxy, mscorlib::System::String url, mscorlib::System::Object data)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(classToProxy).name());
						__parameter_types__[1] = Global::GetType(typeid(url).name());
						__parameter_types__[2] = Global::GetType(typeid(data).name());
						__parameters__[0] = (MonoObject*)classToProxy;
						__parameters__[1] = (MonoObject*)url;
						__parameters__[2] = (MonoObject*)data;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Connect", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object RemotingServices::Connect(mscorlib::System::Type classToProxy, const char *url, mscorlib::System::Object data)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(classToProxy).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(data).name());
						__parameters__[0] = (MonoObject*)classToProxy;
						__parameters__[1] = mono_string_new(Global::GetDomain(), url);
						__parameters__[2] = (MonoObject*)data;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Connect", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean RemotingServices::Disconnect(mscorlib::System::MarshalByRefObject obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Disconnect", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Type RemotingServices::GetServerTypeForUri(mscorlib::System::String URI)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(URI).name());
						__parameters__[0] = (MonoObject*)URI;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetServerTypeForUri", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::Type RemotingServices::GetServerTypeForUri(const char *URI)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = mono_string_new(Global::GetDomain(), URI);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetServerTypeForUri", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Type(__result__);
				}

				mscorlib::System::String RemotingServices::GetObjectUri(mscorlib::System::MarshalByRefObject obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetObjectUri", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Object RemotingServices::Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef objectRef)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(objectRef).name());
						__parameters__[0] = (MonoObject*)objectRef;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Unmarshal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object RemotingServices::Unmarshal(mscorlib::System::Runtime::Remoting::ObjRef objectRef, mscorlib::System::Boolean fRefine)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(objectRef).name());
						__parameter_types__[1] = Global::GetType(typeid(fRefine).name());
						__parameters__[0] = (MonoObject*)objectRef;
						__parameters__[1] = reinterpret_cast<void*>(fRefine);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Unmarshal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Runtime::Remoting::ObjRef RemotingServices::Marshal(mscorlib::System::MarshalByRefObject Obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(Obj).name());
						__parameters__[0] = (MonoObject*)Obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Marshal", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
				}

				mscorlib::System::Runtime::Remoting::ObjRef RemotingServices::Marshal(mscorlib::System::MarshalByRefObject Obj, mscorlib::System::String URI)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(Obj).name());
						__parameter_types__[1] = Global::GetType(typeid(URI).name());
						__parameters__[0] = (MonoObject*)Obj;
						__parameters__[1] = (MonoObject*)URI;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Marshal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
				}

				mscorlib::System::Runtime::Remoting::ObjRef RemotingServices::Marshal(mscorlib::System::MarshalByRefObject Obj, const char *URI)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(Obj).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)Obj;
						__parameters__[1] = mono_string_new(Global::GetDomain(), URI);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Marshal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
				}

				mscorlib::System::Runtime::Remoting::ObjRef RemotingServices::Marshal(mscorlib::System::MarshalByRefObject Obj, mscorlib::System::String ObjURI, mscorlib::System::Type RequestedType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(Obj).name());
						__parameter_types__[1] = Global::GetType(typeid(ObjURI).name());
						__parameter_types__[2] = Global::GetType(typeid(RequestedType).name());
						__parameters__[0] = (MonoObject*)Obj;
						__parameters__[1] = (MonoObject*)ObjURI;
						__parameters__[2] = (MonoObject*)RequestedType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Marshal", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
				}

				mscorlib::System::Runtime::Remoting::ObjRef RemotingServices::Marshal(mscorlib::System::MarshalByRefObject Obj, const char *ObjURI, mscorlib::System::Type RequestedType)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(Obj).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameter_types__[2] = Global::GetType(typeid(RequestedType).name());
						__parameters__[0] = (MonoObject*)Obj;
						__parameters__[1] = mono_string_new(Global::GetDomain(), ObjURI);
						__parameters__[2] = (MonoObject*)RequestedType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "Marshal", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
				}

				mscorlib::System::Runtime::Remoting::Proxies::RealProxy RemotingServices::GetRealProxy(mscorlib::System::Object proxy)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(proxy).name());
						__parameters__[0] = (MonoObject*)proxy;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetRealProxy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::Proxies::RealProxy(__result__);
				}

				mscorlib::System::Reflection::MethodBase RemotingServices::GetMethodBaseFromMethodMessage(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage msg)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(msg).name());
						__parameters__[0] = (MonoObject*)msg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetMethodBaseFromMethodMessage", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Reflection::MethodBase(__result__);
				}

				void RemotingServices::GetObjectData(mscorlib::System::Object obj, mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[3];
						void *__parameters__[3];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(info).name());
						__parameter_types__[2] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)info;
						__parameters__[2] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetObjectData", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Runtime::Remoting::ObjRef RemotingServices::GetObjRefForProxy(mscorlib::System::MarshalByRefObject obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetObjRefForProxy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjRef(__result__);
				}

				mscorlib::System::Object RemotingServices::GetLifetimeService(mscorlib::System::MarshalByRefObject obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetLifetimeService", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Runtime::Remoting::Messaging::IMessageSink RemotingServices::GetEnvoyChainForProxy(mscorlib::System::MarshalByRefObject obj)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameters__[0] = (MonoObject*)obj;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetEnvoyChainForProxy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
				}

				void RemotingServices::LogRemotingStage(mscorlib::System::Int32 stage)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(stage).name());
						__parameters__[0] = &stage;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "LogRemotingStage", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::String RemotingServices::GetSessionIdForMethodMessage(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage msg)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(msg).name());
						__parameters__[0] = (MonoObject*)msg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "GetSessionIdForMethodMessage", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::String(__result__);
				}

				mscorlib::System::Boolean RemotingServices::IsMethodOverloaded(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage msg)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(msg).name());
						__parameters__[0] = (MonoObject*)msg;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "IsMethodOverloaded", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RemotingServices::IsObjectOutOfAppDomain(mscorlib::System::Object tp)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(tp).name());
						__parameters__[0] = (MonoObject*)tp;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "IsObjectOutOfAppDomain", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RemotingServices::IsObjectOutOfContext(mscorlib::System::Object tp)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(tp).name());
						__parameters__[0] = (MonoObject*)tp;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "IsObjectOutOfContext", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean RemotingServices::IsOneWay(mscorlib::System::Reflection::MethodBase method)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(method).name());
						__parameters__[0] = (MonoObject*)method;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "IsOneWay", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RemotingServices::SetObjectUriForMarshal(mscorlib::System::MarshalByRefObject obj, mscorlib::System::String uri)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType(typeid(uri).name());
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = (MonoObject*)uri;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "SetObjectUriForMarshal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}

				void RemotingServices::SetObjectUriForMarshal(mscorlib::System::MarshalByRefObject obj, const char *uri)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(obj).name());
						__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
						__parameters__[0] = (MonoObject*)obj;
						__parameters__[1] = mono_string_new(Global::GetDomain(), uri);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "RemotingServices", 0, NULL, "SetObjectUriForMarshal", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
