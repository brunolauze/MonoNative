#include <mscorlib/System/Deployment/Internal/mscorlib_System_Deployment_Internal_InternalActivationContextHelper.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_Byte.h>



namespace mscorlib
{
	namespace System
	{
		namespace Deployment
		{
			namespace Internal
			{

				//Public Methods
				mscorlib::System::Object InternalActivationContextHelper::GetActivationContextData(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "GetActivationContextData", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Object InternalActivationContextHelper::GetApplicationComponentManifest(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "GetApplicationComponentManifest", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				std::vector<mscorlib::System::Byte*> InternalActivationContextHelper::GetApplicationManifestBytes(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "GetApplicationManifestBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Object InternalActivationContextHelper::GetDeploymentComponentManifest(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "GetDeploymentComponentManifest", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Object(__result__);
				}

				std::vector<mscorlib::System::Byte*> InternalActivationContextHelper::GetDeploymentManifestBytes(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "GetDeploymentManifestBytes", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						MonoArray *__array_ptr__ = (MonoArray*)__result__;
						uintptr_t __array_length__ = mono_array_length(__array_ptr__);
						std::vector<mscorlib::System::Byte*>  __array_result__(__array_length__);
						for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
						{
							MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
							__array_result__.push_back(new mscorlib::System::Byte (__array_item__));
						}
						return __array_result__;
				}

				mscorlib::System::Boolean InternalActivationContextHelper::IsFirstRun(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "IsFirstRun", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void InternalActivationContextHelper::PrepareForExecution(mscorlib::System::ActivationContext appInfo)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(appInfo).name());
						__parameters__[0] = (MonoObject*)appInfo;
						Global::InvokeMethod("mscorlib", "System.Deployment.Internal", "InternalActivationContextHelper", 0, NULL, "PrepareForExecution", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				}


			}
		}
	}
}
