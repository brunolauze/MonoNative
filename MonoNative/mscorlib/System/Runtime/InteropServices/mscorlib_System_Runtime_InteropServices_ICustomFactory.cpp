#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ICustomFactory.h>
#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				mscorlib::System::MarshalByRefObject ICustomFactory::CreateInstance(mscorlib::System::Type serverType)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(serverType).name());
						__parameters__[0] = (MonoObject*)serverType;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ICustomFactory", 0, NULL, "CreateInstance", __mscorlib_System_Runtime_InteropServices_ICustomFactory, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::MarshalByRefObject(__result__);
				}


			}
		}
	}
}
