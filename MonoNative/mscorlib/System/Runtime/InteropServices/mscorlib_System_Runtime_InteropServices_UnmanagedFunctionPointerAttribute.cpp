#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute.h>
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
				//	Get:CallingConvention
				mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  UnmanagedFunctionPointerAttribute::get_CallingConvention() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute", 0, NULL, "get_CallingConvention", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__*)mono_object_unbox(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  UnmanagedFunctionPointerAttribute::get_TypeId() const
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get/Set:CharSet
				mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ UnmanagedFunctionPointerAttribute::get_CharSet() const
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "CharSet"));
				}

				void UnmanagedFunctionPointerAttribute::set_CharSet(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  value)
				{
				}

				//	Get/Set:SetLastError
				mscorlib::System::Boolean UnmanagedFunctionPointerAttribute::get_SetLastError() const
				{
					return Global::GetFieldBooleanValue(__native_object__, "SetLastError");
				}

				void UnmanagedFunctionPointerAttribute::set_SetLastError(mscorlib::System::Boolean  value)
				{
				}

				//	Get/Set:BestFitMapping
				mscorlib::System::Boolean UnmanagedFunctionPointerAttribute::get_BestFitMapping() const
				{
					return Global::GetFieldBooleanValue(__native_object__, "BestFitMapping");
				}

				void UnmanagedFunctionPointerAttribute::set_BestFitMapping(mscorlib::System::Boolean  value)
				{
				}

				//	Get/Set:ThrowOnUnmappableChar
				mscorlib::System::Boolean UnmanagedFunctionPointerAttribute::get_ThrowOnUnmappableChar() const
				{
					return Global::GetFieldBooleanValue(__native_object__, "ThrowOnUnmappableChar");
				}

				void UnmanagedFunctionPointerAttribute::set_ThrowOnUnmappableChar(mscorlib::System::Boolean  value)
				{
				}


			}
		}
	}
}
