#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_SecurityPermissionAttribute.h>
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
				mscorlib::System::Security::IPermission SecurityPermissionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:Assertion
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_Assertion() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_Assertion", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_Assertion(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_Assertion", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:BindingRedirects
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_BindingRedirects() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_BindingRedirects", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_BindingRedirects(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_BindingRedirects", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ControlAppDomain
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_ControlAppDomain() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_ControlAppDomain", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_ControlAppDomain(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_ControlAppDomain", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ControlDomainPolicy
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_ControlDomainPolicy() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_ControlDomainPolicy", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_ControlDomainPolicy(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_ControlDomainPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ControlEvidence
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_ControlEvidence() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_ControlEvidence", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_ControlEvidence(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_ControlEvidence", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ControlPolicy
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_ControlPolicy() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_ControlPolicy", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_ControlPolicy(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_ControlPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ControlPrincipal
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_ControlPrincipal() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_ControlPrincipal", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_ControlPrincipal(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_ControlPrincipal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ControlThread
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_ControlThread() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_ControlThread", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_ControlThread(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_ControlThread", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Execution
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_Execution() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_Execution", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_Execution(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_Execution", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Infrastructure
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_Infrastructure() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_Infrastructure", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_Infrastructure(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_Infrastructure", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:RemotingConfiguration
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_RemotingConfiguration() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_RemotingConfiguration", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_RemotingConfiguration(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_RemotingConfiguration", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SerializationFormatter
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_SerializationFormatter() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_SerializationFormatter", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_SerializationFormatter(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_SerializationFormatter", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SkipVerification
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_SkipVerification() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_SkipVerification", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_SkipVerification(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_SkipVerification", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:UnmanagedCode
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_UnmanagedCode() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_UnmanagedCode", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_UnmanagedCode(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_UnmanagedCode", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Flags
				mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  SecurityPermissionAttribute::get_Flags() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_Flags(mscorlib::System::Security::Permissions::SecurityPermissionFlag::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityPermissionAttribute", 0, NULL, "set_Flags", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  SecurityPermissionAttribute::get_Unrestricted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  SecurityPermissionAttribute::get_Action() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__*)mono_object_unbox(__result__);
				}

				void SecurityPermissionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  SecurityPermissionAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
