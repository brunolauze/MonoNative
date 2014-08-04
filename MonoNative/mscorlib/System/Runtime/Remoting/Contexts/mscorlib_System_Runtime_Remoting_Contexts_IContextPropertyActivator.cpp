#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator.h>



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
					void IContextPropertyActivator::CollectFromClientContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextPropertyActivator", 0, NULL, "CollectFromClientContext", __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator, 1, __parameter_types__, __parameters__, NULL);
					}

					void IContextPropertyActivator::CollectFromServerContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextPropertyActivator", 0, NULL, "CollectFromServerContext", __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean IContextPropertyActivator::DeliverClientContextToServerContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextPropertyActivator", 0, NULL, "DeliverClientContextToServerContext", __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Boolean IContextPropertyActivator::DeliverServerContextToClientContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextPropertyActivator", 0, NULL, "DeliverServerContextToClientContext", __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Boolean IContextPropertyActivator::IsOKToActivate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextPropertyActivator", 0, NULL, "IsOKToActivate", __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
