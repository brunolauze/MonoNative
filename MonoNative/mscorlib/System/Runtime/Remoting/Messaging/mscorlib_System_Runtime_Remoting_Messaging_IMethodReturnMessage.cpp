#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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
					mscorlib::System::Object IMethodReturnMessage::GetOutArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage", 0, NULL, "GetOutArg", __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String IMethodReturnMessage::GetOutArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage", 0, NULL, "GetOutArgName", __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					//Get Set Properties Methods
					//	Get:Exception
					mscorlib::System::Exception  IMethodReturnMessage::get_Exception()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage", 0, NULL, "get_Exception", __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Exception(__result__);
					}


					//	Get:OutArgCount
					mscorlib::System::Int32  IMethodReturnMessage::get_OutArgCount()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage", 0, NULL, "get_OutArgCount", __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:OutArgs
					std::vector<mscorlib::System::Object*>  IMethodReturnMessage::get_OutArgs()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage", 0, NULL, "get_OutArgs", __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, 0, NULL, NULL, NULL);
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
					mscorlib::System::Object  IMethodReturnMessage::get_ReturnValue()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodReturnMessage", 0, NULL, "get_ReturnValue", __mscorlib_System_Runtime_Remoting_Messaging_IMethodReturnMessage, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}



				}
			}
		}
	}
}
