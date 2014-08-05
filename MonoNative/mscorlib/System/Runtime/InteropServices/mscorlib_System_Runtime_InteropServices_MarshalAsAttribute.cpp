#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h>
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
				mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  MarshalAsAttribute::get_Value() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "MarshalAsAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  MarshalAsAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get/Set:MarshalCookie
				mscorlib::System::String MarshalAsAttribute::get_MarshalCookie() const
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "MarshalCookie"));
				}

				void MarshalAsAttribute::set_MarshalCookie(mscorlib::System::String  value)
				{
				}

				//	Get/Set:MarshalType
				mscorlib::System::String MarshalAsAttribute::get_MarshalType() const
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "MarshalType"));
				}

				void MarshalAsAttribute::set_MarshalType(mscorlib::System::String  value)
				{
				}

				//	Get/Set:MarshalTypeRef
				mscorlib::System::Type MarshalAsAttribute::get_MarshalTypeRef() const
				{
					return Global::GetFieldValue(__native_object__, "MarshalTypeRef");
				}

				void MarshalAsAttribute::set_MarshalTypeRef(mscorlib::System::Type  value)
				{
				}

				//	Get/Set:SafeArrayUserDefinedSubType
				mscorlib::System::Type MarshalAsAttribute::get_SafeArrayUserDefinedSubType() const
				{
					return Global::GetFieldValue(__native_object__, "SafeArrayUserDefinedSubType");
				}

				void MarshalAsAttribute::set_SafeArrayUserDefinedSubType(mscorlib::System::Type  value)
				{
				}

				//	Get/Set:ArraySubType
				mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__ MarshalAsAttribute::get_ArraySubType() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "ArraySubType"));
				}

				void MarshalAsAttribute::set_ArraySubType(mscorlib::System::Runtime::InteropServices::UnmanagedType::__ENUM__  value)
				{
				}

				//	Get/Set:SafeArraySubType
				mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__ MarshalAsAttribute::get_SafeArraySubType() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "SafeArraySubType"));
				}

				void MarshalAsAttribute::set_SafeArraySubType(mscorlib::System::Runtime::InteropServices::VarEnum::__ENUM__  value)
				{
				}

				//	Get/Set:SizeConst
				mscorlib::System::Int32 MarshalAsAttribute::get_SizeConst() const
				{
					return Global::GetFieldInt32Value(__native_object__, "SizeConst");
				}

				void MarshalAsAttribute::set_SizeConst(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:IidParameterIndex
				mscorlib::System::Int32 MarshalAsAttribute::get_IidParameterIndex() const
				{
					return Global::GetFieldInt32Value(__native_object__, "IidParameterIndex");
				}

				void MarshalAsAttribute::set_IidParameterIndex(mscorlib::System::Int32  value)
				{
				}

				//	Get/Set:SizeParamIndex
				mscorlib::System::Int16 MarshalAsAttribute::get_SizeParamIndex() const
				{
					return Global::GetFieldInt16Value(__native_object__, "SizeParamIndex");
				}

				void MarshalAsAttribute::set_SizeParamIndex(mscorlib::System::Int16  value)
				{
				}


			}
		}
	}
}
