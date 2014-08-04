#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_IOBJECTHANDLE_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_REMOTING_IOBJECTHANDLE_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Remoting
			{

				class IObjectHandle
				{
				public:
					IObjectHandle(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_Remoting_IObjectHandle = nativeObject;
					};
				
					~IObjectHandle()
					{
					};
				

					IObjectHandle & operator=(IObjectHandle &value) { __mscorlib_System_Runtime_Remoting_IObjectHandle = value.__mscorlib_System_Runtime_Remoting_IObjectHandle; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_Remoting_IObjectHandle; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_Remoting_IObjectHandle = value; return value; };


					virtual mscorlib::System::Object  Unwrap();


				
				protected:
					MonoObject *__mscorlib_System_Runtime_Remoting_IObjectHandle;
				
				private:
				
				};

			}
		}
	}
}
#endif
