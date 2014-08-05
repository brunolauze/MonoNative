#include <mscorlib/System/Runtime/ExceptionServices/mscorlib_System_Runtime_ExceptionServices_FirstChanceExceptionEventArgs.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace ExceptionServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:Exception
				mscorlib::System::Exception  FirstChanceExceptionEventArgs::get_Exception() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs", 0, NULL, "get_Exception", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Exception(__result__);
				}



			}
		}
	}
}
