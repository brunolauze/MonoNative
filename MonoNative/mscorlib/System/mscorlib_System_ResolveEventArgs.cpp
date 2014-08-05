#include <mscorlib/System/mscorlib_System_ResolveEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get:Name
		mscorlib::System::String  ResolveEventArgs::get_Name() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ResolveEventArgs", 0, NULL, "get_Name", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::String(__result__);
		}


		//	Get:RequestingAssembly
		mscorlib::System::Reflection::Assembly  ResolveEventArgs::get_RequestingAssembly() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "ResolveEventArgs", 0, NULL, "get_RequestingAssembly", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Reflection::Assembly(__result__);
		}



	}
}
