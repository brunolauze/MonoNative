#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM__APPDOMAIN_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM__APPDOMAIN_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_PrincipalPolicy.h>
#include <mscorlib/System/Security/Principal/mscorlib_System_Security_Principal_IPrincipal.h>

namespace mscorlib
{
	namespace System
	{

		class String;
		class Type;
		class Byte;
		class AssemblyLoadEventArgs;
		class ResolveEventArgs;
		class EventArgs;
		class UnhandledExceptionEventArgs;
		class Guid;
		class IntPtr;
		

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

				class Evidence;
				class PolicyLevel;
				

			}
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

		class _AppDomain
		{
		public:
			_AppDomain(MonoObject *nativeObject)
			{
				__mscorlib_System__AppDomain = nativeObject;
			};
		
			~_AppDomain()
			{
			};
		

			_AppDomain & operator=(_AppDomain &value) { __mscorlib_System__AppDomain = value.__mscorlib_System__AppDomain; return value; };
			operator MonoObject*() { return __mscorlib_System__AppDomain; };
			MonoObject* operator=(MonoObject* value) { __mscorlib_System__AppDomain = value; return value; };


			virtual void  AppendPrivatePath(mscorlib::System::String path);
			virtual void  ClearPrivatePath();
			virtual void  ClearShadowCopyPath();
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions);
			virtual mscorlib::System::Reflection::Emit::AssemblyBuilder  DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized);
			virtual void  DoCallBack(mscorlib::Callback<void  ()> theDelegate);
			virtual mscorlib::System::Boolean  Equals(mscorlib::System::Object other);
			virtual mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile);
			virtual mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Int32  ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args);
			virtual std::vector<mscorlib::System::Reflection::Assembly*>  GetAssemblies();
			virtual mscorlib::System::Object  GetData(mscorlib::System::String name);
			virtual mscorlib::System::Int32  GetHashCode();
			virtual mscorlib::System::Object  GetLifetimeService();
			virtual mscorlib::System::Type  GetType();
			virtual mscorlib::System::Object  InitializeLifetimeService();
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::Reflection::AssemblyName assemblyRef);
			virtual mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly);
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::String assemblyString);
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore);
			virtual mscorlib::System::Reflection::Assembly  Load(mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity);
			virtual mscorlib::System::Reflection::Assembly  Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence);
			virtual void  SetAppDomainPolicy(mscorlib::System::Security::Policy::PolicyLevel domainPolicy);
			virtual void  SetCachePath(mscorlib::System::String s);
			virtual void  SetData(mscorlib::System::String name, mscorlib::System::Object data);
			virtual void  SetPrincipalPolicy(mscorlib::System::Security::Principal::PrincipalPolicy::__ENUM__ policy);
			virtual void  SetShadowCopyPath(mscorlib::System::String s);
			virtual void  SetThreadPrincipal(mscorlib::System::Security::Principal::IPrincipal principal);
			virtual mscorlib::System::String  ToString();
			virtual void  GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId);
			virtual void  GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo);
			virtual void  GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo);
			virtual void  Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr);


			//Public Properties
			__declspec(property(get=get_BaseDirectory)) mscorlib::System::String  BaseDirectory;
			__declspec(property(get=get_DynamicDirectory)) mscorlib::System::String  DynamicDirectory;
			__declspec(property(get=get_Evidence)) mscorlib::System::Security::Policy::Evidence  Evidence;
			__declspec(property(get=get_FriendlyName)) mscorlib::System::String  FriendlyName;
			__declspec(property(get=get_RelativeSearchPath)) mscorlib::System::String  RelativeSearchPath;
			__declspec(property(get=get_ShadowCopyFiles)) mscorlib::System::Boolean  ShadowCopyFiles;

			//Get Set Properties Methods
			//	Get:BaseDirectory
			mscorlib::System::String  get_BaseDirectory();

			//	Get:DynamicDirectory
			mscorlib::System::String  get_DynamicDirectory();

			//	Get:Evidence
			mscorlib::System::Security::Policy::Evidence  get_Evidence();

			//	Get:FriendlyName
			mscorlib::System::String  get_FriendlyName();

			//	Get:RelativeSearchPath
			mscorlib::System::String  get_RelativeSearchPath();

			//	Get:ShadowCopyFiles
			mscorlib::System::Boolean  get_ShadowCopyFiles();

		
		protected:
			MonoObject *__mscorlib_System__AppDomain;
		
		private:
		
		};

	}
}
#endif
