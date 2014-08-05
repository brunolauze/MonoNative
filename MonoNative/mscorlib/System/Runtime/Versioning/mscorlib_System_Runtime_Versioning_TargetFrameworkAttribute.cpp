#include <mscorlib/System/Runtime/Versioning/mscorlib_System_Runtime_Versioning_TargetFrameworkAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
				//	Get/Set:FrameworkName
				mscorlib::System::String  TargetFrameworkAttribute::get_FrameworkName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "TargetFrameworkAttribute", 0, NULL, "get_FrameworkName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void TargetFrameworkAttribute::set_FrameworkName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "TargetFrameworkAttribute", 0, NULL, "set_FrameworkName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get/Set:FrameworkDisplayName
				mscorlib::System::String  TargetFrameworkAttribute::get_FrameworkDisplayName() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "TargetFrameworkAttribute", 0, NULL, "get_FrameworkDisplayName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}

				void TargetFrameworkAttribute::set_FrameworkDisplayName(mscorlib::System::String  value)
				{
					MonoType *__parameter_types__[1];
					void *__parameters__[1];
					__parameter_types__[0] = Global::GetType(typeid(value).name());
					__parameters__[0] = mono_string_new(Global::GetDomain(), value);
					Global::InvokeMethod("mscorlib", "System.Runtime.Versioning", "TargetFrameworkAttribute", 0, NULL, "set_FrameworkDisplayName", __native_object__, 1, __parameter_types__, __parameters__, NULL);
				}


				//	Get:TypeId
				mscorlib::System::Object  TargetFrameworkAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
