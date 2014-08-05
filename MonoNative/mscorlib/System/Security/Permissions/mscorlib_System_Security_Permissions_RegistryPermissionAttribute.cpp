#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_RegistryPermissionAttribute.h>
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
				mscorlib::System::Security::IPermission RegistryPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:All
				mscorlib::System::String  RegistryPermissionAttribute::get_All() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_All", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_All(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_All", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Create
				mscorlib::System::String  RegistryPermissionAttribute::get_Create() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_Create", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_Create(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_Create", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Read
				mscorlib::System::String  RegistryPermissionAttribute::get_Read() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_Read", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_Read(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_Read", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Write
				mscorlib::System::String  RegistryPermissionAttribute::get_Write() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_Write", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_Write(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_Write", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ChangeAccessControl
				mscorlib::System::String  RegistryPermissionAttribute::get_ChangeAccessControl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_ChangeAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_ChangeAccessControl(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_ChangeAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ViewAccessControl
				mscorlib::System::String  RegistryPermissionAttribute::get_ViewAccessControl() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_ViewAccessControl", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_ViewAccessControl(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_ViewAccessControl", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ViewAndModify
				mscorlib::System::String  RegistryPermissionAttribute::get_ViewAndModify() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "get_ViewAndModify", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void RegistryPermissionAttribute::set_ViewAndModify(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = (MonoObject*)value;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "RegistryPermissionAttribute", 0, NULL, "set_ViewAndModify", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  RegistryPermissionAttribute::get_Unrestricted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void RegistryPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  RegistryPermissionAttribute::get_Action() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__*)mono_object_unbox(__result__);
				}

				void RegistryPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  RegistryPermissionAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
