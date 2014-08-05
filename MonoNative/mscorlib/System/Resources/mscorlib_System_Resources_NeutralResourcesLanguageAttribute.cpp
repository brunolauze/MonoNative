#include <mscorlib/System/Resources/mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Resources
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:CultureName
			mscorlib::System::String  NeutralResourcesLanguageAttribute::get_CultureName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "NeutralResourcesLanguageAttribute", 0, NULL, "get_CultureName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:Location
			mscorlib::System::Resources::UltimateResourceFallbackLocation::__ENUM__  NeutralResourcesLanguageAttribute::get_Location() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Resources", "NeutralResourcesLanguageAttribute", 0, NULL, "get_Location", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Resources::UltimateResourceFallbackLocation::__ENUM__>(*(mscorlib::System::Resources::UltimateResourceFallbackLocation::__ENUM__*)mono_object_unbox(__result__));
			}


			//	Get:TypeId
			mscorlib::System::Object  NeutralResourcesLanguageAttribute::get_TypeId() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Object(__result__);
			}



		}
	}
}
