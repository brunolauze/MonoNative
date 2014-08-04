#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyFlagsAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:Flags
			mscorlib::System::UInt32  AssemblyFlagsAttribute::get_Flags()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyFlagsAttribute", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
			}


			//	Get:AssemblyFlags
			mscorlib::System::Int32  AssemblyFlagsAttribute::get_AssemblyFlags()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyFlagsAttribute", 0, NULL, "get_AssemblyFlags", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyFlagsAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
