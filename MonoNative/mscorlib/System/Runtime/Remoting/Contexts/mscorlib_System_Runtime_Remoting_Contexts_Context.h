#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_CONTEXT_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextProperty.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class ContextBoundObject;
		class LocalDataStoreSlot;
		

	}
}
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

					class Context
						: public mscorlib::System::Object
					{
					public:
						Context()
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Contexts.Context"))
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Contexts", "Context");
						};
					
						Context(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						Context(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~Context()
						{
						};
					

						Context & operator=(Context &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						static mscorlib::System::Boolean  RegisterDynamicProperty(mscorlib::System::Runtime::Remoting::Contexts::IDynamicProperty prop, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx);
						static mscorlib::System::Boolean  UnregisterDynamicProperty(mscorlib::System::String name, mscorlib::System::ContextBoundObject obj, mscorlib::System::Runtime::Remoting::Contexts::Context ctx);
						virtual mscorlib::System::Runtime::Remoting::Contexts::IContextProperty  GetProperty(mscorlib::System::String name);
						virtual void  SetProperty(mscorlib::System::Runtime::Remoting::Contexts::IContextProperty prop);
						virtual void  Freeze();
						virtual mscorlib::System::String  ToString() override;
						void  DoCallBack(mscorlib::Callback<void  ()> deleg);
						static mscorlib::System::LocalDataStoreSlot  AllocateDataSlot();
						static mscorlib::System::LocalDataStoreSlot  AllocateNamedDataSlot(mscorlib::System::String name);
						static void  FreeNamedDataSlot(mscorlib::System::String name);
						static mscorlib::System::Object  GetData(mscorlib::System::LocalDataStoreSlot slot);
						static mscorlib::System::LocalDataStoreSlot  GetNamedDataSlot(mscorlib::System::String name);
						static void  SetData(mscorlib::System::LocalDataStoreSlot slot, mscorlib::System::Object data);
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_ContextID)) mscorlib::System::Int32  ContextID;
						__declspec(property(get=get_ContextProperties)) std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>  ContextProperties;

						//Public Static Properties
						static Property<mscorlib::System::Runtime::Remoting::Contexts::Context , mscorlib::System::Runtime::Remoting::Contexts::Context> DefaultContext;

						//Get Set Properties Methods
						//	Get:ContextID
						mscorlib::System::Int32  get_ContextID() const;

						//	Get:ContextProperties
						std::vector<mscorlib::System::Runtime::Remoting::Contexts::IContextProperty*>  get_ContextProperties() const;

						//Get Set Static Properties Methods
						//	Get:DefaultContext
						static mscorlib::System::Runtime::Remoting::Contexts::Context  get_DefaultContext();
						static void set_DefaultContext(mscorlib::System::Runtime::Remoting::Contexts::Context  value);


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
