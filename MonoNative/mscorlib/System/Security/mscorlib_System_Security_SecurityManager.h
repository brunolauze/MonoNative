#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYMANAGER_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_SECURITY_SECURITYMANAGER_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PolicyLevelType.h>
#include <mscorlib/System/Collections/mscorlib_System_Collections_IEnumerator.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Collections
		{

			class ArrayList;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{
			namespace Policy
			{

				class PolicyLevel;
				class Evidence;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class PermissionSet;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Security
		{

			class SecurityManager
				: public mscorlib::System::Object
			{
			public:
				SecurityManager(mscorlib::NativeTypeInfo *nativeTypeInfo)
				: mscorlib::System::Object(nativeTypeInfo)
				{
				};
			
				SecurityManager(MonoObject *nativeObject)
				: mscorlib::System::Object(nativeObject)
				{
				};
			
				~SecurityManager()
				{
				};
			

				SecurityManager & operator=(SecurityManager &value) { __native_object__ = value.GetNativeObject(); return value; };
				operator MonoObject*() { return __native_object__; };
				MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


				static void  GetZoneAndOrigin(mscorlib::System::Collections::ArrayList zone, mscorlib::System::Collections::ArrayList origin);
				static mscorlib::System::Boolean  IsGranted(mscorlib::System::Security::IPermission perm);
				static mscorlib::System::Security::Policy::PolicyLevel  LoadPolicyLevelFromFile(mscorlib::System::String path, mscorlib::System::Security::PolicyLevelType::__ENUM__ type);
				static mscorlib::System::Security::Policy::PolicyLevel  LoadPolicyLevelFromString(mscorlib::System::String str, mscorlib::System::Security::PolicyLevelType::__ENUM__ type);
				static mscorlib::System::Collections::IEnumerator  PolicyHierarchy();
				static mscorlib::System::Security::PermissionSet  ResolvePolicy(mscorlib::System::Security::Policy::Evidence evidence);
				static mscorlib::System::Security::PermissionSet  ResolvePolicy(std::vector<mscorlib::System::Security::Policy::Evidence*> evidences);
				static mscorlib::System::Security::PermissionSet  ResolveSystemPolicy(mscorlib::System::Security::Policy::Evidence evidence);
				static mscorlib::System::Security::PermissionSet  ResolvePolicy(mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet reqdPset, mscorlib::System::Security::PermissionSet optPset, mscorlib::System::Security::PermissionSet denyPset, mscorlib::System::Security::PermissionSet denied);
				static mscorlib::System::Collections::IEnumerator  ResolvePolicyGroups(mscorlib::System::Security::Policy::Evidence evidence);
				static void  SavePolicy();
				static void  SavePolicyLevel(mscorlib::System::Security::Policy::PolicyLevel level);
				static mscorlib::System::Security::PermissionSet  GetStandardSandbox(mscorlib::System::Security::Policy::Evidence evidence);
				static mscorlib::System::Boolean  CurrentThreadRequiresSecurityContextCapture();
				virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				//Public Static Properties
				static Property<mscorlib::System::Boolean , mscorlib::System::Security::SecurityManager> CheckExecutionRights;
				static Property<mscorlib::System::Boolean , mscorlib::System::Security::SecurityManager> SecurityEnabled;

				//Get Set Static Properties Methods
				//	Get/Set:CheckExecutionRights
				static mscorlib::System::Boolean  get_CheckExecutionRights();
				static void set_CheckExecutionRights(mscorlib::System::Boolean  value);

				//	Get/Set:SecurityEnabled
				static mscorlib::System::Boolean  get_SecurityEnabled();
				static void set_SecurityEnabled(mscorlib::System::Boolean  value);


			
			protected:
			
			private:
			
			};

		}
	}
}
#endif
