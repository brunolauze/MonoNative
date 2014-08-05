#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_StructLayoutAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Runtime
		{
			namespace InteropServices
			{

				//Public Methods
				//Get Set Properties Methods
				//	Get:Value
				mscorlib::System::Runtime::InteropServices::LayoutKind::__ENUM__  StructLayoutAttribute::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "StructLayoutAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return static_cast<mscorlib::System::Runtime::InteropServices::LayoutKind::__ENUM__>(*(mscorlib::System::Runtime::InteropServices::LayoutKind::__ENUM__*)mono_object_unbox(__result__));
				}


				//	Get:TypeId
				mscorlib::System::Object  StructLayoutAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get/Set:CharSet
				mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ StructLayoutAttribute::get_CharSet() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "CharSet"));
				}

				void StructLayoutAttribute::set_CharSet(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  value)
				{
				}

				//	Get/Set:Pack
				mscorlib::System::Int32 StructLayoutAttribute::get_Pack() const
				{
					return Global::GetFieldInt32Value(__native_object__, "Pack");
				}

				void StructLayoutAttribute::set_Pack(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:Size
				mscorlib::System::Int32 StructLayoutAttribute::get_Size() const
				{
					return Global::GetFieldInt32Value(__native_object__, "Size");
				}

				void StructLayoutAttribute::set_Size(mscorlib::System::Int32  value)
				{
				}


			}
		}
	}
}
