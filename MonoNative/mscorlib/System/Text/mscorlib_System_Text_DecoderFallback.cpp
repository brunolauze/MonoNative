#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallback.h>
#include <mscorlib/System/Text/mscorlib_System_Text_DecoderFallbackBuffer.h>
#include <mscorlib/System/mscorlib_System_Type.h>
#include <mscorlib/System/mscorlib_System_String.h>



namespace mscorlib
{
	namespace System
	{
		namespace Text
		{

			Property<mscorlib::System::Text::DecoderFallback , mscorlib::System::Text::DecoderFallback> mscorlib::System::Text::DecoderFallback::ExceptionFallback(&mscorlib::System::Text::DecoderFallback::get_ExceptionFallback, &mscorlib::System::Text::DecoderFallback::set_ExceptionFallback);
			Property<mscorlib::System::Text::DecoderFallback , mscorlib::System::Text::DecoderFallback> mscorlib::System::Text::DecoderFallback::ReplacementFallback(&mscorlib::System::Text::DecoderFallback::get_ReplacementFallback, &mscorlib::System::Text::DecoderFallback::set_ReplacementFallback);
			//Public Methods
			mscorlib::System::Text::DecoderFallbackBuffer DecoderFallback::CreateFallbackBuffer()
			{
					MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderFallback", 0, NULL, "CreateFallbackBuffer", __native_object__, 0, NULL, NULL, NULL);
					return mscorlib::System::Text::DecoderFallbackBuffer(__result__);
			}

			//Get Set Properties Methods
			//	Get:MaxCharCount
			mscorlib::System::Int32  DecoderFallback::get_MaxCharCount() const
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderFallback", 0, NULL, "get_MaxCharCount", __native_object__, 0, NULL, NULL, NULL);
				return *(mscorlib::System::Int32*)mono_object_unbox(__result__);
			}


			//Get Set Static Properties Methods
			//	Get:ExceptionFallback
			mscorlib::System::Text::DecoderFallback  DecoderFallback::get_ExceptionFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderFallback", 0, NULL, "get_ExceptionFallback", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void DecoderFallback::set_ExceptionFallback(mscorlib::System::Text::DecoderFallback  value)
			{
				throw;
			}


			//	Get:ReplacementFallback
			mscorlib::System::Text::DecoderFallback  DecoderFallback::get_ReplacementFallback()
			{
				MonoObject *__result__ = Global::InvokeMethod("mscorlib", "System.Text", "DecoderFallback", 0, NULL, "get_ReplacementFallback", NullMonoObject, 0, NULL, NULL, NULL);
				return mscorlib::System::Text::DecoderFallback(__result__);
			}

			void DecoderFallback::set_ReplacementFallback(mscorlib::System::Text::DecoderFallback  value)
			{
				throw;
			}




		}
	}
}
