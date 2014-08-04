#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_H

#include <Global.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class SerializationInfo;
				class StreamingContext;
				

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
			namespace Serialization
			{

				class ISerializable
				{
				public:
					ISerializable(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_ISerializable = nativeObject;
					};
				
					~ISerializable()
					{
					};
				

					ISerializable & operator=(ISerializable &value) { __mscorlib_System_Runtime_Serialization_ISerializable = value.__mscorlib_System_Runtime_Serialization_ISerializable; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_ISerializable; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_ISerializable = value; return value; };


					virtual void  GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo info, mscorlib::System::Runtime::Serialization::StreamingContext context);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_ISerializable;
				
				private:
				
				};

			}
		}
	}
}
#endif
