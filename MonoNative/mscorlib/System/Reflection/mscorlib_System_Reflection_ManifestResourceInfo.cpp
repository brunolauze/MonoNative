#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ManifestResourceInfo.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			//Get Set Properties Methods
			//	Get:FileName
			mscorlib::System::String  ManifestResourceInfo::get_FileName() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ManifestResourceInfo", 0, NULL, "get_FileName", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::String(__result__);
			}


			//	Get:ReferencedAssembly
			mscorlib::System::Reflection::Assembly  ManifestResourceInfo::get_ReferencedAssembly() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ManifestResourceInfo", 0, NULL, "get_ReferencedAssembly", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Reflection::Assembly(__result__);
			}


			//	Get:ResourceLocation
			mscorlib::System::Reflection::ResourceLocation::__ENUM__  ManifestResourceInfo::get_ResourceLocation() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ManifestResourceInfo", 0, NULL, "get_ResourceLocation", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Reflection::ResourceLocation::__ENUM__>(*(mscorlib::System::Reflection::ResourceLocation::__ENUM__*)mono_object_unbox(__result__));
			}



		}
	}
}
