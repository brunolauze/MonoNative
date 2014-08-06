#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IActivator.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Activation
				{

					//Public Methods
					mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage IActivator::Activate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IActivator", 0, NULL, "Activate", __mscorlib_System_Runtime_Remoting_Activation_IActivator, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage(__result__);
					}

					//Get Set Properties Methods
					//	Get:Level
					mscorlib::System::Runtime::Remoting::Activation::ActivatorLevel::__ENUM__  IActivator::get_Level() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IActivator", 0, NULL, "get_Level", __mscorlib_System_Runtime_Remoting_Activation_IActivator, 0, NULL, NULL, NULL);
						return static_cast<mscorlib::System::Runtime::Remoting::Activation::ActivatorLevel::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
					}


					//	Get/Set:NextActivator
					mscorlib::System::Runtime::Remoting::Activation::IActivator  IActivator::get_NextActivator() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IActivator", 0, NULL, "get_NextActivator", __mscorlib_System_Runtime_Remoting_Activation_IActivator, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Activation::IActivator(__result__);
					}

					void IActivator::set_NextActivator(mscorlib::System::Runtime::Remoting::Activation::IActivator  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IActivator", 0, NULL, "set_NextActivator", __mscorlib_System_Runtime_Remoting_Activation_IActivator, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
