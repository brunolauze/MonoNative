#include <mscorlib/System/Runtime/InteropServices/mscorlib_System_Runtime_InteropServices_DllImportAttribute.h>
#include <mscorlib/System/mscorlib_System_Type.h>



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
				mscorlib::System::String  DllImportAttribute::get_Value()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Runtime.InteropServices", "DllImportAttribute", 0, NULL, "get_Value", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
				}


				//	Get:TypeId
				mscorlib::System::Object  DllImportAttribute::get_TypeId()
				{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System", "Attribute", 0, NULL, "get_TypeId", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Object(__result__);
				}


				//	Get/Set:CallingConvention
				mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__ DllImportAttribute::get_CallingConvention()
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "CallingConvention"));
				}

				void DllImportAttribute::set_CallingConvention(mscorlib::System::Runtime::InteropServices::CallingConvention::__ENUM__  value)
				{
				}

				//	Get/Set:CharSet
				mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__ DllImportAttribute::get_CharSet()
				{
					return static_cast<mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__>(Global::GetFieldInt32Value(__native_object__, "CharSet"));
				}

				void DllImportAttribute::set_CharSet(mscorlib::System::Runtime::InteropServices::CharSet::__ENUM__  value)
				{
				}

				//	Get/Set:EntryPoint
				mscorlib::System::String DllImportAttribute::get_EntryPoint()
				{
					return mscorlib::System::String((MonoObject*)Global::GetFieldStringValue(__native_object__, "EntryPoint"));
				}

				void DllImportAttribute::set_EntryPoint(mscorlib::System::String  value)
				{
				}

				//	Get/Set:ExactSpelling
				mscorlib::System::Boolean DllImportAttribute::get_ExactSpelling()
				{
					return Global::GetFieldBooleanValue(__native_object__, "ExactSpelling");
				}

				void DllImportAttribute::set_ExactSpelling(mscorlib::System::Boolean  value)
				{
				}

				//	Get/Set:PreserveSig
				mscorlib::System::Boolean DllImportAttribute::get_PreserveSig()
				{
					return Global::GetFieldBooleanValue(__native_object__, "PreserveSig");
				}

				void DllImportAttribute::set_PreserveSig(mscorlib::System::Boolean  value)
				{
				}

				//	Get/Set:SetLastError
				mscorlib::System::Boolean DllImportAttribute::get_SetLastError()
				{
					return Global::GetFieldBooleanValue(__native_object__, "SetLastError");
				}

				void DllImportAttribute::set_SetLastError(mscorlib::System::Boolean  value)
				{
				}

				//	Get/Set:BestFitMapping
				mscorlib::System::Boolean DllImportAttribute::get_BestFitMapping()
				{
					return Global::GetFieldBooleanValue(__native_object__, "BestFitMapping");
				}

				void DllImportAttribute::set_BestFitMapping(mscorlib::System::Boolean  value)
				{
				}

				//	Get/Set:ThrowOnUnmappableChar
				mscorlib::System::Boolean DllImportAttribute::get_ThrowOnUnmappableChar()
				{
					return Global::GetFieldBooleanValue(__native_object__, "ThrowOnUnmappableChar");
				}

				void DllImportAttribute::set_ThrowOnUnmappableChar(mscorlib::System::Boolean  value)
				{
				}


			}
		}
	}
}
