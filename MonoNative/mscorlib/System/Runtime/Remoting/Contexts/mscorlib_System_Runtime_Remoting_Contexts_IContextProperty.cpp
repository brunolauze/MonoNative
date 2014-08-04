#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextProperty.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
					void IContextProperty::Freeze(mscorlib::System::Runtime::Remoting::Contexts::Context newContext)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(newContext).name());
							__parameters__[0] = (MonoObject*)newContext;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextProperty", 0, NULL, "Freeze", __mscorlib_System_Runtime_Remoting_Contexts_IContextProperty, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean IContextProperty::IsNewContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context newCtx)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(newCtx).name());
							__parameters__[0] = (MonoObject*)newCtx;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextProperty", 0, NULL, "IsNewContextOK", __mscorlib_System_Runtime_Remoting_Contexts_IContextProperty, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  IContextProperty::get_Name()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "IContextProperty", 0, NULL, "get_Name", __mscorlib_System_Runtime_Remoting_Contexts_IContextProperty, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}



				}
			}
		}
	}
}
