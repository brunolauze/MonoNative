#include <mscorlib/System/mscorlib_System__AppDomain.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjectHandle.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Reflection/Emit/mscorlib_System_Reflection_Emit_AssemblyBuilder.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/Security/mscorlib_System_Security_PermissionSet.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Assembly.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_PolicyLevel.h>
#include <mscorlib/System/mscorlib_System_AssemblyLoadEventArgs.h>
#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>
#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_UnhandledExceptionEventArgs.h>
#include <mscorlib/System/mscorlib_System_Guid.h>
#include <mscorlib/System/mscorlib_System_IntPtr.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		void _AppDomain::AppendPrivatePath(mscorlib::System::String path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(path).name());
				__parameters__[0] = (MonoObject*)path;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "AppendPrivatePath", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::ClearPrivatePath()
		{
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "ClearPrivatePath", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
		}

		void _AppDomain::ClearShadowCopyPath()
		{
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "ClearShadowCopyPath", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle _AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "CreateInstance", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle _AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "CreateInstance", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle _AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "CreateInstance", __mscorlib_System__AppDomain, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle _AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "CreateInstanceFrom", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle _AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "CreateInstanceFrom", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle _AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "CreateInstanceFrom", __mscorlib_System__AppDomain, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(evidence).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)evidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)dir;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[3] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[4] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)requiredPermissions;
				__parameters__[3] = (MonoObject*)optionalPermissions;
				__parameters__[4] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(evidence).name());
				__parameter_types__[3] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[4] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)evidence;
				__parameters__[3] = (MonoObject*)requiredPermissions;
				__parameters__[4] = (MonoObject*)optionalPermissions;
				__parameters__[5] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[4] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)requiredPermissions;
				__parameters__[4] = (MonoObject*)optionalPermissions;
				__parameters__[5] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameter_types__[4] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[6] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 7, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder _AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameter_types__[4] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[6] = Global::GetType(typeid(refusedPermissions).name());
				__parameter_types__[7] = Global::GetType(typeid(isSynchronized).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = reinterpret_cast<void*>(access);
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				__parameters__[7] = reinterpret_cast<void*>(isSynchronized);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DefineDynamicAssembly", __mscorlib_System__AppDomain, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		void _AppDomain::DoCallBack(mscorlib::Callback<void  ()> theDelegate)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(theDelegate).name());
				__parameters__[0] = &theDelegate;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "DoCallBack", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Boolean _AppDomain::Equals(mscorlib::System::Object other)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(other).name());
				__parameters__[0] = (MonoObject*)other;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Equals", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 _AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "ExecuteAssembly", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 _AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "ExecuteAssembly", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 _AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "ExecuteAssembly", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Reflection::Assembly*> _AppDomain::GetAssemblies()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetAssemblies", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
				MonoArray *__array_ptr__ = (MonoArray*)__result__;
				uintptr_t __array_length__ = mono_array_length(__array_ptr__);
				std::vector<mscorlib::System::Reflection::Assembly*>  __array_result__(__array_length__);
				for(uintptr_t __array_index__ = 0; __array_index__ < __array_length__; __array_index__++)
				{
					MonoObject *__array_item__ = mono_array_get(__array_ptr__,MonoObject*,__array_index__);
					__array_result__.push_back(new mscorlib::System::Reflection::Assembly (__array_item__));
				}
				return __array_result__;
		}

		mscorlib::System::Object _AppDomain::GetData(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetData", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Int32 _AppDomain::GetHashCode()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetHashCode", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Object _AppDomain::GetLifetimeService()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetLifetimeService", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Type _AppDomain::GetType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetType", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Object _AppDomain::InitializeLifetimeService()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "InitializeLifetimeService", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(mscorlib::System::Reflection::AssemblyName assemblyRef)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyRef).name());
				__parameters__[0] = (MonoObject*)assemblyRef;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(std::vector<mscorlib::System::Byte*> rawAssembly)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(mscorlib::System::String assemblyString)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
				__parameters__[0] = (MonoObject*)assemblyString;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyRef).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyRef;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyString;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly _AppDomain::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawAssembly).name()))->eklass);
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(rawSymbolStore).name()))->eklass);
				__parameter_types__[2] = Global::GetType(typeid(securityEvidence).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
				__parameters__[2] = (MonoObject*)securityEvidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Load", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		void _AppDomain::SetAppDomainPolicy(mscorlib::System::Security::Policy::PolicyLevel domainPolicy)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(domainPolicy).name());
				__parameters__[0] = (MonoObject*)domainPolicy;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "SetAppDomainPolicy", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::SetCachePath(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "SetCachePath", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::SetData(mscorlib::System::String name, mscorlib::System::Object data)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(data).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)data;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "SetData", __mscorlib_System__AppDomain, 2, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::SetPrincipalPolicy(mscorlib::System::Security::Principal::PrincipalPolicy::__ENUM__ policy)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(policy).name());
				__parameters__[0] = reinterpret_cast<void*>(policy);
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "SetPrincipalPolicy", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::SetShadowCopyPath(mscorlib::System::String s)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(s).name());
				__parameters__[0] = (MonoObject*)s;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "SetShadowCopyPath", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::SetThreadPrincipal(mscorlib::System::Security::Principal::IPrincipal principal)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(principal).name());
				__parameters__[0] = (MonoObject*)principal;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "SetThreadPrincipal", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::String _AppDomain::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "ToString", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		void _AppDomain::GetIDsOfNames(mscorlib::System::Guid riid, mscorlib::System::IntPtr rgszNames, mscorlib::System::UInt32 cNames, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr rgDispId)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(riid).name());
				__parameter_types__[1] = Global::GetType(typeid(rgszNames).name());
				__parameter_types__[2] = Global::GetType(typeid(cNames).name());
				__parameter_types__[3] = Global::GetType(typeid(lcid).name());
				__parameter_types__[4] = Global::GetType(typeid(rgDispId).name());
				__parameters__[0] = (MonoObject*)riid;
				__parameters__[1] = (MonoObject*)rgszNames;
				__parameters__[2] = &cNames;
				__parameters__[3] = &lcid;
				__parameters__[4] = (MonoObject*)rgDispId;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetIDsOfNames", __mscorlib_System__AppDomain, 5, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::GetTypeInfo(mscorlib::System::UInt32 iTInfo, mscorlib::System::UInt32 lcid, mscorlib::System::IntPtr ppTInfo)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(iTInfo).name());
				__parameter_types__[1] = Global::GetType(typeid(lcid).name());
				__parameter_types__[2] = Global::GetType(typeid(ppTInfo).name());
				__parameters__[0] = &iTInfo;
				__parameters__[1] = &lcid;
				__parameters__[2] = (MonoObject*)ppTInfo;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetTypeInfo", __mscorlib_System__AppDomain, 3, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::GetTypeInfoCount(mscorlib::System::UInt32 pcTInfo)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(pcTInfo).name());
				__parameters__[0] = &pcTInfo;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "GetTypeInfoCount", __mscorlib_System__AppDomain, 1, __parameter_types__, __parameters__, NULL);
		}

		void _AppDomain::Invoke(mscorlib::System::UInt32 dispIdMember, mscorlib::System::Guid riid, mscorlib::System::UInt32 lcid, mscorlib::System::Int16 wFlags, mscorlib::System::IntPtr pDispParams, mscorlib::System::IntPtr pVarResult, mscorlib::System::IntPtr pExcepInfo, mscorlib::System::IntPtr puArgErr)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(dispIdMember).name());
				__parameter_types__[1] = Global::GetType(typeid(riid).name());
				__parameter_types__[2] = Global::GetType(typeid(lcid).name());
				__parameter_types__[3] = Global::GetType(typeid(wFlags).name());
				__parameter_types__[4] = Global::GetType(typeid(pDispParams).name());
				__parameter_types__[5] = Global::GetType(typeid(pVarResult).name());
				__parameter_types__[6] = Global::GetType(typeid(pExcepInfo).name());
				__parameter_types__[7] = Global::GetType(typeid(puArgErr).name());
				__parameters__[0] = &dispIdMember;
				__parameters__[1] = (MonoObject*)riid;
				__parameters__[2] = &lcid;
				__parameters__[3] = &wFlags;
				__parameters__[4] = (MonoObject*)pDispParams;
				__parameters__[5] = (MonoObject*)pVarResult;
				__parameters__[6] = (MonoObject*)pExcepInfo;
				__parameters__[7] = (MonoObject*)puArgErr;
				Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "Invoke", __mscorlib_System__AppDomain, 8, __parameter_types__, __parameters__, NULL);
		}

		//Get Set Properties Methods
		//	Get:BaseDirectory
		mscorlib::System::String  _AppDomain::get_BaseDirectory()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "get_BaseDirectory", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:DynamicDirectory
		mscorlib::System::String  _AppDomain::get_DynamicDirectory()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "get_DynamicDirectory", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:Evidence
		mscorlib::System::Security::Policy::Evidence  _AppDomain::get_Evidence()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "get_Evidence", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
			return mscorlib::System::Security::Policy::Evidence(__result__);
		}


		//	Get:FriendlyName
		mscorlib::System::String  _AppDomain::get_FriendlyName()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "get_FriendlyName", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:RelativeSearchPath
		mscorlib::System::String  _AppDomain::get_RelativeSearchPath()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "get_RelativeSearchPath", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:ShadowCopyFiles
		mscorlib::System::Boolean  _AppDomain::get_ShadowCopyFiles()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "_AppDomain", 0, NULL, "get_ShadowCopyFiles", __mscorlib_System__AppDomain, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}



	}
}
