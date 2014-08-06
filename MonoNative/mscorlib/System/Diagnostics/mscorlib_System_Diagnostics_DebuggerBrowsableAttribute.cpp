#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_DebuggerBrowsableAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:State
			mscorlib::System::Diagnostics::DebuggerBrowsableState::__ENUM__  DebuggerBrowsableAttribute::get_State() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "DebuggerBrowsableAttribute", 0, NULL, "get_State", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Diagnostics::DebuggerBrowsableState::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}


			//	Get:TypeId
			mscorlib::System::Object  DebuggerBrowsableAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
