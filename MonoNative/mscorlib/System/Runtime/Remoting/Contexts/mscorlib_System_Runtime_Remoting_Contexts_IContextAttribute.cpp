#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>



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
					void IContextAttribute::GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextAttribute", 0, NULL, "GetPropertiesForNewContext", __mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean IContextAttribute::IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ctx).name());
							__parameter_types__[1] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)ctx;
							__parameters__[1] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextAttribute", 0, NULL, "IsContextOK", __mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


				}
			}
		}
	}
}
