#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_EncoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			//Public Methods
			mscorlib::System::Text::EncoderFallbackBuffer EncoderFallback::CreateFallbackBuffer()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderFallback", 0, NULL, "CreateFallbackBuffer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::EncoderFallbackBuffer(__result__);
			}

			//Get Set Properties Methods
			//	Get:MaxCharCount
			mscorlib::System::Int32  EncoderFallback::get_MaxCharCount()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderFallback", 0, NULL, "get_MaxCharCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:ExceptionFallback
			mscorlib::System::Text::EncoderFallback  EncoderFallback::get_ExceptionFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderFallback", 0, NULL, "get_ExceptionFallback", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}


			//	Get:ReplacementFallback
			mscorlib::System::Text::EncoderFallback  EncoderFallback::get_ReplacementFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "EncoderFallback", 0, NULL, "get_ReplacementFallback", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::EncoderFallback(__result__);
			}




		}
	}
}
