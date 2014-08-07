#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ExtensibleClassFactory.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				void ExtensibleClassFactory::RegisterObjectCreationCallback(mscorlib::Callback<mscorlib::System::IntPtr  (mscorlib::System::IntPtr )> callback)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(callback).name());
						__parameters__[0] = &callback;
						Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ExtensibleClassFactory", 0, NULL, "RegisterObjectCreationCallback", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
