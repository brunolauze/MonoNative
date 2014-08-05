#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ComEventInterfaceAttribute.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:EventProvider
				mscorlib::System::Type  ComEventInterfaceAttribute::get_EventProvider() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComEventInterfaceAttribute", 0, NULL, "get_EventProvider", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:SourceInterface
				mscorlib::System::Type  ComEventInterfaceAttribute::get_SourceInterface() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComEventInterfaceAttribute", 0, NULL, "get_SourceInterface", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Type(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ComEventInterfaceAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
