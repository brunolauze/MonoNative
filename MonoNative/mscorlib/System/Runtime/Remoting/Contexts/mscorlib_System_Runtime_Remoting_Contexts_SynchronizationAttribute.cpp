#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					//Public Methods
					void SynchronizationAttribute::GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ctorMsg).name());
							__parameters__[0] = (MonoObject*)ctorMsg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "GetPropertiesForNewContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink SynchronizationAttribute::GetClientContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(nextSink).name());
							__parameters__[0] = (MonoObject*)nextSink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "GetClientContextSink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}

					mscorlib::System::Runtime::Remoting::Messaging::IMessageSink SynchronizationAttribute::GetServerContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(nextSink).name());
							__parameters__[0] = (MonoObject*)nextSink;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "GetServerContextSink", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Messaging::IMessageSink(__result__);
					}

					mscorlib::System::Boolean SynchronizationAttribute::IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ctx).name());
							__parameter_types__[1] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)ctx;
							__parameters__[1] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "IsContextOK", __native_object__, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//Get Set Properties Methods
					//	Get:IsReEntrant
					mscorlib::System::Boolean  SynchronizationAttribute::get_IsReEntrant()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "get_IsReEntrant", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get/Set:Locked
					mscorlib::System::Boolean  SynchronizationAttribute::get_Locked()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "get_Locked", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void SynchronizationAttribute::set_Locked(mscorlib::System::Boolean  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = reinterpret_cast<void*>(value);
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "set_Locked", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:Name
					mscorlib::System::String  SynchronizationAttribute::get_Name()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:TypeId
					mscorlib::System::Object  SynchronizationAttribute::get_TypeId()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


						//	Get/Set:NOT_SUPPORTED
					mscorlib::System::Int32 SynchronizationAttribute::get_NOT_SUPPORTED()
					{
						return Global::GetFieldInt32Value("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "NOT_SUPPORTED");
					}

					void SynchronizationAttribute::set_NOT_SUPPORTED(mscorlib::System::Int32  value)
					{
					}

						//	Get/Set:SUPPORTED
					mscorlib::System::Int32 SynchronizationAttribute::get_SUPPORTED()
					{
						return Global::GetFieldInt32Value("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "SUPPORTED");
					}

					void SynchronizationAttribute::set_SUPPORTED(mscorlib::System::Int32  value)
					{
					}

						//	Get/Set:REQUIRED
					mscorlib::System::Int32 SynchronizationAttribute::get_REQUIRED()
					{
						return Global::GetFieldInt32Value("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "REQUIRED");
					}

					void SynchronizationAttribute::set_REQUIRED(mscorlib::System::Int32  value)
					{
					}

						//	Get/Set:REQUIRES_NEW
					mscorlib::System::Int32 SynchronizationAttribute::get_REQUIRES_NEW()
					{
						return Global::GetFieldInt32Value("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 0, NULL, "REQUIRES_NEW");
					}

					void SynchronizationAttribute::set_REQUIRES_NEW(mscorlib::System::Int32  value)
					{
					}


				}
			}
		}
	}
}
