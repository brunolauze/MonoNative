#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_ReflectionPermissionAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Permissions
			{

				//Public Methods
				mscorlib::System::Security::IPermission ReflectionPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Flags
				mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  ReflectionPermissionAttribute::get_Flags()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_Flags(mscorlib::System::Security::Permissions::ReflectionPermissionFlag::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "set_Flags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MemberAccess
				mscorlib::System::Boolean  ReflectionPermissionAttribute::get_MemberAccess()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "get_MemberAccess", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_MemberAccess(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "set_MemberAccess", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ReflectionEmit
				mscorlib::System::Boolean  ReflectionPermissionAttribute::get_ReflectionEmit()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "get_ReflectionEmit", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_ReflectionEmit(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "set_ReflectionEmit", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:RestrictedMemberAccess
				mscorlib::System::Boolean  ReflectionPermissionAttribute::get_RestrictedMemberAccess()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "get_RestrictedMemberAccess", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_RestrictedMemberAccess(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "set_RestrictedMemberAccess", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:TypeInformation
				mscorlib::System::Boolean  ReflectionPermissionAttribute::get_TypeInformation()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "get_TypeInformation", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_TypeInformation(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "ReflectionPermissionAttribute", 0, NULL, "set_TypeInformation", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  ReflectionPermissionAttribute::get_Unrestricted()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  ReflectionPermissionAttribute::get_Action()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__*)mono_object_unbox(__result__);
				}

				void ReflectionPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  ReflectionPermissionAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
