#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_SYNCHRONIZATIONATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_SYNCHRONIZATIONATTRIBUTE_H

#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContributeServerContextSink.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Attribute.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContributeClientContextSink.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextProperty.h>
#include <mscorlib/System/Runtime/Remoting/Contexts/mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessageSink.h>
#include <mscorlib/System/mscorlib_System_Object.h>

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

					class Context;
					

				}
			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		

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

					class SynchronizationAttribute
						: public mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink
						, public virtual mscorlib::System::Runtime::InteropServices::_Attribute
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextProperty
						, public virtual mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute
					{
					public:
						SynchronizationAttribute()
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Contexts.SynchronizationAttribute"))
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute");
						};
					
						SynchronizationAttribute(mscorlib::System::Boolean reEntrant)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Contexts.SynchronizationAttribute"))
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Boolean");
							__parameters__[0] = reinterpret_cast<void*>(reEntrant);
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 1, __parameter_types__, __parameters__);
						};
					
						SynchronizationAttribute(mscorlib::System::Int32 flag)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Contexts.SynchronizationAttribute"))
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
							__parameters__[0] = &flag;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 1, __parameter_types__, __parameters__);
						};
					
						SynchronizationAttribute(mscorlib::System::Int32 flag, mscorlib::System::Boolean reEntrant)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Contexts.SynchronizationAttribute"))
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
							MonoType *__parameter_types__[2];
							void *__parameters__[2];
							__parameter_types__[0] = Global::GetType("mscorlib", "System", "Int32");
							__parameter_types__[1] = Global::GetType("mscorlib", "System", "Boolean");
							__parameters__[0] = &flag;
							__parameters__[1] = reinterpret_cast<void*>(reEntrant);
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Contexts", "SynchronizationAttribute", 2, __parameter_types__, __parameters__);
						};
					
						SynchronizationAttribute(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(nativeTypeInfo)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink(NULL)
						, mscorlib::System::Runtime::InteropServices::_Attribute(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(NULL)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(NULL)
						{
						};
					
						SynchronizationAttribute(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Contexts::ContextAttribute(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeServerContextSink(nativeObject)
						, mscorlib::System::Runtime::InteropServices::_Attribute(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContributeClientContextSink(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextProperty(nativeObject)
						, mscorlib::System::Runtime::Remoting::Contexts::IContextAttribute(nativeObject)
						{
						};
					
						~SynchronizationAttribute()
						{
						};
					

						SynchronizationAttribute & operator=(SynchronizationAttribute &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual void  GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage ctorMsg) override;
						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetClientContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink);
						virtual mscorlib::System::Runtime::Remoting::Messaging::IMessageSink  GetServerContextSink(mscorlib::System::Runtime::Remoting::Messaging::IMessageSink nextSink);
						virtual mscorlib::System::Boolean  IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg) override;
						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


						//Public Properties
						__declspec(property(get=get_IsReEntrant)) mscorlib::System::Boolean  IsReEntrant;
						__declspec(property(get=get_Locked, put=set_Locked)) mscorlib::System::Boolean  Locked;
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;
						__declspec(property(get=get_TypeId)) mscorlib::System::Object  TypeId;

						//Public Static Fields
						static Property<mscorlib::System::Int32> NOT_SUPPORTED;
						static Property<mscorlib::System::Int32> SUPPORTED;
						static Property<mscorlib::System::Int32> REQUIRED;
						static Property<mscorlib::System::Int32> REQUIRES_NEW;

						//Get Set Properties Methods
						//	Get:IsReEntrant
						mscorlib::System::Boolean  get_IsReEntrant();

						//	Get/Set:Locked
						mscorlib::System::Boolean  get_Locked();
						void set_Locked(mscorlib::System::Boolean  value);

						//	Get:Name
						mscorlib::System::String  get_Name();

						//	Get:TypeId
						mscorlib::System::Object  get_TypeId();

						//	Get/Set:NOT_SUPPORTED
						static mscorlib::System::Int32  get_NOT_SUPPORTED();
						static void set_NOT_SUPPORTED(mscorlib::System::Int32  value);

						//	Get/Set:SUPPORTED
						static mscorlib::System::Int32  get_SUPPORTED();
						static void set_SUPPORTED(mscorlib::System::Int32  value);

						//	Get/Set:REQUIRED
						static mscorlib::System::Int32  get_REQUIRED();
						static void set_REQUIRED(mscorlib::System::Int32  value);

						//	Get/Set:REQUIRES_NEW
						static mscorlib::System::Int32  get_REQUIRES_NEW();
						static void set_REQUIRES_NEW(mscorlib::System::Int32  value);

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
