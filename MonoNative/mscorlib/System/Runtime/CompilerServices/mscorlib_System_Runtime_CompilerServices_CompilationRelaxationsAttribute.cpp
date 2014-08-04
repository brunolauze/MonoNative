#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_CompilationRelaxationsAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:CompilationRelaxations
				mscorlib::System::Int32  CompilationRelaxationsAttribute::get_CompilationRelaxations()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute", 0, NULL, "get_CompilationRelaxations", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  CompilationRelaxationsAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
