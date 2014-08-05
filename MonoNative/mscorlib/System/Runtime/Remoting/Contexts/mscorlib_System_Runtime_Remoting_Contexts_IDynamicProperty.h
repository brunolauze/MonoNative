#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICPROPERTY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_CONTEXTS_IDYNAMICPROPERTY_H

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

					class IDynamicProperty
					{
					public:
						IDynamicProperty(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty = nativeObject;
						};
					
						~IDynamicProperty()
						{
						};
					

						IDynamicProperty & operator=(IDynamicProperty &value) { __mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty = value.__mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty = value; return value; };




						//Public Properties
						__declspec(property(get=get_Name)) mscorlib::System::String  Name;

						//Get Set Properties Methods
						//	Get:Name
						mscorlib::System::String  get_Name() const;

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Contexts_IDynamicProperty;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
