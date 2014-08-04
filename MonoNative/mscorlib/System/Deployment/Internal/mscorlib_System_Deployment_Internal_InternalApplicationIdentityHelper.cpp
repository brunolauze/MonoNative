#include <mscorlib/System/Deployment/Internal/mscorlib_System_Deployment_Internal_InternalApplicationIdentityHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>



namespace mscorlib
{
	namespace System
	{
		namespace Deployment
		{
			namespace Internal
			{

				//Public Methods
				mscorlib::System::Object InternalApplicationIdentityHelper::GetInternalAppId(mscorlib::System::ApplicationIdentity id)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(id).name());
						__parameters__[0] = (MonoObject*)id;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalApplicationIdentityHelper", 0, NULL, "GetInternalAppId", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}


			}
		}
	}
}
