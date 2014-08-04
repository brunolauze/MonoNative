#include <mscorlib/System/Diagnostics/mscorlib_System_Diagnostics_StackFrame.h>
#include <mscorlib/System/Reflection/mscorlib_System_Reflection_MethodBase.h>
#include <mscorlib/System/mscorlib_System_Type.h>



namespace mscorlib
{
	namespace System
	{
		namespace Diagnostics
		{

			//Public Methods
			mscorlib::System::Int32 StackFrame::GetFileLineNumber()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "GetFileLineNumber", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Int32 StackFrame::GetFileColumnNumber()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "GetFileColumnNumber", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String StackFrame::GetFileName()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "GetFileName", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			mscorlib::System::Int32 StackFrame::GetILOffset()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "GetILOffset", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::Reflection::MethodBase StackFrame::GetMethod()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "GetMethod", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Reflection::MethodBase(__result__);
			}

			mscorlib::System::Int32 StackFrame::GetNativeOffset()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "GetNativeOffset", __native_object__, 0, NULL, NULL, NULL);
					return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}

			mscorlib::System::String StackFrame::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

				//	Get/Set:OFFSET_UNKNOWN
			mscorlib::System::Int32 StackFrame::get_OFFSET_UNKNOWN()
			{
				return Global::GetFieldInt32Value("mscorlib", "System.Diagnostics", "StackFrame", 0, NULL, "OFFSET_UNKNOWN");
			}

			void StackFrame::set_OFFSET_UNKNOWN(mscorlib::System::Int32  value)
			{
			}


		}
	}
}
