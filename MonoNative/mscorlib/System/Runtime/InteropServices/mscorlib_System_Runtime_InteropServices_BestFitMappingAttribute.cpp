#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_BestFitMappingAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
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
				//	Get:BestFitMapping
				mscorlib::System::Boolean  BestFitMappingAttribute::get_BestFitMapping()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "BestFitMappingAttribute", 0, NULL, "get_BestFitMapping", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Boolean*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  BestFitMappingAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get/Set:ThrowOnUnmappableChar
				mscorlib::System::Boolean BestFitMappingAttribute::get_ThrowOnUnmappableChar()
				{
					return Global::GetFieldBooleanValue(__native_object__, "ThrowOnUnmappableChar");
				}

				void BestFitMappingAttribute::set_ThrowOnUnmappableChar(mscorlib::System::Boolean  value)
				{
				}


			}
		}
	}
}
