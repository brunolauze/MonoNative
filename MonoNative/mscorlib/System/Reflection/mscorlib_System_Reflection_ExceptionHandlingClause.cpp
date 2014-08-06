#include <mscorlib/System/Reflection/mscorlib_System_Reflection_ExceptionHandlingClause.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Reflection
		{

			//Public Methods
			mscorlib::System::String ExceptionHandlingClause::ToString()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "ToString", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::String(__result__);
			}

			//Get Set Properties Methods
			//	Get:CatchType
			mscorlib::System::Type  ExceptionHandlingClause::get_CatchType() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_CatchType", __native_object__, 0, NULL, NULL, NULL);
				return mscorlib::System::Type(__result__);
			}


			//	Get:FilterOffset
			mscorlib::System::Int32  ExceptionHandlingClause::get_FilterOffset() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_FilterOffset", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:Flags
			mscorlib::System::Reflection::ExceptionHandlingClauseOptions::__ENUM__  ExceptionHandlingClause::get_Flags() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_Flags", __native_object__, 0, NULL, NULL, NULL);
				return static_cast<mscorlib::System::Reflection::ExceptionHandlingClauseOptions::__ENUM__>(*(mscorlib::System::Int32*)mono_object_unbox(__result__));
			}


			//	Get:HandlerLength
			mscorlib::System::Int32  ExceptionHandlingClause::get_HandlerLength() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_HandlerLength", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:HandlerOffset
			mscorlib::System::Int32  ExceptionHandlingClause::get_HandlerOffset() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_HandlerOffset", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:TryLength
			mscorlib::System::Int32  ExceptionHandlingClause::get_TryLength() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_TryLength", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//	Get:TryOffset
			mscorlib::System::Int32  ExceptionHandlingClause::get_TryOffset() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Reflection", "ExceptionHandlingClause", 0, NULL, "get_TryOffset", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}



		}
	}
}
