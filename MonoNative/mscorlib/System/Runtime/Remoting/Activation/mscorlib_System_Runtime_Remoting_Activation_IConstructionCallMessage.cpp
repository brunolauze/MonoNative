#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IActivator.h>



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

					//Get Set Properties Methods
					//	Get:ActivationType
					mscorlib::System::Type  IConstructionCallMessage::get_ActivationType()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IConstructionCallMessage", 0, NULL, "get_ActivationType", __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}


					//	Get:ActivationTypeName
					mscorlib::System::String  IConstructionCallMessage::get_ActivationTypeName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IConstructionCallMessage", 0, NULL, "get_ActivationTypeName", __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get/Set:Activator
					mscorlib::System::Runtime::Remoting::Activation::IActivator  IConstructionCallMessage::get_Activator()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IConstructionCallMessage", 0, NULL, "get_Activator", __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Activation::IActivator(__result__);
					}

					void IConstructionCallMessage::set_Activator(mscorlib::System::Runtime::Remoting::Activation::IActivator  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IConstructionCallMessage", 0, NULL, "set_Activator", __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:CallSiteActivationAttributes
					std::vector<mscorlib::System::Object*>  IConstructionCallMessage::get_CallSiteActivationAttributes()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IConstructionCallMessage", 0, NULL, "get_CallSiteActivationAttributes", __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Object*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Object (__array_item__));
						}
						return __array_result__;
					}


					//	Get:ContextProperties
					mscorlib::System::Collections::IList  IConstructionCallMessage::get_ContextProperties()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "IConstructionCallMessage", 0, NULL, "get_ContextProperties", __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IList(__result__);
					}



				}
			}
		}
	}
}
