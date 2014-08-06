#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_Context.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_ContextBoundObject.h>
#include <mscorlib/System/mscorlib_System_LocalDataStoreSlot.h>



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

					Property<mscorlib::System::Runtime::Remoting::Contexts::Context , mscorlib::System::Runtime::Remoting::Contexts::Context> mscorlib::System::Runtime::Remoting::Contexts::Context::DefaultContext(&mscorlib::System::Runtime::Remoting::Contexts::Context::get_DefaultContext, &mscorlib::System::Runtime::Remoting::Contexts::Context::set_DefaultContext);
					//Public Methods
					mscorlib::System::Boolean Context::RegisterDynamicProperty(mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty prop, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(prop).name());
							__parameter_types__[1] = Global::GetType(typeid(obj).name());
							__parameter_types__[2] = Global::GetType(typeid(ctx).name());
							__parameters__[0] = (MonoObject*)prop;
							__parameters__[1] = (MonoObject*)obj;
							__parameters__[2] = (MonoObject*)ctx;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "RegisterDynamicProperty", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Boolean Context::UnregisterDynamicProperty(mscorlib::System::String name, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameter_types__[1] = Global::GetType(typeid(obj).name());
							__parameter_types__[2] = Global::GetType(typeid(ctx).name());
							__parameters__[0] = (MonoObject*)name;
							__parameters__[1] = (MonoObject*)obj;
							__parameters__[2] = (MonoObject*)ctx;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "UnregisterDynamicProperty", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Boolean Context::UnregisterDynamicProperty(const char *name, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx)
					{
							MonoType *__parameter_types__[3];
							void *__parameters__[3];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameter_types__[1] = Global::GetType(typeid(obj).name());
							__parameter_types__[2] = Global::GetType(typeid(ctx).name());
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							__parameters__[1] = (MonoObject*)obj;
							__parameters__[2] = (MonoObject*)ctx;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "UnregisterDynamicProperty", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
							return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
					}

					mscorlib::System::Runtime::Remoting::Contexts::IContextProperty Context::GetProperty(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "GetProperty", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(__result__);
					}

					mscorlib::System::Runtime::Remoting::Contexts::IContextProperty Context::GetProperty(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "GetProperty", __native_object__, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(__result__);
					}

					void Context::SetProperty(mscorlib::System::Runtime::Remoting::Contexts::IContextProperty prop)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(prop).name());
							__parameters__[0] = (MonoObject*)prop;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "SetProperty", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					void Context::Freeze()
					{
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "Freeze", __native_object__, 0, NULL, NULL, NULL);
					}

					mscorlib::System::String Context::ToString()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
							return mscorlib::System::String(__result__);
					}

					void Context::DoCallBack(mscorlib::Callback<void  ()> deleg)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(deleg).name());
							__parameters__[0] = &deleg;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "DoCallBack", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::LocalDataStoreSlot Context::AllocateDataSlot()
					{
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "AllocateDataSlot", NullMonoObject, 0, NULL, NULL, NULL);
							return mscorlib::System::LocalDataStoreSlot(__result__);
					}

					mscorlib::System::LocalDataStoreSlot Context::AllocateNamedDataSlot(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "AllocateNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::LocalDataStoreSlot(__result__);
					}

					mscorlib::System::LocalDataStoreSlot Context::AllocateNamedDataSlot(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "AllocateNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::LocalDataStoreSlot(__result__);
					}

					void Context::FreeNamedDataSlot(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "FreeNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					void Context::FreeNamedDataSlot(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "FreeNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					}

					mscorlib::System::Object Context::GetData(mscorlib::System::LocalDataStoreSlot slot)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(slot).name());
							__parameters__[0] = (MonoObject*)slot;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "GetData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::Object(__result__);
					}

					mscorlib::System::LocalDataStoreSlot Context::GetNamedDataSlot(mscorlib::System::String name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType(typeid(name).name());
							__parameters__[0] = (MonoObject*)name;
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "GetNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::LocalDataStoreSlot(__result__);
					}

					mscorlib::System::LocalDataStoreSlot Context::GetNamedDataSlot(const char *name)
					{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
							__parameters__[0] = mono_string_new(Global::GetDomain(), name);
							MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "GetNamedDataSlot", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
							return mscorlib::System::LocalDataStoreSlot(__result__);
					}

					void Context::SetData(mscorlib::System::LocalDataStoreSlot slot, mscorlib::System::Object data)
					{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType(typeid(slot).name());
							__parameter_types__[1] = Global::GetType(typeid(data).name());
							__parameters__[0] = (MonoObject*)slot;
							__parameters__[1] = (MonoObject*)data;
							Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "SetData", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					}

					//Get Set Properties Methods
					//	Get:ContextID
					mscorlib::System::Int32  Context::get_ContextID() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "get_ContextID", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
					}


					//	Get:ContextProperties
					std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>  Context::get_ContextProperties() const
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "get_ContextProperties", __native_object__, 0, NULL, NULL, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Runtime::Remoting::Contexts::IContextProperty (__array_item__));
						}
						return __array_result__;
					}


					//Get Set Static Properties Methods
					//	Get:DefaultContext
					mscorlib::System::Runtime::Remoting::Contexts::Context  Context::get_DefaultContext()
					{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Remoting.Contexts", "Context", 0, NULL, "get_DefaultContext", NullMonoObject, 0, NULL, NULL, NULL);
						return mscorlib::System::Runtime::Remoting::Contexts::Context(__result__);
					}

					void Context::set_DefaultContext(mscorlib::System::Runtime::Remoting::Contexts::Context  value)
					{
						throw;
					}




				}
			}
		}
	}
}
