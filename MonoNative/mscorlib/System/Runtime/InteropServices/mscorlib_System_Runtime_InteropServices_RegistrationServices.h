#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_REGISTRATIONSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_REGISTRATIONSERVICES_H

#include <mscorlib/System/mscorlib_System_Object.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_IRegistrationServices.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_AssemblyRegistrationFlags.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_RegistrationClassContext.h>
#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_RegistrationConnectionType.h>

namespace mscorlib
{
	namespace System
	{

		class Guid;
		class String;
		class Type;
		

	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			class Assembly;
			

		}
	}
}
namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				class RegistrationServices
					: public mscorlib::System::Object
					, public virtual mscorlib::System::Runtime::InteropServices::IRegistrationServices
				{
				public:
					RegistrationServices()
					: mscorlib::System::Object(mscorlib::NativeTypeInfo::GetTypeInfo("mscorlib","System.Runtime.InteropServices.RegistrationServices"))
					, mscorlib::System::Runtime::InteropServices::IRegistrationServices(NULL)
					{
						__native_object__ = Global::New("mscorlib", "System.Runtime.InteropServices", "RegistrationServices");
					};
				
					RegistrationServices(mscorlib::NativeTypeInfo *nativeTypeInfo)
					: mscorlib::System::Object(nativeTypeInfo)
					, mscorlib::System::Runtime::InteropServices::IRegistrationServices(NULL)
					{
					};
				
					RegistrationServices(MonoObject *nativeObject)
					: mscorlib::System::Object(nativeObject)
					, mscorlib::System::Runtime::InteropServices::IRegistrationServices(nativeObject)
					{
					};
				
					~RegistrationServices()
					{
					};
				

					RegistrationServices & operator=(RegistrationServices &value) { __native_object__ = value.GetNativeObject(); return value; };
					operator MonoObject*() { return __native_object__; };
					MonoObject* operator=(MonoObject* value) { return __native_object__ = value; };


					virtual mscorlib::System::Guid  GetManagedCategoryGuid();
					virtual mscorlib::System::String  GetProgIdForType(mscorlib::System::Type type);
					virtual std::vector<mscorlib::System::Type*>  GetRegistrableTypesInAssembly(mscorlib::System::Reflection::Assembly assembly);
					virtual mscorlib::System::Boolean  RegisterAssembly(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Runtime::InteropServices::AssemblyRegistrationFlags::__ENUM__ flags);
					virtual void  RegisterTypeForComClients(mscorlib::System::Type type, mscorlib::System::Guid g);
					virtual mscorlib::System::Boolean  TypeRepresentsComType(mscorlib::System::Type type);
					virtual mscorlib::System::Boolean  TypeRequiresRegistration(mscorlib::System::Type type);
					virtual mscorlib::System::Boolean  UnregisterAssembly(mscorlib::System::Reflection::Assembly assembly);
					virtual mscorlib::System::Int32  RegisterTypeForComClients(mscorlib::System::Type type, mscorlib::System::Runtime::InteropServices::RegistrationClassContext::__ENUM__ classContext, mscorlib::System::Runtime::InteropServices::RegistrationConnectionType::__ENUM__ flags);
					virtual void  UnregisterTypeForComClients(mscorlib::System::Int32 cookie);
					virtual MonoObject* GetNativeObject()  override  { return __native_object__; };


				
				protected:
				
				private:
				
				};

			}
		}
	}
}
#endif
