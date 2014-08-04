#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContext.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
					mscorlib::System::Object IMethodMessage::GetArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "GetArg", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String IMethodMessage::GetArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "GetArgName", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					//Get Set Properties Methods
					//	Get:ArgCount
					mscorlib::System::Int32  IMethodMessage::get_ArgCount()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_ArgCount", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:Args
					std::vector<mscorlib::System::Object*>  IMethodMessage::get_Args()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_Args", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
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
					mscorlib::System::Boolean  IMethodMessage::get_HasVarArgs()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_HasVarArgs", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:LogicalCallContext
					mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  IMethodMessage::get_LogicalCallContext()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_LogicalCallContext", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext(__result__);
					}


					//	Get:MethodBase
					mscorlib::System::Reflection::MethodBase  IMethodMessage::get_MethodBase()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_MethodBase", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodBase(__result__);
					}


					//	Get:MethodName
					mscorlib::System::String  IMethodMessage::get_MethodName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_MethodName", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:MethodSignature
					mscorlib::System::Object  IMethodMessage::get_MethodSignature()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_MethodSignature", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:TypeName
					mscorlib::System::String  IMethodMessage::get_TypeName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_TypeName", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:Uri
					mscorlib::System::String  IMethodMessage::get_Uri()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodMessage", 0, NULL, "get_Uri", __mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}



				}
			}
		}
	}
}
