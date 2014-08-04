#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMADAPTER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_ICUSTOMADAPTER_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class ICustomAdapter
				{
				public:
					ICustomAdapter(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_ICustomAdapter = nativeObject;
					};
				
					~ICustomAdapter()
					{
					};
				

					ICustomAdapter & operator=(ICustomAdapter &value) { __mscorlib_System_Runtime_InteropServices_ICustomAdapter = value.__mscorlib_System_Runtime_InteropServices_ICustomAdapter; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_ICustomAdapter; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_ICustomAdapter = value; return value; };


					virtual mscorlib::System::Object  GetUnderlyingObject();


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_ICustomAdapter;
				
				private:
				
				};

			}
		}
	}
}
#endif
