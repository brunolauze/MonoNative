#include <mscorlib/System/mscorlib_System_IServiceProvider.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Object IServiceProvider::GetService(mscorlib::System::Type serviceType)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(serviceType).name());
				__parameters__[0] = (MonoObject*)serviceType;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "IServiceProvider", 0, NULL, "GetService", __mscorlib_System_IServiceProvider, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}


	}
}
