#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_APPDOMAIN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_APPDOMAIN_H

#include <mscorlib/System/mscorlib_System_MarshalByRefObject.h>
#include <mscorlib/System/mscorlib_System__AppDomain.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IEvidenceFactory.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorithm.h>
#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h>
#include <mscorlib/System/Collections/Generic/mscorlib_System_Collections_Generic_IEnumerable_1.h>
#include <mscorlib/System/Security/mscorlib_System_Security_SecurityContextSource.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_PrincipalPolicy.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>
#include <mscorlib/System/Security/mscorlib_System_Security_IPermission.h>
#include <mscorlib/System/mscorlib_System_Nullable_1.h>

namespace mscorlib
{
	namespace System
	{

		class AppDomainSetup;
		class String;
		class Byte;
		class Type;
		class AssemblyLoadEventArgs;
		class ResolveEventArgs;
		class EventArgs;
		class UnhandledExceptionEventArgs;
		class AppDomainManager;
		class ActivationContext;
		class ApplicationIdentity;
		class TimeSpan;
		

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

				class ApplicationTrust;
				class Evidence;
				class PolicyLevel;
				class StrongName;
				

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
		namespace Runtime
		{
			namespace Remoting
			{

				class ObjectHandle;
				class ObjRef;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Binder;
			class AssemblyName;
			class Assembly;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Globalization
		{

			class CultureInfo;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{
			namespace Emit
			{

