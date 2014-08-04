#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_INTERNALMESSAGEWRAPPER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_MESSAGING_INTERNALMESSAGEWRAPPER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/Remoting/Messaging/mscorlib_System_Runtime_Remoting_Messaging_IMessage.h>

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
				namespace Messaging
				{

					class InternalMessageWrapper
						: public mscorlib::System::Object
					{
					public:
						InternalMessageWrapper(mscorlib::System::Runtime::Remoting::Messaging::IMessage msg)
						: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.Remoting.Messaging.InternalMessageWrapper"))
						{
							MonoType *__parameter_types__[1];
							void *__parameters__[1];
							__parameter_types__[0] = Global::GetType("mscorlib", "System.Runtime.Remoting.Messaging", "IMessage");
							__parameters__[0] = (MonoObject*)msg;
							__native_object__ = Global::New("mscorlib", "System.Runtime.Remoting.Messaging", "InternalMessageWrapper", 1, __parameter_types__, __parameters__);
						};
					
						InternalMessageWrapper(mscorlib::NativeTypeInfo *nativeTypeInfo)
						: mscorlib::System::Object(nativeTypeInfo)
						{
						};
					
						InternalMessageWrapper(MonoObject *nativeObject)
						: mscorlib::System::Object(nativeObject)
						{
						};
					
						~InternalMessageWrapper()
						{
						};
					

						InternalMessageWrapper & operator=(InternalMessageWrapper &value) { __native_object__ = value.GetNativeObject(); return value; };
						operator MonoObject*() { return __native_object__; };
						MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


						virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


					
					protected:
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
