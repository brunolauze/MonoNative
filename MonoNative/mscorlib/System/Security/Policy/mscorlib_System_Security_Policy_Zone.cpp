#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Zone.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_String.h>
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
				mscorlib::System::Object Zone::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Security::IPermission Zone::CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "CreateIdentityPermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Security::Policy::Zone Zone::CreateFromUrl(mscorlib::System::String url)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(url).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), url);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "CreateFromUrl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::Zone(__result__);
				}

				mscorlib::System::Security::Policy::Zone Zone::CreateFromUrl(const char *url)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(url).name());
						__parameters__[0] = mono_string_new(Global::GetDomain(), url);
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "CreateFromUrl", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::Zone(__result__);
				}

				mscorlib::System::Boolean Zone::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 Zone::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::String Zone::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:SecurityZone
				mscorlib::System::Security::SecurityZone::__ENUM__  Zone::get_SecurityZone() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "Zone", 0, NULL, "get_SecurityZone", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::SecurityZone::__ENUM__>(*(mscorlib::System::Security::SecurityZone::__ENUM__*)mono_object_unbox(__result__));
				}



			}
		}
	}
}
