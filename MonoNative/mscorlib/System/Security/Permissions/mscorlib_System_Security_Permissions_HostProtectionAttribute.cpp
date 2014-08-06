#include <mscorlib/System/Security/Permissions/mscorlib_System_Security_Permissions_HostProtectionAttribute.h>
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
				mscorlib::System::Security::IPermission HostProtectionAttribute::CreatePermission()
				{
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "CreatePermission", __native_object__, 0, NULL, NULL, NULL);
						return mscorlib::System::Security::IPermission(__result__);
				}

				//Get Set Properties Methods
				//	Get/Set:ExternalProcessMgmt
				mscorlib::System::Boolean  HostProtectionAttribute::get_ExternalProcessMgmt() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_ExternalProcessMgmt", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_ExternalProcessMgmt(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_ExternalProcessMgmt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:ExternalThreading
				mscorlib::System::Boolean  HostProtectionAttribute::get_ExternalThreading() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_ExternalThreading", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_ExternalThreading(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_ExternalThreading", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:MayLeakOnAbort
				mscorlib::System::Boolean  HostProtectionAttribute::get_MayLeakOnAbort() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_MayLeakOnAbort", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_MayLeakOnAbort(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_MayLeakOnAbort", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SecurityInfrastructure
				mscorlib::System::Boolean  HostProtectionAttribute::get_SecurityInfrastructure() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_SecurityInfrastructure", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_SecurityInfrastructure(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_SecurityInfrastructure", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SelfAffectingProcessMgmt
				mscorlib::System::Boolean  HostProtectionAttribute::get_SelfAffectingProcessMgmt() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_SelfAffectingProcessMgmt", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_SelfAffectingProcessMgmt(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_SelfAffectingProcessMgmt", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SelfAffectingThreading
				mscorlib::System::Boolean  HostProtectionAttribute::get_SelfAffectingThreading() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_SelfAffectingThreading", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_SelfAffectingThreading(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_SelfAffectingThreading", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:SharedState
				mscorlib::System::Boolean  HostProtectionAttribute::get_SharedState() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_SharedState", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_SharedState(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_SharedState", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Synchronization
				mscorlib::System::Boolean  HostProtectionAttribute::get_Synchronization() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_Synchronization", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_Synchronization(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_Synchronization", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:UI
				mscorlib::System::Boolean  HostProtectionAttribute::get_UI() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_UI", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_UI(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_UI", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Resources
				mscorlib::System::Security::Permissions::HostProtectionResource::__ENUM__  HostProtectionAttribute::get_Resources() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "get_Resources", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::HostProtectionResource::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void HostProtectionAttribute::set_Resources(mscorlib::System::Security::Permissions::HostProtectionResource::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "HostProtectionAttribute", 0, NULL, "set_Resources", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Unrestricted
				mscorlib::System::Boolean  HostProtectionAttribute::get_Unrestricted() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Unrestricted", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}

				void HostProtectionAttribute::set_Unrestricted(mscorlib::System::Boolean  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = reinterpret_cast<void*>(value);
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Unrestricted", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:Action
				mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  HostProtectionAttribute::get_Action() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "get_Action", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Security::Permissions::SecurityAction::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}

				void HostProtectionAttribute::set_Action(mscorlib::System::Security::Permissions::SecurityAction::__ENUM__  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					mscorlib::System::Int32 __param_value__ = value;
					__parameters__[0] = &__param_value__;
					Global::InvokeMethod("mscorlib", "System.Security.Permissions", "SecurityAttribute", 0, NULL, "set_Action", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  HostProtectionAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
