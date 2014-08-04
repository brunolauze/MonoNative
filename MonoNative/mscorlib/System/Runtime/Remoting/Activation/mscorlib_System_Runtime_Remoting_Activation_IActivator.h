#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_IACTIVATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_IACTIVATOR_H

#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_ActivatorLevel.h>
#include <mscorlib/System/Runtime/Remoting/Activation/mscorlib_System_Runtime_Remoting_Activation_IConstructionReturnMessage.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{
				namespace Activation
				{

					class IConstructionCallMessage;
					

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
				namespace Activation
				{

					class IActivator
					{
					public:
						IActivator(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_Remoting_Activation_IActivator = nativeObject;
						};
					
						~IActivator()
						{
						};
					

						IActivator & operator=(IActivator &value) { __mscorlib_System_Runtime_Remoting_Activation_IActivator = value.__mscorlib_System_Runtime_Remoting_Activation_IActivator; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Activation_IActivator; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Activation_IActivator = value; return value; };


						virtual mscorlib::System::Runtime::Remoting::Activation::IConstructionReturnMessage  Activate(mscorlib::System::Runtime::Remoting::Activation::IConstructionCallMessage msg);


						//Public Properties
						__declspec(property(get=get_Level)) mscorlib::System::Runtime::Remoting::Activation::ActivatorLevel::__ENUM__  Level;
						__declspec(property(get=get_NextActivator, put=set_NextActivator)) mscorlib::System::Runtime::Remoting::Activation::IActivator  NextActivator;

						//Get Set Properties Methods
						//	Get:Level
						mscorlib::System::Runtime::Remoting::Activation::ActivatorLevel::__ENUM__  get_Level();

						//	Get/Set:NextActivator
						mscorlib::System::Runtime::Remoting::Activation::IActivator  get_NextActivator();
						void set_NextActivator(mscorlib::System::Runtime::Remoting::Activation::IActivator  value);

					
					protected:
						MonoObject *__mscorlib_System_Runtime_Remoting_Activation_IActivator;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
