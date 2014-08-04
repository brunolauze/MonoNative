// Mono Native Fixture
// Assembly: mscorlib, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089
// Namespace: System
// Name: AppDomain
// C++ Typed Name: mscorlib::System::AppDomain


#include <gtest/gtest.h>
#include <mscorlib/System/mscorlib_System_AppDomain.h>
#include <mscorlib/System/mscorlib_System_AppDomainSetup.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_ApplicationTrust.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjectHandle.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_CustomAttributeBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_AssemblyLoadEventArgs.h>
#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>
#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_UnhandledExceptionEventArgs.h>
#include <mscorlib/System/mscorlib_System_AppDomainManager.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_ApplicationIdentity.h>
#include <mscorlib/System/mscorlib_System_TimeSpan.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_StrongName.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods Tests
		
		// Method AppendPrivatePath
		//		Signature: mscorlib::System::String path
		TEST(mscorlib_System_AppDomain_Fixture,AppendPrivatePath_Test)
		{
			
			
		}

		// Method ClearPrivatePath
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,ClearPrivatePath_Test)
		{
			
			
		}

		// Method ClearShadowCopyPath
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,ClearShadowCopyPath_Test)
		{
			
			
		}

		// Method CreateComInstanceFrom
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName
		TEST(mscorlib_System_AppDomain_Fixture,CreateComInstanceFrom_1_Test)
		{
			
			
		}

		// Method CreateComInstanceFrom
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm
		TEST(mscorlib_System_AppDomain_Fixture,CreateComInstanceFrom_2_Test)
		{
			
			
		}

		// Method CreateInstance
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstance_1_Test)
		{
			
			
		}

		// Method CreateInstance
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstance_2_Test)
		{
			
			
		}

		// Method CreateInstance
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstance_3_Test)
		{
			
			
		}

		// Method CreateInstanceAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceAndUnwrap_1_Test)
		{
			
			
		}

		// Method CreateInstanceAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceAndUnwrap_2_Test)
		{
			
			
		}

		// Method CreateInstanceAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceAndUnwrap_3_Test)
		{
			
			
		}

		// Method CreateInstance
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstance_4_Test)
		{
			
			
		}

		// Method CreateInstanceAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceAndUnwrap_4_Test)
		{
			
			
		}

		// Method CreateInstanceFrom
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFrom_1_Test)
		{
			
			
		}

		// Method CreateInstanceFromAndUnwrap
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFromAndUnwrap_1_Test)
		{
			
			
		}

		// Method CreateInstanceFrom
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::String typeName
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFrom_2_Test)
		{
			
			
		}

		// Method CreateInstanceFrom
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFrom_3_Test)
		{
			
			
		}

		// Method CreateInstanceFrom
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFrom_4_Test)
		{
			
			
		}

		// Method CreateInstanceFromAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFromAndUnwrap_2_Test)
		{
			
			
		}

		// Method CreateInstanceFromAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFromAndUnwrap_3_Test)
		{
			
			
		}

		// Method CreateInstanceFromAndUnwrap
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes
		TEST(mscorlib_System_AppDomain_Fixture,CreateInstanceFromAndUnwrap_4_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_1_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_2_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_3_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_4_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_5_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_6_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_7_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_8_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_9_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_10_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_11_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_12_Test)
		{
			
			
		}

		// Method DefineDynamicAssembly
		//		Signature: mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes, mscorlib::System::Security::SecurityContextSource::__ENUM__ securityContextSource
		TEST(mscorlib_System_AppDomain_Fixture,DefineDynamicAssembly_13_Test)
		{
			
			
		}

		// Method DoCallBack
		//		Signature: mscorlib::Callback<void  ()> callBackDelegate
		TEST(mscorlib_System_AppDomain_Fixture,DoCallBack_Test)
		{
			
			
		}

		// Method ExecuteAssembly
		//		Signature: mscorlib::System::String assemblyFile
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssembly_1_Test)
		{
			
			
		}

		// Method ExecuteAssembly
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssembly_2_Test)
		{
			
			
		}

		// Method ExecuteAssembly
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssembly_3_Test)
		{
			
			
		}

		// Method ExecuteAssembly
		//		Signature: mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssembly_4_Test)
		{
			
			
		}

		// Method ExecuteAssembly
		//		Signature: mscorlib::System::String assemblyFile, std::vector<mscorlib::System::String*> args
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssembly_5_Test)
		{
			
			
		}

		// Method ExecuteAssembly
		//		Signature: mscorlib::System::String assemblyFile, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssembly_6_Test)
		{
			
			
		}

		// Method GetAssemblies
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,GetAssemblies_Test)
		{
			
			
		}

		// Method GetData
		//		Signature: mscorlib::System::String name
		TEST(mscorlib_System_AppDomain_Fixture,GetData_Test)
		{
			
			
		}

		// Method GetType
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,GetType_Test)
		{
			
			
		}

		// Method InitializeLifetimeService
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,InitializeLifetimeService_Test)
		{
			
			
		}

		// Method Load
		//		Signature: mscorlib::System::Reflection::AssemblyName assemblyRef
		TEST(mscorlib_System_AppDomain_Fixture,Load_1_Test)
		{
			
			
		}

		// Method Load
		//		Signature: mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity
		TEST(mscorlib_System_AppDomain_Fixture,Load_2_Test)
		{
			
			
		}

		// Method Load
		//		Signature: mscorlib::System::String assemblyString
		TEST(mscorlib_System_AppDomain_Fixture,Load_3_Test)
		{
			
			
		}

		// Method Load
		//		Signature: mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity
		TEST(mscorlib_System_AppDomain_Fixture,Load_4_Test)
		{
			
			
		}

		// Method Load
		//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly
		TEST(mscorlib_System_AppDomain_Fixture,Load_5_Test)
		{
			
			
		}

		// Method Load
		//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore
		TEST(mscorlib_System_AppDomain_Fixture,Load_6_Test)
		{
			
			
		}

		// Method Load
		//		Signature: std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence
		TEST(mscorlib_System_AppDomain_Fixture,Load_7_Test)
		{
			
			
		}

		// Method SetAppDomainPolicy
		//		Signature: mscorlib::System::Security::Policy::PolicyLevel domainPolicy
		TEST(mscorlib_System_AppDomain_Fixture,SetAppDomainPolicy_Test)
		{
			
			
		}

		// Method SetCachePath
		//		Signature: mscorlib::System::String path
		TEST(mscorlib_System_AppDomain_Fixture,SetCachePath_Test)
		{
			
			
		}

		// Method SetPrincipalPolicy
		//		Signature: mscorlib::System::Security::Principal::PrincipalPolicy::__ENUM__ policy
		TEST(mscorlib_System_AppDomain_Fixture,SetPrincipalPolicy_Test)
		{
			
			
		}

		// Method SetShadowCopyFiles
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,SetShadowCopyFiles_Test)
		{
			
			
		}

		// Method SetShadowCopyPath
		//		Signature: mscorlib::System::String path
		TEST(mscorlib_System_AppDomain_Fixture,SetShadowCopyPath_Test)
		{
			
			
		}

		// Method SetThreadPrincipal
		//		Signature: mscorlib::System::Security::Principal::IPrincipal principal
		TEST(mscorlib_System_AppDomain_Fixture,SetThreadPrincipal_Test)
		{
			
			
		}

		// Method IsFinalizingForUnload
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,IsFinalizingForUnload_Test)
		{
			
			
		}

		// Method SetData
		//		Signature: mscorlib::System::String name, mscorlib::System::Object data
		TEST(mscorlib_System_AppDomain_Fixture,SetData_1_Test)
		{
			
			
		}

		// Method SetData
		//		Signature: mscorlib::System::String name, mscorlib::System::Object data, mscorlib::System::Security::IPermission permission
		TEST(mscorlib_System_AppDomain_Fixture,SetData_2_Test)
		{
			
			
		}

		// Method SetDynamicBase
		//		Signature: mscorlib::System::String path
		TEST(mscorlib_System_AppDomain_Fixture,SetDynamicBase_Test)
		{
			
			
		}

		// Method ToString
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,ToString_Test)
		{
			
			
		}

		// Method ApplyPolicy
		//		Signature: mscorlib::System::String assemblyName
		TEST(mscorlib_System_AppDomain_Fixture,ApplyPolicy_Test)
		{
			
			
		}

		// Method ExecuteAssemblyByName
		//		Signature: mscorlib::System::String assemblyName
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssemblyByName_1_Test)
		{
			
			
		}

		// Method ExecuteAssemblyByName
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssemblyByName_2_Test)
		{
			
			
		}

		// Method ExecuteAssemblyByName
		//		Signature: mscorlib::System::String assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssemblyByName_3_Test)
		{
			
			
		}

		// Method ExecuteAssemblyByName
		//		Signature: mscorlib::System::Reflection::AssemblyName assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssemblyByName_4_Test)
		{
			
			
		}

		// Method ExecuteAssemblyByName
		//		Signature: mscorlib::System::String assemblyName, std::vector<mscorlib::System::String*> args
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssemblyByName_5_Test)
		{
			
			
		}

		// Method ExecuteAssemblyByName
		//		Signature: mscorlib::System::Reflection::AssemblyName assemblyName, std::vector<mscorlib::System::String*> args
		TEST(mscorlib_System_AppDomain_Fixture,ExecuteAssemblyByName_6_Test)
		{
			
			
		}

		// Method IsDefaultAppDomain
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,IsDefaultAppDomain_Test)
		{
			
			
		}

		// Method ReflectionOnlyGetAssemblies
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,ReflectionOnlyGetAssemblies_Test)
		{
			
			
		}

		// Method IsCompatibilitySwitchSet
		//		Signature: mscorlib::System::String value
		TEST(mscorlib_System_AppDomain_Fixture,IsCompatibilitySwitchSet_Test)
		{
			
			
		}

		//Public Static Methods Tests
		
		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName
		TEST(mscorlib_System_AppDomain_Fixture,CreateDomain_1_StaticTest)
		{
			
			
		}

		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo
		TEST(mscorlib_System_AppDomain_Fixture,CreateDomain_2_StaticTest)
		{
			
			
		}

		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info
		TEST(mscorlib_System_AppDomain_Fixture,CreateDomain_3_StaticTest)
		{
			
			
		}

		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::String appBasePath, mscorlib::System::String appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles
		TEST(mscorlib_System_AppDomain_Fixture,CreateDomain_4_StaticTest)
		{
			
			
		}

		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info, mscorlib::System::Security::PermissionSet grantSet, std::vector<mscorlib::System::Security::Policy::StrongName*> fullTrustAssemblies
		TEST(mscorlib_System_AppDomain_Fixture,CreateDomain_5_StaticTest)
		{
			
			
		}

		// Method Unload
		//		Signature: mscorlib::System::AppDomain domain
		TEST(mscorlib_System_AppDomain_Fixture,Unload_StaticTest)
		{
			
			
		}

		// Method GetCurrentThreadId
		//		Signature: 
		TEST(mscorlib_System_AppDomain_Fixture,GetCurrentThreadId_StaticTest)
		{
			
			
		}

		// Method CreateDomain
		//		Signature: mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::String appBasePath, mscorlib::System::String appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles, mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> adInit, std::vector<mscorlib::System::String*> adInitArgs
		TEST(mscorlib_System_AppDomain_Fixture,CreateDomain_6_StaticTest)
		{
			
			
		}

		//Public Properties Tests
		
		// Property SetupInformation
		//		Return Type: mscorlib::System::AppDomainSetup
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_SetupInformation_Test)
		{
			
			
		}

		// Property ApplicationTrust
		//		Return Type: mscorlib::System::Security::Policy::ApplicationTrust
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_ApplicationTrust_Test)
		{
			
			
		}

		// Property BaseDirectory
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_BaseDirectory_Test)
		{
			
			
		}

		// Property RelativeSearchPath
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_RelativeSearchPath_Test)
		{
			
			
		}

		// Property DynamicDirectory
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_DynamicDirectory_Test)
		{
			
			
		}

		// Property ShadowCopyFiles
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_ShadowCopyFiles_Test)
		{
			
			
		}

		// Property FriendlyName
		//		Return Type: mscorlib::System::String
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_FriendlyName_Test)
		{
			
			
		}

		// Property Evidence
		//		Return Type: mscorlib::System::Security::Policy::Evidence
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_Evidence_Test)
		{
			
			
		}

		// Property PermissionSet
		//		Return Type: mscorlib::System::Security::PermissionSet
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_PermissionSet_Test)
		{
			
			
		}

		// Property IsHomogenous
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_IsHomogenous_Test)
		{
			
			
		}

		// Property IsFullyTrusted
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_IsFullyTrusted_Test)
		{
			
			
		}

		// Property DomainManager
		//		Return Type: mscorlib::System::AppDomainManager
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_DomainManager_Test)
		{
			
			
		}

		// Property ActivationContext
		//		Return Type: mscorlib::System::ActivationContext
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_ActivationContext_Test)
		{
			
			
		}

		// Property ApplicationIdentity
		//		Return Type: mscorlib::System::ApplicationIdentity
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_ApplicationIdentity_Test)
		{
			
			
		}

		// Property Id
		//		Return Type: mscorlib::System::Int32
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_Id_Test)
		{
			
			
		}

		// Property MonitoringSurvivedMemorySize
		//		Return Type: mscorlib::System::Int64
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_MonitoringSurvivedMemorySize_Test)
		{
			
			
		}

		// Property MonitoringTotalAllocatedMemorySize
		//		Return Type: mscorlib::System::Int64
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_MonitoringTotalAllocatedMemorySize_Test)
		{
			
			
		}

		// Property MonitoringTotalProcessorTime
		//		Return Type: mscorlib::System::TimeSpan
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_MonitoringTotalProcessorTime_Test)
		{
			
			
		}

		// Property CurrentDomain
		//		Return Type: mscorlib::System::AppDomain
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_CurrentDomain_Test)
		{
			
			
		}

		// Property MonitoringIsEnabled
		//		Return Type: mscorlib::System::Boolean
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_MonitoringIsEnabled_Test)
		{
			
			
		}

		// Property MonitoringIsEnabled
		//		Return Type: mscorlib::System::Boolean
		//			Property Set Method
		TEST(mscorlib_System_AppDomain_Fixture,set_MonitoringIsEnabled_Test)
		{
			
			
		}

		// Property MonitoringSurvivedProcessMemorySize
		//		Return Type: mscorlib::System::Int64
		//			Property Get Method
		TEST(mscorlib_System_AppDomain_Fixture,get_MonitoringSurvivedProcessMemorySize_Test)
		{
			
			
		}


	}
}
