#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h>
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
				namespace Activation
				{

					//Public Methods
					mscorlib::System::Boolean UrlAttribute::Equals(mscorlib::System::Object o)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(o).name());
							__parameters__[0] = (MonoObject*)o;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "UrlAttribute", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Int32 UrlAttribute::GetHashCode()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "UrlAttribute", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
							return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}

					void UrlAttribute::GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(ctorMsg).name());
							__parameters__[0] = (MonoObject*)ctorMsg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "UrlAttribute", 0, NULL, "GetPropertiesForNewContext", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Boolean UrlAttribute::IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(ctx).name());
							__parameter_types__[1] = Global::GetType(typeid(msg).name());
							__parameters__[0] = (MonoObject*)ctx;
							__parameters__[1] = (MonoObject*)msg;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "UrlAttribute", 0, NULL, "IsContextOK", __native_object__, 2, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					//Get Set Properties Methods
					//	Get:UrlValue
					mscorlib::System::String  UrlAttribute::get_UrlValue() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Activation", "UrlAttribute", 0, NULL, "get_UrlValue", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:Name
					mscorlib::System::String  UrlAttribute::get_Name() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "ContextAttribute", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:TypeId
					mscorlib::System::Object  UrlAttribute::get_TypeId() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
