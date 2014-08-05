#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_StrongName.h>
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
				mscorlib::System::Object StrongName::Copy()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "Copy", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Object(__result__);
				}

				mscorlib::System::Security::IPermission StrongName::CreateIdentityPermission(mscorlib::System::Security::Policy::Evidence evidence)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(evidence).name());
						__parameters__[0] = (MonoObject*)evidence;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "CreateIdentityPermission", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				mscorlib::System::Boolean StrongName::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 StrongName::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::String StrongName::ToString()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::String(__result__);
				}

				//Get Set Properties Methods
				//	Get:Name
				mscorlib::System::String  StrongName::get_Name() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:PublicKey
				mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob  StrongName::get_PublicKey() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "get_PublicKey", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Security::Permissions::StrongNamePublicKeyBlob(__result__);
				}


				//	Get:Version
				mscorlib::System::Version  StrongName::get_Version() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "StrongName", 0, NULL, "get_Version", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Version(__result__);
				}



			}
		}
	}
}
