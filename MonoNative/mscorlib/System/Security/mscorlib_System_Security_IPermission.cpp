#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			mscorlib::System::Security::IPermission IPermission::Copy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "IPermission", 0, NULL, "Copy", __mscorlib_System_Security_IPermission, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			void IPermission::Demand()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "IPermission", 0, NULL, "Demand", __mscorlib_System_Security_IPermission, 0, NULL, NULL, NULL);
			}

			mscorlib::System::Security::IPermission IPermission::Intersect(mscorlib::System::Security::IPermission target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "IPermission", 0, NULL, "Intersect", __mscorlib_System_Security_IPermission, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}

			mscorlib::System::Boolean IPermission::IsSubsetOf(mscorlib::System::Security::IPermission target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "IPermission", 0, NULL, "IsSubsetOf", __mscorlib_System_Security_IPermission, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Security::IPermission IPermission::Union(mscorlib::System::Security::IPermission target)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(target).name());
					__parameters__[0] = (MonoObject*)target;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "IPermission", 0, NULL, "Union", __mscorlib_System_Security_IPermission, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::IPermission(__result__);
			}


		}
	}
}
