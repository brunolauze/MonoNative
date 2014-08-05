#include <mscorlib/System/mscorlib_System_EventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
			//	Get/Set:Empty
		mscorlib::System::EventArgs EventArgs::get_Empty()
		{
			return Global::GetFieldValue("mscorlib", "System", "EventArgs", 0, NULL, "Empty");
		}

		void EventArgs::set_Empty(mscorlib::System::EventArgs  value)
		{
			throw;
		}


	}
}
