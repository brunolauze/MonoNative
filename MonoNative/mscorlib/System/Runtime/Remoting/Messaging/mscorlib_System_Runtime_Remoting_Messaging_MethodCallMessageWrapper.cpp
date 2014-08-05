#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_MethodCallMessageWrapper.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_LogicalCallContext.h>
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
					mscorlib::System::Object MethodCallMessageWrapper::GetArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "GetArg", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String MethodCallMessageWrapper::GetArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "GetArgName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					mscorlib::System::Object MethodCallMessageWrapper::GetInArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "GetInArg", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String MethodCallMessageWrapper::GetInArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "GetInArgName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					//Get Set Properties Methods
					//	Get:ArgCount
					mscorlib::System::Int32  MethodCallMessageWrapper::get_ArgCount() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_ArgCount", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get/Set:Args
					std::vector<mscorlib::System::Object*>  MethodCallMessageWrapper::get_Args() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_Args", __native_object__, 0, NULL, NULL, NULL);
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

					void MethodCallMessageWrapper::set_Args(std::vector<mscorlib::System::Object*>  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(value).name()))->eklass);
						__parameters__[0] = Global::FromArray<mscorlib::System::Object*>(value, typeid(mscorlib::System::Object).name());
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "set_Args", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}


					//	Get:HasVarArgs
					mscorlib::System::Boolean  MethodCallMessageWrapper::get_HasVarArgs() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_HasVarArgs", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}


					//	Get:InArgCount
					mscorlib::System::Int32  MethodCallMessageWrapper::get_InArgCount() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_InArgCount", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:InArgs
					std::vector<mscorlib::System::Object*>  MethodCallMessageWrapper::get_InArgs() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_InArgs", __native_object__, 0, NULL, NULL, NULL);
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
					mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext  MethodCallMessageWrapper::get_LogicalCallContext() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_LogicalCallContext", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Messaging::LogicalCallContext(__result__);
					}


					//	Get:MethodBase
					mscorlib::System::Reflection::MethodBase  MethodCallMessageWrapper::get_MethodBase() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_MethodBase", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Reflection::MethodBase(__result__);
					}


					//	Get:MethodName
					mscorlib::System::String  MethodCallMessageWrapper::get_MethodName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_MethodName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get:MethodSignature
					mscorlib::System::Object  MethodCallMessageWrapper::get_MethodSignature() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_MethodSignature", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}


					//	Get:Properties
					mscorlib::System::Collections::IDictionary  MethodCallMessageWrapper::get_Properties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_Properties", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Collections::IDictionary(__result__);
					}


					//	Get:TypeName
					mscorlib::System::String  MethodCallMessageWrapper::get_TypeName() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_TypeName", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}


					//	Get/Set:Uri
					mscorlib::System::String  MethodCallMessageWrapper::get_Uri() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "get_Uri", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
					}

					void MethodCallMessageWrapper::set_Uri(mscorlib::System::String  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "MethodCallMessageWrapper", 0, NULL, "set_Uri", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}



				}
			}
		}
	}
}
