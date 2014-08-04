#include <mscorlib/System/Security/mscorlib_System_Security_SecurityManager.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_ArrayList.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>



namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			//Public Methods
			void SecurityManager::GetZoneAndOrigin(mscorlib::System::Collections::ArrayList zone, mscorlib::System::Collections::ArrayList origin)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(zone).name());
					__parameter_types__[1] = Global::GetType(typeid(origin).name());
					__parameters__[0] = (MonoObject*)zone;
					__parameters__[1] = (MonoObject*)origin;
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "GetZoneAndOrigin", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Boolean SecurityManager::IsGranted(mscorlib::System::Security::IPermission perm)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(perm).name());
					__parameters__[0] = (MonoObject*)perm;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "IsGranted", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			mscorlib::System::Security::Policy::PolicyLevel SecurityManager::LoadPolicyLevelFromFile(mscorlib::System::String path, mscorlib::System::Security::PolicyLevelType::__ENUM__ type)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(path).name());
					__parameter_types__[1] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)path;
					__parameters__[1] = reinterpret_cast<void*>(type);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "LoadPolicyLevelFromFile", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::PolicyLevel(__result__);
			}

			mscorlib::System::Security::Policy::PolicyLevel SecurityManager::LoadPolicyLevelFromString(mscorlib::System::String str, mscorlib::System::Security::PolicyLevelType::__ENUM__ type)
			{
					MonoType *__parameter_types__[2];
					void *__parameters__[2];
					__parameter_types__[0] = Global::GetType(typeid(str).name());
					__parameter_types__[1] = Global::GetType(typeid(type).name());
					__parameters__[0] = (MonoObject*)str;
					__parameters__[1] = reinterpret_cast<void*>(type);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "LoadPolicyLevelFromString", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::Policy::PolicyLevel(__result__);
			}

			mscorlib::System::Collections::IEnumerator SecurityManager::PolicyHierarchy()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "PolicyHierarchy", NullMonoObject, 0, NULL, NULL, NULL);
					return mscorlib::System::Collections::IEnumerator(__result__);
			}

			mscorlib::System::Security::PermissionSet SecurityManager::ResolvePolicy(mscorlib::System::Security::Policy::Evidence evidence)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(evidence).name());
					__parameters__[0] = (MonoObject*)evidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "ResolvePolicy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Security::PermissionSet SecurityManager::ResolvePolicy(std::vector<mscorlib::System::Security::Policy::Evidence*> evidences)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(evidences).name()))->eklass);
					__parameters__[0] = Global::FromArray<mscorlib::System::Security::Policy::Evidence*>(evidences, typeid(mscorlib::System::Security::Policy::Evidence).name());
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "ResolvePolicy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Security::PermissionSet SecurityManager::ResolveSystemPolicy(mscorlib::System::Security::Policy::Evidence evidence)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(evidence).name());
					__parameters__[0] = (MonoObject*)evidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "ResolveSystemPolicy", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Security::PermissionSet SecurityManager::ResolvePolicy(mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet reqdPset, mscorlib::System::Security::PermissionSet optPset, mscorlib::System::Security::PermissionSet denyPset, mscorlib::System::Security::PermissionSet denied)
			{
					MonoType *__parameter_types__[5];
					void *__parameters__[5];
					__parameter_types__[0] = Global::GetType(typeid(evidence).name());
					__parameter_types__[1] = Global::GetType(typeid(reqdPset).name());
					__parameter_types__[2] = Global::GetType(typeid(optPset).name());
					__parameter_types__[3] = Global::GetType(typeid(denyPset).name());
					__parameter_types__[4] = Global::GetType(typeid(denied).name());
					__parameters__[0] = (MonoObject*)evidence;
					__parameters__[1] = (MonoObject*)reqdPset;
					__parameters__[2] = (MonoObject*)optPset;
					__parameters__[3] = (MonoObject*)denyPset;
					__parameters__[4] = (MonoObject*)denied;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "ResolvePolicy", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Collections::IEnumerator SecurityManager::ResolvePolicyGroups(mscorlib::System::Security::Policy::Evidence evidence)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(evidence).name());
					__parameters__[0] = (MonoObject*)evidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "ResolvePolicyGroups", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Collections::IEnumerator(__result__);
			}

			void SecurityManager::SavePolicy()
			{
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "SavePolicy", NullMonoObject, 0, NULL, NULL, NULL);
			}

			void SecurityManager::SavePolicyLevel(mscorlib::System::Security::Policy::PolicyLevel level)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(level).name());
					__parameters__[0] = (MonoObject*)level;
					Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "SavePolicyLevel", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}

			mscorlib::System::Security::PermissionSet SecurityManager::GetStandardSandbox(mscorlib::System::Security::Policy::Evidence evidence)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(evidence).name());
					__parameters__[0] = (MonoObject*)evidence;
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "GetStandardSandbox", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Security::PermissionSet(__result__);
			}

			mscorlib::System::Boolean SecurityManager::CurrentThreadRequiresSecurityContextCapture()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "CurrentThreadRequiresSecurityContextCapture", NullMonoObject, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			//Get Set Static Properties Methods
			//	Get/Set:CheckExecutionRights
			mscorlib::System::Boolean  SecurityManager::get_CheckExecutionRights()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "get_CheckExecutionRights", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SecurityManager::set_CheckExecutionRights(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "set_CheckExecutionRights", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}


			//	Get/Set:SecurityEnabled
			mscorlib::System::Boolean  SecurityManager::get_SecurityEnabled()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "get_SecurityEnabled", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}

			void SecurityManager::set_SecurityEnabled(mscorlib::System::Boolean  value)
			{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = reinterpret_cast<void*>(value);
				Global::InvokeMethod("mscorlib", "System.Security", "SecurityManager", 0, NULL, "set_SecurityEnabled", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
			}




		}
	}
}