				class AssemblyBuilder;
				class CustomAttributeBuilder;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class AppDomain
			: public mscorlib::System::MarshalByRefObject
			, public virtual mscorlib::System::_AppDomain
			, public virtual mscorlib::System::Security::IEvidenceFactory
		{
		public:
			AppDomain(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::MarshalByRefObject(nativeTypeInfo)
			, mscorlib::System::_AppDomain(NULL)
			, mscorlib::System::Security::IEvidenceFactory(NULL)
			{
			};
		
			AppDomain(MonoObject *nativeObject)
			: mscorlib::System::MarshalByRefObject(nativeObject)
			, mscorlib::System::_AppDomain(nativeObject)
			, mscorlib::System::Security::IEvidenceFactory(nativeObject)
			{
			};
		
			~AppDomain()
			{
			};
		

			AppDomain & operator=(AppDomain &value) { __native_object__ = value.GetNativeObject(); return value; };
			bool operator==(AppDomain &value) { return mscorlib::System::Object::Equals(value); };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			virtual void  AppendPrivatePath(mscorlib::System::String path);
			virtual void  AppendPrivatePath(const char *path);
			virtual void  ClearPrivatePath();
			virtual void  ClearShadowCopyPath();
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(const char *assemblyName, const char *typeName);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(const char *assemblyFile, const char *typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			mscorlib::System::Object  CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			mscorlib::System::Object  CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName);
			mscorlib::System::Object  CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			mscorlib::System::Object  CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(const char *assemblyName, const char *typeName);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			mscorlib::System::Object  CreateInstanceFromAndUnwrap(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized);
			mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes);
			mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes);
			mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes);
			mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes);
			mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes);
			mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes, mscorlib::System::Security::SecurityContextSource::__ENUM__ securityContextSource);
			virtual void  DoCallBack(mscorlib::Callback<void  ()> callBackDelegate);
			virtual mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile);
			virtual mscorlib::System::Int32  ExecuteAssembly(const char *assemblyFile);
			virtual mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Int32  ExecuteAssembly(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args);
			virtual mscorlib::System::Int32  ExecuteAssembly(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			mscorlib::System::Int32  ExecuteAssembly(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssembly(const char *assemblyFile, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			mscorlib::System::Int32  ExecuteAssembly(const char *assemblyFile, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			virtual std::vector<mscorlib::System::Reflection::Assembly*>  GetAssemblies();
			virtual mscorlib::System::Object  GetData(mscorlib::System::String name);
			virtual mscorlib::System::Object  GetData(const char *name);
			virtual mscorlib::System::Type  GetType();
			virtual mscorlib::System::Object  InitializeLifetimeService() override;
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::Reflection::AssemblyName assemblyRef);
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::String assemblyString);
			virtual mscorlib::System::Reflection::Assembly  Load(const char *assemblyString);
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Reflection::Assembly  Load(const char *assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly);
			virtual mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore);
			virtual mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence);
			virtual void  SetAppDomainPolicy(mscorlib::System::Security::Policy::PolicyLevel domainPolicy);
			virtual void  SetCachePath(mscorlib::System::String path);
			virtual void  SetCachePath(const char *path);
			virtual void  SetPrincipalPolicy(mscorlib::System::Security::Principal::PrincipalPolicy::__ENUM__ policy);
			void  SetShadowCopyFiles();
			virtual void  SetShadowCopyPath(mscorlib::System::String path);
			virtual void  SetShadowCopyPath(const char *path);
			virtual void  SetThreadPrincipal(mscorlib::System::Security::Principal::IPrincipal principal);
			static mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName);
			static mscorlib::System::AppDomain  CreateDomain(const char *friendlyName);
			static mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo);
			static mscorlib::System::AppDomain  CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo);
			static mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info);
			static mscorlib::System::AppDomain  CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info);
			static mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::String appBasePath, mscorlib::System::String appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles);
			static mscorlib::System::AppDomain  CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, const char *appBasePath, const char *appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles);
			static mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info, mscorlib::System::Security::PermissionSet grantSet, std::vector<mscorlib::System::Security::Policy::StrongName*> fullTrustAssemblies);
			static mscorlib::System::AppDomain  CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info, mscorlib::System::Security::PermissionSet grantSet, std::vector<mscorlib::System::Security::Policy::StrongName*> fullTrustAssemblies);
			mscorlib::System::Boolean  IsFinalizingForUnload();
			static void  Unload(mscorlib::System::AppDomain domain);
			virtual void  SetData(mscorlib::System::String name, mscorlib::System::Object data);
			virtual void  SetData(const char *name, mscorlib::System::Object data);
			void  SetData(mscorlib::System::String name, mscorlib::System::Object data, mscorlib::System::Security::IPermission permission);
			void  SetData(const char *name, mscorlib::System::Object data, mscorlib::System::Security::IPermission permission);
			void  SetDynamicBase(mscorlib::System::String path);
			void  SetDynamicBase(const char *path);
			static mscorlib::System::Int32  GetCurrentThreadId();
			virtual mscorlib::System::String  ToString() override;
			mscorlib::System::String  ApplyPolicy(mscorlib::System::String assemblyName);
			mscorlib::System::String  ApplyPolicy(const char *assemblyName);
			static mscorlib::System::AppDomain  CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::String appBasePath, mscorlib::System::String appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles, mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> adInit, std::vector<mscorlib::System::String*> adInitArgs);
			static mscorlib::System::AppDomain  CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, const char *appBasePath, const char *appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles, mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> adInit, std::vector<mscorlib::System::String*> adInitArgs);
			mscorlib::System::Int32  ExecuteAssemblyByName(mscorlib::System::String assemblyName);
			mscorlib::System::Int32  ExecuteAssemblyByName(const char *assemblyName);
			mscorlib::System::Int32  ExecuteAssemblyByName(mscorlib::System::String assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			mscorlib::System::Int32  ExecuteAssemblyByName(const char *assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			mscorlib::System::Int32  ExecuteAssemblyByName(mscorlib::System::String assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssemblyByName(const char *assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssemblyByName(mscorlib::System::Reflection::AssemblyName assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssemblyByName(mscorlib::System::String assemblyName, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssemblyByName(const char *assemblyName, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Int32  ExecuteAssemblyByName(mscorlib::System::Reflection::AssemblyName assemblyName, std::vector<mscorlib::System::String*> args);
			mscorlib::System::Boolean  IsDefaultAppDomain();
			std::vector<mscorlib::System::Reflection::Assembly*>  ReflectionOnlyGetAssemblies();
			mscorlib::System::Nullable<mscorlib::System::Boolean>  IsCompatibilitySwitchSet(mscorlib::System::String value);
			mscorlib::System::Nullable<mscorlib::System::Boolean>  IsCompatibilitySwitchSet(const char *value);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


			//Public Properties
			__declspec(property(get=get_SetupInformation)) mscorlib::System::AppDomainSetup  SetupInformation;
			__declspec(property(get=get_ApplicationTrust)) mscorlib::System::Security::Policy::ApplicationTrust  ApplicationTrust;
			__declspec(property(get=get_BaseDirectory)) mscorlib::System::String  BaseDirectory;
			__declspec(property(get=get_RelativeSearchPath)) mscorlib::System::String  RelativeSearchPath;
			__declspec(property(get=get_DynamicDirectory)) mscorlib::System::String  DynamicDirectory;
			__declspec(property(get=get_ShadowCopyFiles)) mscorlib::System::Boolean  ShadowCopyFiles;
			__declspec(property(get=get_FriendlyName)) mscorlib::System::String  FriendlyName;
			__declspec(property(get=get_Evidence)) mscorlib::System::Security::Policy::Evidence  Evidence;
			__declspec(property(get=get_PermissionSet)) mscorlib::System::Security::PermissionSet  PermissionSet;
			__declspec(property(get=get_IsHomogenous)) mscorlib::System::Boolean  IsHomogenous;
			__declspec(property(get=get_IsFullyTrusted)) mscorlib::System::Boolean  IsFullyTrusted;
			__declspec(property(get=get_DomainManager)) mscorlib::System::AppDomainManager  DomainManager;
			__declspec(property(get=get_ActivationContext)) mscorlib::System::ActivationContext  ActivationContext;
			__declspec(property(get=get_ApplicationIdentity)) mscorlib::System::ApplicationIdentity  ApplicationIdentity;
			__declspec(property(get=get_Id)) mscorlib::System::Int32  Id;
			__declspec(property(get=get_MonitoringSurvivedMemorySize)) mscorlib::System::Int64  MonitoringSurvivedMemorySize;
			__declspec(property(get=get_MonitoringTotalAllocatedMemorySize)) mscorlib::System::Int64  MonitoringTotalAllocatedMemorySize;
			__declspec(property(get=get_MonitoringTotalProcessorTime)) mscorlib::System::TimeSpan  MonitoringTotalProcessorTime;

			//Public Static Properties
			static Property<mscorlib::System::AppDomain , mscorlib::System::AppDomain> CurrentDomain;
			static Property<mscorlib::System::Boolean , mscorlib::System::AppDomain> MonitoringIsEnabled;
			static Property<mscorlib::System::Int64 , mscorlib::System::AppDomain> MonitoringSurvivedProcessMemorySize;

			//Get Set Properties Methods
			//	Get:SetupInformation
			mscorlib::System::AppDomainSetup  get_SetupInformation() const;

			//	Get:ApplicationTrust
			mscorlib::System::Security::Policy::ApplicationTrust  get_ApplicationTrust() const;

			//	Get:BaseDirectory
			mscorlib::System::String  get_BaseDirectory() const;

			//	Get:RelativeSearchPath
			mscorlib::System::String  get_RelativeSearchPath() const;

			//	Get:DynamicDirectory
			mscorlib::System::String  get_DynamicDirectory() const;

			//	Get:ShadowCopyFiles
			mscorlib::System::Boolean  get_ShadowCopyFiles() const;

			//	Get:FriendlyName
			mscorlib::System::String  get_FriendlyName() const;

			//	Get:Evidence
			mscorlib::System::Security::Policy::Evidence  get_Evidence() const;

			//	Get:PermissionSet
			mscorlib::System::Security::PermissionSet  get_PermissionSet() const;

			//	Get:IsHomogenous
			mscorlib::System::Boolean  get_IsHomogenous() const;

			//	Get:IsFullyTrusted
			mscorlib::System::Boolean  get_IsFullyTrusted() const;

			//	Get:DomainManager
			mscorlib::System::AppDomainManager  get_DomainManager() const;

			//	Get:ActivationContext
			mscorlib::System::ActivationContext  get_ActivationContext() const;

			//	Get:ApplicationIdentity
			mscorlib::System::ApplicationIdentity  get_ApplicationIdentity() const;

			//	Get:Id
			mscorlib::System::Int32  get_Id() const;

			//	Get:MonitoringSurvivedMemorySize
			mscorlib::System::Int64  get_MonitoringSurvivedMemorySize() const;

			//	Get:MonitoringTotalAllocatedMemorySize
			mscorlib::System::Int64  get_MonitoringTotalAllocatedMemorySize() const;

			//	Get:MonitoringTotalProcessorTime
			mscorlib::System::TimeSpan  get_MonitoringTotalProcessorTime() const;

			//Get Set Static Properties Methods
			//	Get:CurrentDomain
			static mscorlib::System::AppDomain  get_CurrentDomain();
			static void set_CurrentDomain(mscorlib::System::AppDomain  value);

			//	Get/Set:MonitoringIsEnabled
			static mscorlib::System::Boolean  get_MonitoringIsEnabled();
			static void set_MonitoringIsEnabled(mscorlib::System::Boolean  value);

			//	Get:MonitoringSurvivedProcessMemorySize
			static mscorlib::System::Int64  get_MonitoringSurvivedProcessMemorySize();
			static void set_MonitoringSurvivedProcessMemorySize(mscorlib::System::Int64  value);


		
		protected:
		
		private:
		
		};

	}
}
#endif
