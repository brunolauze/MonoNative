#include <mscorlib/System/mscorlib_System_Activator.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjectHandle.h>
#include <mscorlib/System/mscorlib_System_Byte.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Binder.h>
#include <mscorlib/System/Globalization/mscorlib_System_Globalization_CultureInfo.h>
#include <mscorlib/System/Security/Policy/mscorlib_System_Security_Policy_Evidence.h>
#include <mscorlib/System/mscorlib_System_ActivationContext.h>
#include <mscorlib/System/mscorlib_System_AppDomain.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateComInstanceFrom(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateComInstanceFrom", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateComInstanceFrom(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm)
		{
				MonoType *__parameter_types__[4];
				void *__parameters__[4];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(hashValue).name()))->eklass);
				__parameter_types__[3] = Global::GetType(typeid(hashAlgorithm).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Byte*>(hashValue, typeid(mscorlib::System::Byte).name());
				__parameters__[3] = reinterpret_cast<void*>(hashAlgorithm);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateComInstanceFrom", NullMonoObject, 4, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityInfo)
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
				__parameter_types__[8] = Global::GetType(typeid(securityInfo).name());
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityInfo;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityInfo)
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
				__parameter_types__[8] = Global::GetType(typeid(securityInfo).name());
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[8] = (MonoObject*)securityInfo;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::ActivationContext activationContext)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(activationContext).name());
				__parameters__[0] = (MonoObject*)activationContext;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::ActivationContext activationContext, std::vector<mscorlib::System::String*> activationCustomData)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(activationContext).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationCustomData).name()))->eklass);
				__parameters__[0] = (MonoObject*)activationContext;
				__parameters__[1] = Global::FromArray<mscorlib::System::String*>(activationCustomData, typeid(mscorlib::System::String).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyFile, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[2] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)domain;
				__parameters__[1] = (MonoObject*)assemblyFile;
				__parameters__[2] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[10];
				void *__parameters__[10];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[2] = Global::GetType(typeid(typeName).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[5] = Global::GetType(typeid(binder).name());
				__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[7] = Global::GetType(typeid(culture).name());
				__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameter_types__[9] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)domain;
				__parameters__[1] = (MonoObject*)assemblyFile;
				__parameters__[2] = (MonoObject*)typeName;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[5] = (MonoObject*)binder;
				__parameters__[6] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[7] = (MonoObject*)culture;
				__parameters__[8] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[9] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 10, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyName, mscorlib::System::String typeName)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[2] = Global::GetType(typeid(typeName).name());
				__parameters__[0] = (MonoObject*)domain;
				__parameters__[1] = (MonoObject*)assemblyName;
				__parameters__[2] = (MonoObject*)typeName;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes)
		{
				MonoType *__parameter_types__[10];
				void *__parameters__[10];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[2] = Global::GetType(typeid(typeName).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[5] = Global::GetType(typeid(binder).name());
				__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[7] = Global::GetType(typeid(culture).name());
				__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameter_types__[9] = Global::GetType(typeid(securityAttributes).name());
				__parameters__[0] = (MonoObject*)domain;
				__parameters__[1] = (MonoObject*)assemblyName;
				__parameters__[2] = (MonoObject*)typeName;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[5] = (MonoObject*)binder;
				__parameters__[6] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[7] = (MonoObject*)culture;
				__parameters__[8] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				__parameters__[9] = (MonoObject*)securityAttributes;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 10, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Object Activator::CreateInstance(mscorlib::System::Type type)
		{
				MonoType *__parameter_types__[1];
				void *__parameters__[1];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameters__[0] = (MonoObject*)type;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::CreateInstance(mscorlib::System::Type type, std::vector<mscorlib::System::Object*> args)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::CreateInstance(mscorlib::System::Type type, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[2] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[2] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::CreateInstance(mscorlib::System::Type type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture)
		{
				MonoType *__parameter_types__[5];
				void *__parameters__[5];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[4] = Global::GetType(typeid(culture).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[4] = (MonoObject*)culture;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 5, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::CreateInstance(mscorlib::System::Type type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[6];
				void *__parameters__[6];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[2] = Global::GetType(typeid(binder).name());
				__parameter_types__[3] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[4] = Global::GetType(typeid(culture).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[2] = (MonoObject*)binder;
				__parameters__[3] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[4] = (MonoObject*)culture;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 6, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::CreateInstance(mscorlib::System::Type type, mscorlib::System::Boolean nonPublic)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(nonPublic).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = reinterpret_cast<void*>(nonPublic);
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::GetObject(mscorlib::System::Type type, mscorlib::System::String url)
		{
				MonoType *__parameter_types__[2];
				void *__parameters__[2];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(url).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)url;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "GetObject", NullMonoObject, 2, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Object Activator::GetObject(mscorlib::System::Type type, mscorlib::System::String url, mscorlib::System::Object state)
		{
				MonoType *__parameter_types__[3];
				void *__parameters__[3];
				__parameter_types__[0] = Global::GetType(typeid(type).name());
				__parameter_types__[1] = Global::GetType(typeid(url).name());
				__parameter_types__[2] = Global::GetType(typeid(state).name());
				__parameters__[0] = (MonoObject*)type;
				__parameters__[1] = (MonoObject*)url;
				__parameters__[2] = (MonoObject*)state;
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "GetObject", NullMonoObject, 3, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Object(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyName;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstance(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyName).name());
				__parameter_types__[2] = Global::GetType(typeid(typeName).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[5] = Global::GetType(typeid(binder).name());
				__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[7] = Global::GetType(typeid(culture).name());
				__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)domain;
				__parameters__[1] = (MonoObject*)assemblyName;
				__parameters__[2] = (MonoObject*)typeName;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[5] = (MonoObject*)binder;
				__parameters__[6] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[7] = (MonoObject*)culture;
				__parameters__[8] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[8];
				void *__parameters__[8];
				__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[1] = Global::GetType(typeid(typeName).name());
				__parameter_types__[2] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[3] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[4] = Global::GetType(typeid(binder).name());
				__parameter_types__[5] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[6] = Global::GetType(typeid(culture).name());
				__parameter_types__[7] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)assemblyFile;
				__parameters__[1] = (MonoObject*)typeName;
				__parameters__[2] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[3] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[4] = (MonoObject*)binder;
				__parameters__[5] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[6] = (MonoObject*)culture;
				__parameters__[7] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 8, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}

		mscorlib::System::Runtime::Remoting::ObjectHandle Activator::CreateInstanceFrom(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes)
		{
				MonoType *__parameter_types__[9];
				void *__parameters__[9];
				__parameter_types__[0] = Global::GetType(typeid(domain).name());
				__parameter_types__[1] = Global::GetType(typeid(assemblyFile).name());
				__parameter_types__[2] = Global::GetType(typeid(typeName).name());
				__parameter_types__[3] = Global::GetType(typeid(ignoreCase).name());
				__parameter_types__[4] = Global::GetType(typeid(bindingAttr).name());
				__parameter_types__[5] = Global::GetType(typeid(binder).name());
				__parameter_types__[6] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(args).name()))->eklass);
				__parameter_types__[7] = Global::GetType(typeid(culture).name());
				__parameter_types__[8] = mono_class_get_type(mono_type_get_array_type(Global::GetType(typeid(activationAttributes).name()))->eklass);
				__parameters__[0] = (MonoObject*)domain;
				__parameters__[1] = (MonoObject*)assemblyFile;
				__parameters__[2] = (MonoObject*)typeName;
				__parameters__[3] = reinterpret_cast<void*>(ignoreCase);
				__parameters__[4] = reinterpret_cast<void*>(bindingAttr);
				__parameters__[5] = (MonoObject*)binder;
				__parameters__[6] = Global::FromArray<mscorlib::System::Object*>(args, typeid(mscorlib::System::Object).name());
				__parameters__[7] = (MonoObject*)culture;
				__parameters__[8] = Global::FromArray<mscorlib::System::Object*>(activationAttributes, typeid(mscorlib::System::Object).name());
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstanceFrom", NullMonoObject, 9, __parameter_types__, __parameters__, NULL);
				return mscorlib::System::Runtime::Remoting::ObjectHandle(__result__);
		}


	}
}
