#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_ComponentGuaranteesAttribute.h>
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
				//	Get:Guarantees
				mscorlib::System::Runtime::Versioning::ComponentGuaranteesOptions::__ENUM__  ComponentGuaranteesAttribute::get_Guarantees() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "ComponentGuaranteesAttribute", 0, NULL, "get_Guarantees", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::Versioning::ComponentGuaranteesOptions::__ENUM__>(*(mscorlib::System::Runtime::Versioning::ComponentGuaranteesOptions::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  ComponentGuaranteesAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
