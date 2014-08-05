#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_ACTIVATOR_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_ACTIVATOR_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices__Activator.h>
#include <mscorlib/System/Configuration/Assemblies/mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorithm.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_BindingFlags.h>

namespace mscorlib
{
	namespace System
	{

		class Type;
		class String;
		class Byte;
		class ActivationContext;
		class AppDomain;
		

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
		namespace Security
		{
			namespace Policy
			{

				class Evidence;
				

			}
		}
	}
}
namespace mscorlib
{
	namespace System
	{

		class Activator
			: public mscorlib::System::Object
			, public virtual mscorlib::System::Runtime::InteropServices::_Activator
		{
		public:
			Activator(mscorlib::NativeTypeInfo *nativeTypeInfo)
			: mscorlib::System::Object(nativeTypeInfo)
			, mscorlib::System::Runtime::InteropServices::_Activator(NULL)
			{
			};
		
			Activator(MonoObject *nativeObject)
			: mscorlib::System::Object(nativeObject)
			, mscorlib::System::Runtime::InteropServices::_Activator(nativeObject)
			{
			};
		
			~Activator()
			{
			};
		

			Activator & operator=(Activator &value) { __native_object__ = value.GetNativeObject(); return value; };
			operator MonoObject*() { return __native_object__; };
			MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(const char *assemblyName, const char *typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateComInstanceFrom(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Byte*> hashValue, mscorlib::System::Configuration::Assemblies::AssemblyHashAlgorithm::__ENUM__ hashAlgorithm);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityInfo);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityInfo);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityInfo);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityInfo);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::ActivationContext activationContext);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::ActivationContext activationContext, std::vector<mscorlib::System::String*> activationCustomData);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyFile, mscorlib::System::String typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::AppDomain domain, const char *assemblyFile, const char *typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::AppDomain domain, const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyName, mscorlib::System::String typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::AppDomain domain, const char *assemblyName, const char *typeName);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::AppDomain domain, const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes, mscorlib::System::Security::Policy::Evidence securityAttributes);
			template<typename T>
			static T  CreateInstance()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Activator", 0, NULL, "CreateInstance", NullMonoObject, 0, NULL, NULL, NULL);
				return T(__result__);
			};
			
			static mscorlib::System::Object  CreateInstance(mscorlib::System::Type type);
			static mscorlib::System::Object  CreateInstance(mscorlib::System::Type type, std::vector<mscorlib::System::Object*> args);
			static mscorlib::System::Object  CreateInstance(mscorlib::System::Type type, std::vector<mscorlib::System::Object*> args, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Object  CreateInstance(mscorlib::System::Type type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture);
			static mscorlib::System::Object  CreateInstance(mscorlib::System::Type type, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Object  CreateInstance(mscorlib::System::Type type, mscorlib::System::Boolean nonPublic);
			static mscorlib::System::Object  GetObject(mscorlib::System::Type type, mscorlib::System::String url);
			static mscorlib::System::Object  GetObject(mscorlib::System::Type type, const char *url);
			static mscorlib::System::Object  GetObject(mscorlib::System::Type type, mscorlib::System::String url, mscorlib::System::Object state);
			static mscorlib::System::Object  GetObject(mscorlib::System::Type type, const char *url, mscorlib::System::Object state);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyName, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstance(mscorlib::System::AppDomain domain, const char *assemblyName, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::AppDomain domain, mscorlib::System::String assemblyFile, mscorlib::System::String typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			static mscorlib::System::Runtime::Remoting::ObjectHandle  CreateInstanceFrom(mscorlib::System::AppDomain domain, const char *assemblyFile, const char *typeName, mscorlib::System::Boolean ignoreCase, mscorlib::System::Reflection::BindingFlags::__ENUM__ bindingAttr, mscorlib::System::Reflection::Binder binder, std::vector<mscorlib::System::Object*> args, mscorlib::System::Globalization::CultureInfo culture, std::vector<mscorlib::System::Object*> activationAttributes);
			virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


		
		protected:
		
		private:
		
		};

	}
}
#endif
