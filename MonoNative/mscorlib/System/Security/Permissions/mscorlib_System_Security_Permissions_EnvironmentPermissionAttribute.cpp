#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_EnvironmentPermissionAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Security::IPermission EnvironmentPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:All
				mscorlib::System::String  EnvironmentPermissionAttribute::get_All()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "get_All", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void EnvironmentPermissionAttribute::set_All(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "set_All", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Read
				mscorlib::System::String  EnvironmentPermissionAttribute::get_Read()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "get_Read", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void EnvironmentPermissionAttribute::set_Read(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "set_Read", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Write
				mscorlib::System::String  EnvironmentPermissionAttribute::get_Write()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "get_Write", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void EnvironmentPermissionAttribute::set_Write(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "EnvironmentPermissionAttribute", 0, NULL, "set_Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  EnvironmentPermissionAttribute::get_Unrestricted()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void EnvironmentPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  EnvironmentPermissionAttribute::get_Action()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__*)mono_object_unbox(__result__);
				}

				void EnvironmentPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  EnvironmentPermissionAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
