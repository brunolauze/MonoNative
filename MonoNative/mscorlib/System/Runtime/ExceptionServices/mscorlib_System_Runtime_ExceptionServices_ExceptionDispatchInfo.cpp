#include <mscorlib/System/Runtime/ExceptionServices/mscorlib_System_Runtime_ExceptionServices_ExceptionDispatchInfo.h>
#include <mscorlib/System/mscorlib_System_Exception.h>
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
				mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo ExceptionDispatchInfo::Capture(mscorlib::System::Exception source)
				{
						MonoType *__parameter_types__[1];
						void *__parameters__[1];
						__parameter_types__[0] = Global::GetType(typeid(source).name());
						__parameters__[0] = (MonoObject*)source;
						MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.ExceptionServices", "ExceptionDispatchInfo", 0, NULL, "Capture", NullMonoObject, 1, __parameter_types__, __parameters__, NULL);
						return mscorlib::System::Runtime::ExceptionServices::ExceptionDispatchInfo(__result__);
				}

				void ExceptionDispatchInfo::Throw()
				{
						Global::InvokeMethod("mscorlib", "System.Runtime.ExceptionServices", "ExceptionDispatchInfo", 0, NULL, "Throw", __native_object__, 0, NULL, NULL, NULL);
				}

				//Get Set Properties Methods
				//	Get:SourceException
				mscorlib::System::Exception  ExceptionDispatchInfo::get_SourceException() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.ExceptionServices", "ExceptionDispatchInfo", 0, NULL, "get_SourceException", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Exception(__result__);
				}



			}
		}
	}
}
