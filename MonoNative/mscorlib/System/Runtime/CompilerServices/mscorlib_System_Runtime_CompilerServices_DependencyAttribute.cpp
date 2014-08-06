#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_DependencyAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace CompilerServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:DependentAssembly
				mscorlib::System::String  DependencyAttribute::get_DependentAssembly() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "DependencyAttribute", 0, NULL, "get_DependentAssembly", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:LoadHint
				mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__  DependencyAttribute::get_LoadHint() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "DependencyAttribute", 0, NULL, "get_LoadHint", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::CompilerServices::LoadHint::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  DependencyAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}



			}
		}
	}
}
