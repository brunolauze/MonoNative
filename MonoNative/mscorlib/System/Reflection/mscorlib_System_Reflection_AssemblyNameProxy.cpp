#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyNameProxy.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyName.h>
#include <mscorlib/System/mscorlib_System_String.h>
#include <mscorlib/System/Runtime/Remoting/mscorlib_System_Runtime_Remoting_ObjRef.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::Reflection::AssemblyName AssemblyNameProxy::GetAssemblyName(mscorlib::System::String assemblyFile)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyNameProxy", 0, NULL, "GetAssemblyName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::AssemblyName(__result__);
			}

			mscorlib::System::Reflection::AssemblyName AssemblyNameProxy::GetAssemblyName(const char *assemblyFile)
			{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(assemblyFile).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), assemblyFile);
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyNameProxy", 0, NULL, "GetAssemblyName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
					return mscorlib::System::Reflection::AssemblyName(__result__);
			}


		}
	}
}
