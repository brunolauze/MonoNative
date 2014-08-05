#include <mscorlib/System/Runtime/Serialization/mscorlib_System_Runtime_Serialization_OptionalFieldAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace Serialization
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get/Set:VersionAdded
				mscorlib::System::Int32  OptionalFieldAttribute::get_VersionAdded() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "OptionalFieldAttribute", 0, NULL, "get_VersionAdded", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
				}

				void OptionalFieldAttribute::set_VersionAdded(mscorlib::System::Int32  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = &value;
					Global::InvokeMethod("mscorlib", "System.Runtime.Serialization", "OptionalFieldAttribute", 0, NULL, "set_VersionAdded", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  OptionalFieldAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
