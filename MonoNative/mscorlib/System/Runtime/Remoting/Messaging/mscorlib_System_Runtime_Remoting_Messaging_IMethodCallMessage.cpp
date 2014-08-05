#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>
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
					mscorlib::System::Object IMethodCallMessage::GetInArg(mscorlib::System::Int32 argNum)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(argNum).name());
							__parameters__[0] = &argNum;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage", 0, NULL, "GetInArg", __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::String IMethodCallMessage::GetInArgName(mscorlib::System::Int32 index)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(index).name());
							__parameters__[0] = &index;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage", 0, NULL, "GetInArgName", __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::String(__result__);
					}

					//Get Set Properties Methods
					//	Get:InArgCount
					mscorlib::System::Int32  IMethodCallMessage::get_InArgCount() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage", 0, NULL, "get_InArgCount", __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:InArgs
					std::vector<mscorlib::System::Object*>  IMethodCallMessage::get_InArgs() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "IMethodCallMessage", 0, NULL, "get_InArgs", __mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage, 0, NULL, NULL, NULL);
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



				}
			}
		}
	}
}
