#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_ComCompatibleVersionAttribute.h>
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
				//	Get:MajorVersion
				mscorlib::System::Int32  ComCompatibleVersionAttribute::get_MajorVersion()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute", 0, NULL, "get_MajorVersion", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:MinorVersion
				mscorlib::System::Int32  ComCompatibleVersionAttribute::get_MinorVersion()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute", 0, NULL, "get_MinorVersion", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:BuildNumber
				mscorlib::System::Int32  ComCompatibleVersionAttribute::get_BuildNumber()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute", 0, NULL, "get_BuildNumber", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:RevisionNumber
				mscorlib::System::Int32  ComCompatibleVersionAttribute::get_RevisionNumber()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "ComCompatibleVersionAttribute", 0, NULL, "get_RevisionNumber", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  ComCompatibleVersionAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
