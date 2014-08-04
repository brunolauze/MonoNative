#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_IACTIVATIONFACTORY_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_WINDOWSRUNTIME_IACTIVATIONFACTORY_H

#include <mscorlib/System/mscorlib_System_Object.h>

namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{
				namespace WindowsRuntime
				{

					class IActivationFactory
					{
					public:
						IActivationFactory(MonoObject *nativeObject)
						{
							__mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory = nativeObject;
						};
					
						~IActivationFactory()
						{
						};
					

						IActivationFactory & operator=(IActivationFactory &value) { __mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory = value.__mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory; return value; };
						operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory; };
						MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory = value; return value; };


						virtual mscorlib::System::Object  ActivateInstance();


					
					protected:
						MonoObject *__mscorlib_System_Runtime_InteropServices_WindowsRuntime_IActivationFactory;
					
					private:
					
					};

				}
			}
		}
	}
}
#endif
