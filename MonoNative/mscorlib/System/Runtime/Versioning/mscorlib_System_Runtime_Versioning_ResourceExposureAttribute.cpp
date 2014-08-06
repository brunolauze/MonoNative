#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_ResourceExposureAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Versioning
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:ResourceExposureLevel
				mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  ResourceExposureAttribute::get_ResourceExposureLevel() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "ResourceExposureAttribute", 0, NULL, "get_ResourceExposureLevel", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  ResourceExposureAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
