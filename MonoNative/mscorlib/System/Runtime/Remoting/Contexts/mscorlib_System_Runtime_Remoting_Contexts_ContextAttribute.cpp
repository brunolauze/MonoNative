#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
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
					mscorlib::System::Boolean ContextAttribute::Equals(mscorlib::System::Object o)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(o).name());
							__parameters__[0] = (MonoObject*)o;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					void ContextAttribute::Freeze(mscorlib::System::Runtime::Remoting::Contexts::Context newContext)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(newContext).name());
							__parameters__[0] = (MonoObject*)newContext;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "Freeze", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Int32 ContextAttribute::GetHashCode()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void ContextAttribute::GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ctorMsg).name());
							__parameters__[0] = (MonoObject*)ctorMsg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "GetPropertiesForNewContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean ContextAttribute::IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ctx).name());
							__parameter_types__[1] = Global::GetType(typeid(ctorMsg).name());
							__parameters__[0] = (MonoObject*)ctx;
							__parameters__[1] = (MonoObject*)ctorMsg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "IsContextOK", __native_object__, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Boolean ContextAttribute::IsNewContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context newCtx)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(newCtx).name());
							__parameters__[0] = (MonoObject*)newCtx;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "IsNewContextOK", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//Get Set Properties Methods
					//	Get:Name
					mscorlib::System::String  ContextAttribute::get_Name() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:TypeId
					mscorlib::System::Object  ContextAttribute::get_TypeId() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
