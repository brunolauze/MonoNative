#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_ReturnMessage.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
					mscorlib::System::Object ReturnMessage::GetArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "GetArg", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String ReturnMessage::GetArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "GetArgName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::Object ReturnMessage::GetOutArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "GetOutArg", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String ReturnMessage::GetOutArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "GetOutArgName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					//Get Set Properties Methods
					//	Get:ArgCount
					mscorlib::System::Int32  ReturnMessage::get_ArgCount()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_ArgCount", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:Args
					std::vector<mscorlib::System::Object*>  ReturnMessage::get_Args()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_Args", __native_object__, 0, NULL, NULL, NULL);
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
					mscorlib::System::Boolean  ReturnMessage::get_HasVarArgs()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_HasVarArgs", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:LogicalCallContext
					mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  ReturnMessage::get_LogicalCallContext()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_LogicalCallContext", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext(__result__);
					}


					//	Get:MethodBase
					mscorlib::System::Reflection::MethodBase  ReturnMessage::get_MethodBase()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_MethodBase", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodBase(__result__);
					}


					//	Get:MethodName
					mscorlib::System::String  ReturnMessage::get_MethodName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_MethodName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:MethodSignature
					mscorlib::System::Object  ReturnMessage::get_MethodSignature()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_MethodSignature", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:Properties
					mscorlib::System::Collections::IDictionary  ReturnMessage::get_Properties()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}


					//	Get:TypeName
					mscorlib::System::String  ReturnMessage::get_TypeName()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_TypeName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get/Set:Uri
					mscorlib::System::String  ReturnMessage::get_Uri()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_Uri", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void ReturnMessage::set_Uri(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "set_Uri", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:Exception
					mscorlib::System::Exception  ReturnMessage::get_Exception()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_Exception", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Exception(__result__);
					}


					//	Get:OutArgCount
					mscorlib::System::Int32  ReturnMessage::get_OutArgCount()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_OutArgCount", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:OutArgs
					std::vector<mscorlib::System::Object*>  ReturnMessage::get_OutArgs()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_OutArgs", __native_object__, 0, NULL, NULL, NULL);
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


					//	Get:ReturnValue
					mscorlib::System::Object  ReturnMessage::get_ReturnValue()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "ReturnMessage", 0, NULL, "get_ReturnValue", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
