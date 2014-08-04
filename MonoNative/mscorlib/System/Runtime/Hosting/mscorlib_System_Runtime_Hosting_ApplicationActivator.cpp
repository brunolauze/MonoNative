#include <mscorlib/System/Runtime/Hosting/mscorlib_System_Runtime_Hosting_ApplicationActivator.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjectHandle.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Hosting
			{

				//Public Methods
				mscorlib::System::Runtime::Remoting::ObjectHandle ApplicationActivator::CreateInstance(mscorlib::System::ActivationContext activationContext)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(activationContext).name());
						__parameters__[0] = (MonoObject*)activationContext;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Hosting", "ApplicationActivator", 0, NULL, "CreateInstance", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
				}

				mscorlib::System::Runtime::Remoting::ObjectHandle ApplicationActivator::CreateInstance(mscorlib::System::ActivationContext activationContext, std::vector<mscorlib::System::String*> activationCustomData)
				{
						MonoType *__parameter_types__[2];
						void *__parameters__[2];
						__parameter_types__[0] = Global::GetType(typeid(activationContext).name());
						__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationCustomData).name()))->eklass);
						__parameters__[0] = (MonoObject*)activationContext;
						__parameters__[1] = Global::FromArray<mscorlib::System::String*>(activationCustomData, typeid(mscorlib::System::String).name());
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Hosting", "ApplicationActivator", 0, NULL, "CreateInstance", __native_object__, 2, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
				}


			}
		}
	}
}
