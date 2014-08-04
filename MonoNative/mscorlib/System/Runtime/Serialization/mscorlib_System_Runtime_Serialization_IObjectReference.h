#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_SERIALIZATION_IOBJECTREFERENCE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

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

				class IObjectReference
				{
				public:
					IObjectReference(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Serialization_IObjectReference = nativeObject;
					};
				
					~IObjectReference()
					{
					};
				

					IObjectReference & operator=(IObjectReference &value) { __mscorlib_System_Runtime_Serialization_IObjectReference = value.__mscorlib_System_Runtime_Serialization_IObjectReference; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Serialization_IObjectReference; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Serialization_IObjectReference = value; return value; };


					virtual mscorlib::System::Object  GetRealObject(mscorlib::System::Runtime::Serialization::StreamingContext context);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Serialization_IObjectReference;
				
				private:
				
				};

			}
		}
	}
}
#endif
