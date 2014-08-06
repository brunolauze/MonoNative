#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_CallContext.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_Header.h>



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

					Property<mscorlib::System::Object , mscorlib::System::Runtime::Remoting::Messaging::CallContext> mscorlib::System::Runtime::Remoting::Messaging::CallContext::HostContext(&mscorlib::System::Runtime::Remoting::Messaging::CallContext::get_HostContext, &mscorlib::System::Runtime::Remoting::Messaging::CallContext::set_HostContext);
					//Public Methods
					void CallContext::FreeNamedDataSlot(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "FreeNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					void CallContext::FreeNamedDataSlot(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "FreeNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object CallContext::GetData(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "GetData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::Object CallContext::GetData(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "GetData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void CallContext::SetData(mscorlib::System::String name, mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameter_types__[1] = Global::GetType(typeid(data).name());
							__parameters__[0] = (MonoObject*)name;
							__parameters__[1] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "SetData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					void CallContext::SetData(const char *name, mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType(typeid(data).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							__parameters__[1] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "SetData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object CallContext::LogicalGetData(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "LogicalGetData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::Object CallContext::LogicalGetData(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "LogicalGetData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					void CallContext::LogicalSetData(mscorlib::System::String name, mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameter_types__[1] = Global::GetType(typeid(data).name());
							__parameters__[0] = (MonoObject*)name;
							__parameters__[1] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "LogicalSetData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					void CallContext::LogicalSetData(const char *name, mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType(typeid(data).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							__parameters__[1] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "LogicalSetData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> CallContext::GetHeaders()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "GetHeaders", NullMonoObject, 0, NULL, NULL, NULL);
							MonoArray *__array_ptr__ = (MonoArray*)__result__;
							uintptr_t __array_length__ = mono_array_length(__array_ptr__);
							std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*>  __array_result__(__array_length__);
							for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
							{
								MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
								__array_result__.push_back(new mscorlib::System::Runtime::Remoting::Messaging::Header (__array_item__));
							}
							return __array_result__;
					}

					void CallContext::SetHeaders(std::vector<mscorlib::System::Runtime::Remoting::Messaging::Header*> headers)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "Header")), 1));
							__parameters__[0] = Global::FromArray<mscorlib::System::Runtime::Remoting::Messaging::Header*>(headers, typeid(mscorlib::System::Runtime::Remoting::Messaging::Header).name());
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "SetHeaders", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Static Properties Methods
					//	Get/Set:HostContext
					mscorlib::System::Object  CallContext::get_HostContext()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "get_HostContext", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
					}

					void CallContext::set_HostContext(mscorlib::System::Object  value)
					{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(value).name());
						__parameters__[0] = (MonoObject*)value;
						Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Messaging", "CallContext", 0, NULL, "set_HostContext", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}




				}
			}
		}
	}
}
