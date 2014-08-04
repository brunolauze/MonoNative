#ifndef __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_IREGISTRATIONSERVICES_H
#define __MONO_NATIVE_MSCORLIB_SYSTEM_RUNTIME_INTEROPSERVICES_IREGISTRATIONSERVICES_H

#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_AssemblyRegistrationFlags.h>
#include <Global.h>

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

				class IRegistrationServices
				{
				public:
					IRegistrationServices(MonoObject *nativeObject)
					{
						__mscorlib_System_Runtime_InteropServices_IRegistrationServices = nativeObject;
					};
				
					~IRegistrationServices()
					{
					};
				

					IRegistrationServices & operator=(IRegistrationServices &value) { __mscorlib_System_Runtime_InteropServices_IRegistrationServices = value.__mscorlib_System_Runtime_InteropServices_IRegistrationServices; return value; };
					operator MonoObject*() { return __mscorlib_System_Runtime_InteropServices_IRegistrationServices; };
					MonoObject* operator=(MonoObject* value) { __mscorlib_System_Runtime_InteropServices_IRegistrationServices = value; return value; };


					virtual mscorlib::System::Guid  GetManagedCategoryGuid();
					virtual mscorlib::System::String  GetProgIdForType(mscorlib::System::Type type);
					virtual std::vector<mscorlib::System::Type*>  GetRegistrableTypesInAssembly(mscorlib::System::Reflection::Assembly assembly);
					virtual mscorlib::System::Boolean  RegisterAssembly(mscorlib::System::Reflection::Assembly assembly, mscorlib::System::Runtime::InteropServices::AssemblyRegistrationFlags::__ENUM__ flags);
					virtual void  RegisterTypeForComClients(mscorlib::System::Type type, mscorlib::System::Guid g);
					virtual mscorlib::System::Boolean  TypeRepresentsComType(mscorlib::System::Type type);
					virtual mscorlib::System::Boolean  TypeRequiresRegistration(mscorlib::System::Type type);
					virtual mscorlib::System::Boolean  UnregisterAssembly(mscorlib::System::Reflection::Assembly assembly);


				
				protected:
					MonoObject *__mscorlib_System_Runtime_InteropServices_IRegistrationServices;
				
				private:
				
				};

			}
		}
	}
}
#endif
