#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISAFESERIALIZATIONDATA_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_ISAFESERIALIZATIONDATA_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				class ISafeSerializationData
				{
				public:
					ISafeSerializationData(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_ISafeSerializationData = nativeObject;
					};
				
					~ISafeSerializationData()
					{
					};
				

					ISafeSerializationData & operator=(ISafeSerializationData &value) { __mscorlib_System_Runtime_Serialization_ISafeSerializationData = value.__mscorlib_System_Runtime_Serialization_ISafeSerializationData; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_ISafeSerializationData; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_ISafeSerializationData = value; return value; };


					virtual void  CompleteDeserialization(mscorlib::System::Object deserialized);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_ISafeSerializationData;
				
				private:
				
				};

			}
		}
	}
}
#endif
