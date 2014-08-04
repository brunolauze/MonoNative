#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class IDeserializationCallback
				{
				public:
					IDeserializationCallback(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_IDeserializationCallback = nativeObject;
					};
				
					~IDeserializationCallback()
					{
					};
				

					IDeserializationCallback & operator=(IDeserializationCallback &value) { __mscorlib_System_Runtime_Serialization_IDeserializationCallback = value.__mscorlib_System_Runtime_Serialization_IDeserializationCallback; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_IDeserializationCallback; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_IDeserializationCallback = value; return value; };


					virtual void  OnDeserialization(mscorlib::System::Object sender);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_IDeserializationCallback;
				
				private:
				
				};

			}
		}
	}
}
#endif
