#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_ACTIVATION_ICONSTRUCTIONCALLMESSAGE_H

#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMethodMessage.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IList.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
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
				namespace Activation
				{

					class IActivator;
					

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

					class IConstructionCallMessage
						: public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage
						, public virtual mscorlib::System::Runtime::Remoting::Messaging::IMessage
					{
					public:
						IConstructionCallMessage(MonoObject *nativeObject)
						: mscorlib::System::Runtime::Remoting::Messaging::IMethodCallMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage(nativeObject)
						, mscorlib::System::Runtime::Remoting::Messaging::IMessage(nativeObject)
						{
						};
					
						~IConstructionCallMessage()
						{
						};
					

						__declspec(property(get=get___mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage, put=set___mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage)) MonoObject *__mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage;
						MonoObject* get___mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage() const
						{
							return IConstructionCallMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage;
						}
						void set___mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage(MonoObject *value)
						{
							IConstructionCallMessage::__mscorlib_System_Runtime_Remoting_Messaging_IMethodCallMessage = value;
						}
						IConstructionCallMessage & operator=(IConstructionCallMessage &value) { __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage = value.__mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_Activation_IConstructionCallMessage = value; return value; };




						//Public Properties
						__declspec(property(get=get_ActivationType)) mscorlib::System::Type  ActivationType;
						__declspec(property(get=get_ActivationTypeName)) mscorlib::System::String  ActivationTypeName;
						__declspec(property(get=get_Activator, put=set_Activator)) mscorlib::System::Runtime::Remoting::Activation::IActivator  Activator;
						__declspec(property(get=get_CallSiteActivationAttributes)) std::vector<mscorlib::System::Object*>  CallSiteActivationAttributes;
						__declspec(property(get=get_ContextProperties)) mscorlib::System::Collections::IList  ContextProperties;

						//Get Set Properties Methods
						//	Get:ActivationType
						mscorlib::System::Type  get_ActivationType() const;

						//	Get:ActivationTypeName
						mscorlib::System::String  get_ActivationTypeName() const;

						//	Get/Set:Activator
						mscorlib::System::Runtime::Remoting::Activation::IActivator  get_Activator() const;
						void set_Activator(mscorlib::System::Runtime::Remoting::Activation::IActivator  value);

						//	Get:CallSiteActivationAttributes
						std::vector<mscorlib::System::Object*>  get_CallSiteActivationAttributes() const;

						//	Get:ContextProperties
						mscorlib::System::Collections::IList  get_ContextProperties() const;

					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
