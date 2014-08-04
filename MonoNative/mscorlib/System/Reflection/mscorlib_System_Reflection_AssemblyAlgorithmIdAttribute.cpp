#include <mscorlib/System/Reflection/mscorlib_System_Reflection_AssemblyAlgorithmIdAttribute.h>
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
			//	Get:AlgorithmId
			mscorlib::System::UInt32  AssemblyAlgorithmIdAttribute::get_AlgorithmId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "AssemblyAlgorithmIdAttribute", 0, NULL, "get_AlgorithmId", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::UInt32*)mono_object_unbox(__result__);
			}


			//	Get:TypeId
			mscorlib::System::Object  AssemblyAlgorithmIdAttribute::get_TypeId()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
