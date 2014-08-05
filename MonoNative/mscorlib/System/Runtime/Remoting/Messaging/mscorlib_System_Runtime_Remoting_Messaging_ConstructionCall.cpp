#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_ConstructionCall.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_SerializationInfo.h>
#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_StreamingContext.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Messaging
				{

					//Public Methods
					void ConstructionCall::GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(info).name());
							__parameter_types__[1] = Global::GetType(typeid(context).name());
							__parameters__[0] = (MonoObject*)info;
							__parameters__[1] = (MonoObject*)context;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "GetObjectData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:ActivationType
					mscorlib::System::Type  ConstructionCall::get_ActivationType() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "get_ActivationType", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Type(__result__);
					}


					//	Get:ActivationTypeName
					mscorlib::System::String  ConstructionCall::get_ActivationTypeName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "get_ActivationTypeName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get/Set:Activator
					mscorlib::System::Runtime::Remoting::Activation::IActivator  ConstructionCall::get_Activator() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "get_Activator", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Activation::IActivator(__result__);
					}

					void ConstructionCall::set_Activator(mscorlib::System::Runtime::Remoting::Activation::IActivator  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "set_Activator", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:CallSiteActivationAttributes
					std::vector<mscorlib::System::Object*>  ConstructionCall::get_CallSiteActivationAttributes() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "get_CallSiteActivationAttributes", __native_object__, 0, NULL, NULL, NULL);
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
					mscorlib::System::Collections::IList  ConstructionCall::get_ContextProperties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "get_ContextProperties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IList(__result__);
					}


					//	Get:Properties
					mscorlib::System::Collections::IDictionary  ConstructionCall::get_Properties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ConstructionCall", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}


					//	Get:ArgCount
					mscorlib::System::Int32  ConstructionCall::get_ArgCount() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_ArgCount", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:Args
					std::vector<mscorlib::System::Object*>  ConstructionCall::get_Args() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_Args", __native_object__, 0, NULL, NULL, NULL);
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


					//	Get:HasVarArgs
					mscorlib::System::Boolean  ConstructionCall::get_HasVarArgs() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_HasVarArgs", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:InArgCount
					mscorlib::System::Int32  ConstructionCall::get_InArgCount() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_InArgCount", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:InArgs
					std::vector<mscorlib::System::Object*>  ConstructionCall::get_InArgs() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_InArgs", __native_object__, 0, NULL, NULL, NULL);
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


					//	Get:LogicalCallContext
					mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  ConstructionCall::get_LogicalCallContext() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_LogicalCallContext", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext(__result__);
					}


					//	Get:MethodBase
					mscorlib::System::Reflection::MethodBase  ConstructionCall::get_MethodBase() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_MethodBase", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodBase(__result__);
					}


					//	Get:MethodName
					mscorlib::System::String  ConstructionCall::get_MethodName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_MethodName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:MethodSignature
					mscorlib::System::Object  ConstructionCall::get_MethodSignature() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_MethodSignature", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:TypeName
					mscorlib::System::String  ConstructionCall::get_TypeName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_TypeName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get/Set:Uri
					mscorlib::System::String  ConstructionCall::get_Uri() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "get_Uri", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void ConstructionCall::set_Uri(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCall", 0, NULL, "set_Uri", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
