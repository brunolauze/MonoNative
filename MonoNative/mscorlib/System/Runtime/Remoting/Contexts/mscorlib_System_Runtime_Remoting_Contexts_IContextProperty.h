#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_ICONTEXTPROPERTY_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		

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

					class IContextProperty
					{
					public:
						IContextProperty(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IContextProperty = nativeObject;
						};
					
						~IContextProperty()
						{
						};
					

						IContextProperty & operator=(IContextProperty &value) { __mscorlib_System_Runtime_Remoting_Contexts_IContextProperty = value.__mscorlib_System_Runtime_Remoting_Contexts_IContextProperty; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IContextProperty; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IContextProperty = value; return value; };


						virtual void  Freeze(mscorlib::System::Runtime::Remoting::Contexts::Context newContext);
						virtual mscorlib::System::Boolean  IsNewContextOK(mscorlib::System::Runtime::Remoting::Contexts::Context newCtx);


						//Public Properties
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;

						//Get Set Properties Methods
						//	Get:Name
						mscorlib::System::String  get_Name();

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IContextProperty;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
