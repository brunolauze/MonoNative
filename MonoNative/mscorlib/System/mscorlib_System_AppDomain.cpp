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

		Property<mscorlib::System::AppDomain , mscorlib::System::AppDomain> mscorlib::System::AppDomain::CurrentDomain(&mscorlib::System::AppDomain::get_CurrentDomain, &mscorlib::System::AppDomain::set_CurrentDomain);
		Property<mscorlib::System::Boolean , mscorlib::System::AppDomain> mscorlib::System::AppDomain::MonitoringIsEnabled(&mscorlib::System::AppDomain::get_MonitoringIsEnabled, &mscorlib::System::AppDomain::set_MonitoringIsEnabled);
		Property<mscorlib::System::Int64 , mscorlib::System::AppDomain> mscorlib::System::AppDomain::MonitoringSurvivedProcessMemorySize(&mscorlib::System::AppDomain::get_MonitoringSurvivedProcessMemorySize, &mscorlib::System::AppDomain::set_MonitoringSurvivedProcessMemorySize);
		//Public Methods
		void AppDomain::AppendPrivatePath(mscorlib::System::String path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(path).name());
				__parameters__[0] = (MonoObject*)path;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "AppendPrivatePath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::AppendPrivatePath(const char *path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), path);
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "AppendPrivatePath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::ClearPrivatePath()
		{
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ClearPrivatePath", __native_object__, 0, NULL, NULL, NULL);
		}

		void AppDomain::ClearShadowCopyPath()
		{
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ClearShadowCopyPath", __native_object__, 0, NULL, NULL, NULL);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateComInstanceFrom(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateComInstanceFrom", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateComInstanceFrom(const char *assemblyName, const char *typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateComInstanceFrom", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateComInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[3] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				mscorlib::System::Int32 __param_hashAlgorithm__ = hashAlgorithm;
				__parameters__[3] = &__param_hashAlgorithm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateComInstanceFrom", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateComInstanceFrom(const char *assemblyFile, const char *typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[3] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				mscorlib::System::Int32 __param_hashAlgorithm__ = hashAlgorithm;
				__parameters__[3] = &__param_hashAlgorithm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateComInstanceFrom", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(const char *assemblyName, const char *typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstance(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstance", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceAndUnwrap(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceAndUnwrap", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(const char *assemblyFile, const char *typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(const char *assemblyFile, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle AppDomain::CreateInstanceFrom(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFrom", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(const char *assemblyName, const char *typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::CreateInstanceFromAndUnwrap(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Object")), 1));
				__parameter_types__[8] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = mono_string_new(Global::GetDomain(), typeName);
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				mscorlib::System::Int32 __param_bindingAttr__ = bindingAttr;
				__parameters__[3] = &__param_bindingAttr__;
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateInstanceFromAndUnwrap", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(evidence).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)evidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				__parameters__[3] = (MonoObject*)evidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[3] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[4] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)requiredPermissions;
				__parameters__[3] = (MonoObject*)optionalPermissions;
				__parameters__[4] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
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
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)evidence;
				__parameters__[3] = (MonoObject*)requiredPermissions;
				__parameters__[4] = (MonoObject*)optionalPermissions;
				__parameters__[5] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
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
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)requiredPermissions;
				__parameters__[4] = (MonoObject*)optionalPermissions;
				__parameters__[5] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[4] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				__parameters__[3] = (MonoObject*)requiredPermissions;
				__parameters__[4] = (MonoObject*)optionalPermissions;
				__parameters__[5] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
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
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 7, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameter_types__[4] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[6] = Global::GetType(typeid(refusedPermissions).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 7, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized)
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
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				__parameters__[7] = reinterpret_cast<void*>(isSynchronized);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameter_types__[4] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[6] = Global::GetType(typeid(refusedPermissions).name());
				__parameter_types__[7] = Global::GetType(typeid(isSynchronized).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				__parameters__[7] = reinterpret_cast<void*>(isSynchronized);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameter_types__[4] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[6] = Global::GetType(typeid(refusedPermissions).name());
				__parameter_types__[7] = Global::GetType(typeid(isSynchronized).name());
				__parameter_types__[8] = Global::GetType(typeid(assemblyAttributes).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				__parameters__[7] = reinterpret_cast<void*>(isSynchronized);
				__parameters__[8] = (MonoObject*)assemblyAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Security::Policy::Evidence evidence, mscorlib::System::Security::PermissionSet requiredPermissions, mscorlib::System::Security::PermissionSet optionalPermissions, mscorlib::System::Security::PermissionSet refusedPermissions, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(evidence).name());
				__parameter_types__[4] = Global::GetType(typeid(requiredPermissions).name());
				__parameter_types__[5] = Global::GetType(typeid(optionalPermissions).name());
				__parameter_types__[6] = Global::GetType(typeid(refusedPermissions).name());
				__parameter_types__[7] = Global::GetType(typeid(isSynchronized).name());
				__parameter_types__[8] = Global::GetType(typeid(assemblyAttributes).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				__parameters__[3] = (MonoObject*)evidence;
				__parameters__[4] = (MonoObject*)requiredPermissions;
				__parameters__[5] = (MonoObject*)optionalPermissions;
				__parameters__[6] = (MonoObject*)refusedPermissions;
				__parameters__[7] = reinterpret_cast<void*>(isSynchronized);
				__parameters__[8] = (MonoObject*)assemblyAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(assemblyAttributes).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)assemblyAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::String dir, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(dir).name());
				__parameter_types__[3] = Global::GetType(typeid(isSynchronized).name());
				__parameter_types__[4] = Global::GetType(typeid(assemblyAttributes).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)dir;
				__parameters__[3] = reinterpret_cast<void*>(isSynchronized);
				__parameters__[4] = (MonoObject*)assemblyAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, const char *dir, mscorlib::System::Boolean isSynchronized, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType(typeid(isSynchronized).name());
				__parameter_types__[4] = Global::GetType(typeid(assemblyAttributes).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = mono_string_new(Global::GetDomain(), dir);
				__parameters__[3] = reinterpret_cast<void*>(isSynchronized);
				__parameters__[4] = (MonoObject*)assemblyAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		mscorlib::System::Reflection::Emit::AssemblyBuilder AppDomain::DefineDynamicAssembly(mscorlib::System::Reflection::AssemblyName name, mscorlib::System::Reflection::Emit::AssemblyBuilderAccess::__ENUM__ access, mscorlib::System::Collections::Generic::IEnumerable<mscorlib::System::Reflection::Emit::CustomAttributeBuilder> assemblyAttributes, mscorlib::System::Security::SecurityContextSource::__ENUM__ securityContextSource)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(access).name());
				__parameter_types__[2] = Global::GetType(typeid(assemblyAttributes).name());
				__parameter_types__[3] = Global::GetType(typeid(securityContextSource).name());
				__parameters__[0] = (MonoObject*)name;
				mscorlib::System::Int32 __param_access__ = access;
				__parameters__[1] = &__param_access__;
				__parameters__[2] = (MonoObject*)assemblyAttributes;
				mscorlib::System::Int32 __param_securityContextSource__ = securityContextSource;
				__parameters__[3] = &__param_securityContextSource__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DefineDynamicAssembly", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Emit::AssemblyBuilder(__result__);
		}

		void AppDomain::DoCallBack(mscorlib::Callback<void  ()> callBackDelegate)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(callBackDelegate).name());
				__parameters__[0] = &callBackDelegate;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "DoCallBack", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(const char *assemblyFile)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[4] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				mscorlib::System::Int32 __param_hashAlgorithm__ = hashAlgorithm;
				__parameters__[4] = &__param_hashAlgorithm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(const char *assemblyFile, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameter_types__[3] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[4] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				__parameters__[3] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				mscorlib::System::Int32 __param_hashAlgorithm__ = hashAlgorithm;
				__parameters__[4] = &__param_hashAlgorithm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 5, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(const char *assemblyFile, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(mscorlib::System::String assemblyFile, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[3] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				mscorlib::System::Int32 __param_hashAlgorithm__ = hashAlgorithm;
				__parameters__[3] = &__param_hashAlgorithm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssembly(const char *assemblyFile, std::vector<mscorlib::System::String*> args, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[3] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				mscorlib::System::Int32 __param_hashAlgorithm__ = hashAlgorithm;
				__parameters__[3] = &__param_hashAlgorithm__;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssembly", __native_object__, 4, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Reflection::Assembly*> AppDomain::GetAssemblies()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "GetAssemblies", __native_object__, 0, NULL, NULL, NULL);
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

		mscorlib::System::Object AppDomain::GetData(mscorlib::System::String name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameters__[0] = (MonoObject*)name;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "GetData", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object AppDomain::GetData(const char *name)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "GetData", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Type AppDomain::GetType()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "GetType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
		}

		mscorlib::System::Object AppDomain::InitializeLifetimeService()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "InitializeLifetimeService", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(mscorlib::System::Reflection::AssemblyName assemblyRef)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyRef).name());
				__parameters__[0] = (MonoObject*)assemblyRef;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(mscorlib::System::Reflection::AssemblyName assemblyRef, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyRef).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyRef;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(mscorlib::System::String assemblyString)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
				__parameters__[0] = (MonoObject*)assemblyString;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(const char *assemblyString)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyString);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(mscorlib::System::String assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyString).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyString;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(const char *assemblyString, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyString);
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(std::vector<mscorlib::System::Byte*> rawAssembly)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		mscorlib::System::Reflection::Assembly AppDomain::Load(std::vector<mscorlib::System::Byte*> rawAssembly, std::vector<mscorlib::System::Byte*> rawSymbolStore, mscorlib::System::Security::Policy::Evidence securityEvidence)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "Byte")), 1));
				__parameter_types__[2] = Global::GetType(typeid(securityEvidence).name());
				__parameters__[0] = Global::FromArray<mscorlib::System::Byte*>(rawAssembly, typeid(mscorlib::System::Byte).name());
				__parameters__[1] = Global::FromArray<mscorlib::System::Byte*>(rawSymbolStore, typeid(mscorlib::System::Byte).name());
				__parameters__[2] = (MonoObject*)securityEvidence;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Load", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
		}

		void AppDomain::SetAppDomainPolicy(mscorlib::System::Security::Policy::PolicyLevel domainPolicy)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(domainPolicy).name());
				__parameters__[0] = (MonoObject*)domainPolicy;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetAppDomainPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetCachePath(mscorlib::System::String path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(path).name());
				__parameters__[0] = (MonoObject*)path;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetCachePath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetCachePath(const char *path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), path);
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetCachePath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetPrincipalPolicy(mscorlib::System::Security::Principal::PrincipalPolicy::__ENUM__ policy)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(policy).name());
				mscorlib::System::Int32 __param_policy__ = policy;
				__parameters__[0] = &__param_policy__;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetPrincipalPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetShadowCopyFiles()
		{
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetShadowCopyFiles", __native_object__, 0, NULL, NULL, NULL);
		}

		void AppDomain::SetShadowCopyPath(mscorlib::System::String path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(path).name());
				__parameters__[0] = (MonoObject*)path;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetShadowCopyPath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetShadowCopyPath(const char *path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), path);
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetShadowCopyPath", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetThreadPrincipal(mscorlib::System::Security::Principal::IPrincipal principal)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(principal).name());
				__parameters__[0] = (MonoObject*)principal;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetThreadPrincipal", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(mscorlib::System::String friendlyName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameters__[0] = (MonoObject*)friendlyName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(const char *friendlyName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), friendlyName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameters__[0] = (MonoObject*)friendlyName;
				__parameters__[1] = (MonoObject*)securityInfo;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), friendlyName);
				__parameters__[1] = (MonoObject*)securityInfo;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(info).name());
				__parameters__[0] = (MonoObject*)friendlyName;
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)info;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(info).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), friendlyName);
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)info;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::String appBasePath, mscorlib::System::String appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(appBasePath).name());
				__parameter_types__[3] = Global::GetType(typeid(appRelativeSearchPath).name());
				__parameter_types__[4] = Global::GetType(typeid(shadowCopyFiles).name());
				__parameters__[0] = (MonoObject*)friendlyName;
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)appBasePath;
				__parameters__[3] = (MonoObject*)appRelativeSearchPath;
				__parameters__[4] = reinterpret_cast<void*>(shadowCopyFiles);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, const char *appBasePath, const char *appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[4] = Global::GetType(typeid(shadowCopyFiles).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), friendlyName);
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = mono_string_new(Global::GetDomain(), appBasePath);
				__parameters__[3] = mono_string_new(Global::GetDomain(), appRelativeSearchPath);
				__parameters__[4] = reinterpret_cast<void*>(shadowCopyFiles);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info, mscorlib::System::Security::PermissionSet grantSet, std::vector<mscorlib::System::Security::Policy::StrongName*> fullTrustAssemblies)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(info).name());
				__parameter_types__[3] = Global::GetType(typeid(grantSet).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.Policy", "StrongName")), 1));
				__parameters__[0] = (MonoObject*)friendlyName;
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)info;
				__parameters__[3] = (MonoObject*)grantSet;
				__parameters__[4] = Global::FromArray<mscorlib::System::Security::Policy::StrongName*>(fullTrustAssemblies, typeid(mscorlib::System::Security::Policy::StrongName).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::AppDomainSetup info, mscorlib::System::Security::PermissionSet grantSet, std::vector<mscorlib::System::Security::Policy::StrongName*> fullTrustAssemblies)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(info).name());
				__parameter_types__[3] = Global::GetType(typeid(grantSet).name());
				__parameter_types__[4] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System.Security.Policy", "StrongName")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), friendlyName);
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)info;
				__parameters__[3] = (MonoObject*)grantSet;
				__parameters__[4] = Global::FromArray<mscorlib::System::Security::Policy::StrongName*>(fullTrustAssemblies, typeid(mscorlib::System::Security::Policy::StrongName).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::Boolean AppDomain::IsFinalizingForUnload()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "IsFinalizingForUnload", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AppDomain::Unload(mscorlib::System::AppDomain domain)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameters__[0] = (MonoObject*)domain;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "Unload", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetData(mscorlib::System::String name, mscorlib::System::Object data)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(data).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)data;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetData(const char *name, mscorlib::System::Object data)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(data).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = (MonoObject*)data;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetData", __native_object__, 2, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetData(mscorlib::System::String name, mscorlib::System::Object data, mscorlib::System::Security::IPermission permission)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(name).name());
				__parameter_types__[1] = Global::GetType(typeid(data).name());
				__parameter_types__[2] = Global::GetType(typeid(permission).name());
				__parameters__[0] = (MonoObject*)name;
				__parameters__[1] = (MonoObject*)data;
				__parameters__[2] = (MonoObject*)permission;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetData(const char *name, mscorlib::System::Object data, mscorlib::System::Security::IPermission permission)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(data).name());
				__parameter_types__[2] = Global::GetType(typeid(permission).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), name);
				__parameters__[1] = (MonoObject*)data;
				__parameters__[2] = (MonoObject*)permission;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetData", __native_object__, 3, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetDynamicBase(mscorlib::System::String path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(path).name());
				__parameters__[0] = (MonoObject*)path;
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetDynamicBase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		void AppDomain::SetDynamicBase(const char *path)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), path);
				Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "SetDynamicBase", __native_object__, 1, __parameter_types__, __parameters__, NULL);
		}

		mscorlib::System::Int32 AppDomain::GetCurrentThreadId()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "GetCurrentThreadId", NullMonoObject, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::String AppDomain::ToString()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String AppDomain::ApplyPolicy(mscorlib::System::String assemblyName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ApplyPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::String AppDomain::ApplyPolicy(const char *assemblyName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ApplyPolicy", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::String(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(mscorlib::System::String friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, mscorlib::System::String appBasePath, mscorlib::System::String appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles, mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> adInit, std::vector<mscorlib::System::String*> adInitArgs)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType(typeid(friendlyName).name());
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType(typeid(appBasePath).name());
				__parameter_types__[3] = Global::GetType(typeid(appRelativeSearchPath).name());
				__parameter_types__[4] = Global::GetType(typeid(shadowCopyFiles).name());
				__parameter_types__[5] = Global::GetType(typeid(adInit).name());
				__parameter_types__[6] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)friendlyName;
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = (MonoObject*)appBasePath;
				__parameters__[3] = (MonoObject*)appRelativeSearchPath;
				__parameters__[4] = reinterpret_cast<void*>(shadowCopyFiles);
				__parameters__[5] = &adInit;
				__parameters__[6] = Global::FromArray<mscorlib::System::String*>(adInitArgs, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::AppDomain AppDomain::CreateDomain(const char *friendlyName, mscorlib::System::Security::Policy::Evidence securityInfo, const char *appBasePath, const char *appRelativeSearchPath, mscorlib::System::Boolean shadowCopyFiles, mscorlib::Callback<void  (std::vector<mscorlib::System::String*> )> adInit, std::vector<mscorlib::System::String*> adInitArgs)
		{
				MonoType *__parameter_types__[7];
				void *__parameters__[7];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(securityInfo).name());
				__parameter_types__[2] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[3] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[4] = Global::GetType(typeid(shadowCopyFiles).name());
				__parameter_types__[5] = Global::GetType(typeid(adInit).name());
				__parameter_types__[6] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), friendlyName);
				__parameters__[1] = (MonoObject*)securityInfo;
				__parameters__[2] = mono_string_new(Global::GetDomain(), appBasePath);
				__parameters__[3] = mono_string_new(Global::GetDomain(), appRelativeSearchPath);
				__parameters__[4] = reinterpret_cast<void*>(shadowCopyFiles);
				__parameters__[5] = &adInit;
				__parameters__[6] = Global::FromArray<mscorlib::System::String*>(adInitArgs, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "CreateDomain", NullMonoObject, 7, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::AppDomain(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(mscorlib::System::String assemblyName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(const char *assemblyName)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(mscorlib::System::String assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(const char *assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = (MonoObject*)assemblySecurity;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(mscorlib::System::String assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(const char *assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(mscorlib::System::Reflection::AssemblyName assemblyName, mscorlib::System::Security::Policy::Evidence assemblySecurity, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblySecurity).name());
				__parameter_types__[2] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)assemblySecurity;
				__parameters__[2] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 3, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(mscorlib::System::String assemblyName, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(const char *assemblyName, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyName);
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Int32 AppDomain::ExecuteAssemblyByName(mscorlib::System::Reflection::AssemblyName assemblyName, std::vector<mscorlib::System::String*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = mono_class_get_type(mono_array_class_get(mono_class_from_mono_type(Global::GetType("mscorlib", "System", "String")), 1));
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(args, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ExecuteAssemblyByName", __native_object__, 2, __parameter_types__, __parameters__, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}

		mscorlib::System::Boolean AppDomain::IsDefaultAppDomain()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "IsDefaultAppDomain", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		std::vector<mscorlib::System::Reflection::Assembly*> AppDomain::ReflectionOnlyGetAssemblies()
		{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "ReflectionOnlyGetAssemblies", __native_object__, 0, NULL, NULL, NULL);
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

		mscorlib::System::Nullable<mscorlib::System::Boolean> AppDomain::IsCompatibilitySwitchSet(mscorlib::System::String value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(value).name());
				__parameters__[0] = (MonoObject*)value;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "IsCompatibilitySwitchSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Nullable<mscorlib::System::Boolean>(__result__);
		}

		mscorlib::System::Nullable<mscorlib::System::Boolean> AppDomain::IsCompatibilitySwitchSet(const char *value)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType("mscorlib", "System", "String");
				__parameters__[0] = mono_string_new(Global::GetDomain(), value);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "IsCompatibilitySwitchSet", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Nullable<mscorlib::System::Boolean>(__result__);
		}

		//Get Set Properties Methods
		//	Get:SetupInformation
		mscorlib::System::AppDomainSetup  AppDomain::get_SetupInformation() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_SetupInformation", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::AppDomainSetup(__result__);
		}


		//	Get:ApplicationTrust
		mscorlib::System::Security::Policy::ApplicationTrust  AppDomain::get_ApplicationTrust() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_ApplicationTrust", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Security::Policy::ApplicationTrust(__result__);
		}


		//	Get:BaseDirectory
		mscorlib::System::String  AppDomain::get_BaseDirectory() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_BaseDirectory", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:RelativeSearchPath
		mscorlib::System::String  AppDomain::get_RelativeSearchPath() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_RelativeSearchPath", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:DynamicDirectory
		mscorlib::System::String  AppDomain::get_DynamicDirectory() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_DynamicDirectory", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:ShadowCopyFiles
		mscorlib::System::Boolean  AppDomain::get_ShadowCopyFiles() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_ShadowCopyFiles", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:FriendlyName
		mscorlib::System::String  AppDomain::get_FriendlyName() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_FriendlyName", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:Evidence
		mscorlib::System::Security::Policy::Evidence  AppDomain::get_Evidence() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_Evidence", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Security::Policy::Evidence(__result__);
		}


		//	Get:PermissionSet
		mscorlib::System::Security::PermissionSet  AppDomain::get_PermissionSet() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_PermissionSet", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Security::PermissionSet(__result__);
		}


		//	Get:IsHomogenous
		mscorlib::System::Boolean  AppDomain::get_IsHomogenous() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_IsHomogenous", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:IsFullyTrusted
		mscorlib::System::Boolean  AppDomain::get_IsFullyTrusted() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_IsFullyTrusted", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}


		//	Get:DomainManager
		mscorlib::System::AppDomainManager  AppDomain::get_DomainManager() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_DomainManager", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::AppDomainManager(__result__);
		}


		//	Get:ActivationContext
		mscorlib::System::ActivationContext  AppDomain::get_ActivationContext() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_ActivationContext", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::ActivationContext(__result__);
		}


		//	Get:ApplicationIdentity
		mscorlib::System::ApplicationIdentity  AppDomain::get_ApplicationIdentity() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_ApplicationIdentity", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::ApplicationIdentity(__result__);
		}


		//	Get:Id
		mscorlib::System::Int32  AppDomain::get_Id() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_Id", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
		}


		//	Get:MonitoringSurvivedMemorySize
		mscorlib::System::Int64  AppDomain::get_MonitoringSurvivedMemorySize() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_MonitoringSurvivedMemorySize", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:MonitoringTotalAllocatedMemorySize
		mscorlib::System::Int64  AppDomain::get_MonitoringTotalAllocatedMemorySize() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_MonitoringTotalAllocatedMemorySize", __native_object__, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}


		//	Get:MonitoringTotalProcessorTime
		mscorlib::System::TimeSpan  AppDomain::get_MonitoringTotalProcessorTime() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_MonitoringTotalProcessorTime", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::TimeSpan(__result__);
		}


		//Get Set Static Properties Methods
		//	Get:CurrentDomain
		mscorlib::System::AppDomain  AppDomain::get_CurrentDomain()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_CurrentDomain", NullMonoObject, 0, NULL, NULL, NULL);
			return mscorlib::System::AppDomain(__result__);
		}

		void AppDomain::set_CurrentDomain(mscorlib::System::AppDomain  value)
		{
			throw;
		}


		//	Get/Set:MonitoringIsEnabled
		mscorlib::System::Boolean  AppDomain::get_MonitoringIsEnabled()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_MonitoringIsEnabled", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
		}

		void AppDomain::set_MonitoringIsEnabled(mscorlib::System::Boolean  value)
		{
			MonoType *__parameter_types__[1];
			void *__parameters__[1];
			__parameter_types__[0] = Global::GetType(typeid(value).name());
			__parameters__[0] = reinterpret_cast<void*>(value);
			Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "set_MonitoringIsEnabled", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
		}


		//	Get:MonitoringSurvivedProcessMemorySize
		mscorlib::System::Int64  AppDomain::get_MonitoringSurvivedProcessMemorySize()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AppDomain", 0, NULL, "get_MonitoringSurvivedProcessMemorySize", NullMonoObject, 0, NULL, NULL, NULL);
			return *(mscorlib::System::Int64*)mono_object_unbox(__result__);
		}

		void AppDomain::set_MonitoringSurvivedProcessMemorySize(mscorlib::System::Int64  value)
		{
			throw;
		}




	}
}
