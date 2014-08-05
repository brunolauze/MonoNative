#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_ResourceConsumptionAttribute.h>
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
				//	Get:ConsumptionScope
				mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  ResourceConsumptionAttribute::get_ConsumptionScope() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "ResourceConsumptionAttribute", 0, NULL, "get_ConsumptionScope", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__>(*(mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get:ResourceScope
				mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__  ResourceConsumptionAttribute::get_ResourceScope() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "ResourceConsumptionAttribute", 0, NULL, "get_ResourceScope", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__>(*(mscorlib::System::Runtime::Versioning::ResourceScope::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  ResourceConsumptionAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
