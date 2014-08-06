#include <mscorlib/System/Runtime/CompilerServices/mscorlib_System_Runtime_CompilerServices_MethodImplAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



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
				//	Get:Value
				mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__  MethodImplAttribute::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.CompilerServices", "MethodImplAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::CompilerServices::MethodImplOptions::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  MethodImplAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get/Set:MethodCodeType
				mscorlib::System::Runtime::CompilerServices::MethodCodeType::__ENUM__ MethodImplAttribute::get_MethodCodeType() const
				{
					return static_cast<mscorlib::System::Runtime::CompilerServices::MethodCodeType::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "MethodCodeType"));
				}

				void MethodImplAttribute::set_MethodCodeType(mscorlib::System::Runtime::CompilerServices::MethodCodeType::__ENUM__  value)
				{
				}


			}
		}
	}
}
