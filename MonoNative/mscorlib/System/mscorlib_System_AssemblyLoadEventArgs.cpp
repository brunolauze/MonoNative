#include <mscorlib/System/mscorlib_System_AssemblyLoadEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get:LoadedAssembly
		mscorlib::System::Reflection::Assembly  AssemblyLoadEventArgs::get_LoadedAssembly()
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "AssemblyLoadEventArgs", 0, NULL, "get_LoadedAssembly", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::Assembly(__result__);
		}



	}
}
