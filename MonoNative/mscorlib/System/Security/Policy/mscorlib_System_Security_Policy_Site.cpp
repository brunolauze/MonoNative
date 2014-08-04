#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Site.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				//Public Methods
				mscorlib::System::Security::Policy::Site Site::CreateFromUrl(mscorlib::System::String url)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(url).name());
						__parameters__[0] = (MonoObject*)url;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "CreateFromUrl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::Site(__result__);
				}

				mscorlib::System::Object Site::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Security::IPermission Site::CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "CreateIdentityPermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean Site::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Site::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::String Site::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  Site::get_Name()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Site", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}



			}
		}
	}
}
