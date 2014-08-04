#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_CodeConnectAccess.h>
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
				mscorlib::System::Boolean CodeConnectAccess::Equals(mscorlib::System::Object o)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(o).name());
						__parameters__[0] = (MonoObject*)o;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "Equals", __native_object__, 1, __parameter_types__, __parameters__, NULL);
						return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				mscorlib::System::Int32 CodeConnectAccess::GetHashCode()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "GetHashCode", __native_object__, 0, NULL, NULL, NULL);
						return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				mscorlib::System::Security::Policy::CodeConnectAccess CodeConnectAccess::CreateAnySchemeAccess(mscorlib::System::Int32 allowPort)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(allowPort).name());
						__parameters__[0] = &allowPort;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "CreateAnySchemeAccess", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeConnectAccess(__result__);
				}

				mscorlib::System::Security::Policy::CodeConnectAccess CodeConnectAccess::CreateOriginSchemeAccess(mscorlib::System::Int32 allowPort)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(allowPort).name());
						__parameters__[0] = &allowPort;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "CreateOriginSchemeAccess", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Security::Policy::CodeConnectAccess(__result__);
				}

				//Get Set Properties Methods
				//	Get:Port
				mscorlib::System::Int32  CodeConnectAccess::get_Port()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "get_Port", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:Scheme
				mscorlib::System::String  CodeConnectAccess::get_Scheme()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "get_Scheme", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


					//	Get/Set:AnyScheme
				mscorlib::System::String CodeConnectAccess::get_AnyScheme()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "AnyScheme"));
				}


					//	Get/Set:DefaultPort
				mscorlib::System::Int32 CodeConnectAccess::get_DefaultPort()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "DefaultPort");
				}


					//	Get/Set:OriginPort
				mscorlib::System::Int32 CodeConnectAccess::get_OriginPort()
				{
					return Global::GetFieldInt32Value("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "OriginPort");
				}


					//	Get/Set:OriginScheme
				mscorlib::System::String CodeConnectAccess::get_OriginScheme()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue("mscorlib", "System.Security.Policy", "CodeConnectAccess", 0, NULL, "OriginScheme"));
				}



			}
		}
	}
}
