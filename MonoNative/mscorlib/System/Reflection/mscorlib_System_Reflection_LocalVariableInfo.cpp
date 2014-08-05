#include <mscorlib/System/Reflection/mscorlib_System_Reflection_LocalVariableInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::String LocalVariableInfo::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "LocalVariableInfo", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:IsPinned
			mscorlib::System::Boolean  LocalVariableInfo::get_IsPinned() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "LocalVariableInfo", 0, NULL, "get_IsPinned", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
			}


			//	Get:LocalIndex
			mscorlib::System::Int32  LocalVariableInfo::get_LocalIndex() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "LocalVariableInfo", 0, NULL, "get_LocalIndex", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:LocalType
			mscorlib::System::Type  LocalVariableInfo::get_LocalType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "LocalVariableInfo", 0, NULL, "get_LocalType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}



		}
	}
}
