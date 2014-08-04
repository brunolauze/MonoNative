#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTYACTIVATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTYACTIVATOR_H

#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage.h>

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

					class IContextPropertyActivator
					{
					public:
						IContextPropertyActivator(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator = nativeObject;
						};
					
						~IContextPropertyActivator()
						{
						};
					

						IContextPropertyActivator & operator=(IContextPropertyActivator &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator = value.__mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator = value; return value; };


						virtual void  CollectFromClientContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);
						virtual void  CollectFromServerContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage msg);
						virtual mscorlib::System::Boolean  DeliverClientContextToServerContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);
						virtual mscorlib::System::Boolean  DeliverServerContextToClientContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage msg);
						virtual mscorlib::System::Boolean  IsOKToActivate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContextPropertyActivator;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
