#include <mscorlib/System/Reflection/mscorlib_System_Reflection_Missing.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
				//	Get/Set:Value
			mscorlib::System::Reflection::Missing Missing::get_Value()
			{
				return Global::GetFieldValue("mscorlib", "System.Reflection", "Missing", 0, NULL, "Value");
			}

			void Missing::set_Value(mscorlib::System::Reflection::Missing  value)
			{
				throw;
			}


		}
	}
}
