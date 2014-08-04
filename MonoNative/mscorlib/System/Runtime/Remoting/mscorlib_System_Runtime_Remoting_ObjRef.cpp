#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				void ObjRef::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(info).name());
						__parameter_types__[1] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)info;
						__parameters__[1] = (MonoObject*)context;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				}

				mscorlib::System::Object ObjRef::GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(context).name());
						__parameters__[0] = (MonoObject*)context;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "GetRealObject", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Boolean ObjRef::IsFromThisAppDomain()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "IsFromThisAppDomain", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Boolean ObjRef::IsFromThisProcess()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "IsFromThisProcess", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:ChannelInfo
				mscorlib::System::Runtime::Remoting::IChannelInfo  ObjRef::get_ChannelInfo()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "get_ChannelInfo", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Remoting::IChannelInfo(__result__);
				}

				void ObjRef::set_ChannelInfo(mscorlib::System::Runtime::Remoting::IChannelInfo  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "set_ChannelInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:EnvoyInfo
				mscorlib::System::Runtime::Remoting::IEnvoyInfo  ObjRef::get_EnvoyInfo()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "get_EnvoyInfo", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Remoting::IEnvoyInfo(__result__);
				}

				void ObjRef::set_EnvoyInfo(mscorlib::System::Runtime::Remoting::IEnvoyInfo  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "set_EnvoyInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:TypeInfo
				mscorlib::System::Runtime::Remoting::IRemotingTypeInfo  ObjRef::get_TypeInfo()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "get_TypeInfo", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Runtime::Remoting::IRemotingTypeInfo(__result__);
				}

				void ObjRef::set_TypeInfo(mscorlib::System::Runtime::Remoting::IRemotingTypeInfo  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "set_TypeInfo", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:URI
				mscorlib::System::String  ObjRef::get_URI()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "get_URI", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void ObjRef::set_URI(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Remoting", "ObjRef", 0, NULL, "set_URI", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}



			}
		}
	}
}
