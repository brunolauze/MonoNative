#include <mscorlib/System/mscorlib_System_LoaderOptimizationAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{

		//Public Methods
		//Get Set Properties Methods
		//	Get:Value
		mscorlib::System::LoaderOptimization::__ENUM__  LoaderOptimizationAttribute::get_Value() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "LoaderOptimizationAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
			return static_cast<mscorlib::System::LoaderOptimization::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
		}


		//	Get:TypeId
		mscorlib::System::Object  LoaderOptimizationAttribute::get_TypeId() const
		{
			MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
			return mscorlib::System::Object(__result__);
		}



	}
}
