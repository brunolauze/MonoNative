#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTATTRIBUTE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTATTRIBUTE_H

#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage.h>

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
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Contexts
				{

					class IContextAttribute
					{
					public:
						IContextAttribute(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute = nativeObject;
						};
					
						~IContextAttribute()
						{
						};
					

						IContextAttribute & operator=(IContextAttribute &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute = value.__mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute = value; return value; };


						virtual void  GetPropertiesForNewContext(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);
						virtual mscorlib::System::Boolean  IsContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context ctx, mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);


					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContextAttribute;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
